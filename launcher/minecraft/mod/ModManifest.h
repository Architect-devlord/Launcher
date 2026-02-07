#pragma once

#include <QString>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QMap>

struct ModManifestEntry {
    QString id;
    QString name;
    QString version;
    QString url;

    QJsonObject toJson() const {
        QJsonObject obj;
        obj["id"] = id;
        obj["name"] = name;
        obj["version"] = version;
        obj["url"] = url;
        return obj;
    }

    static ModManifestEntry fromJson(const QJsonObject &obj) {
        return {
            obj["id"].toString(),
            obj["name"].toString(),
            obj["version"].toString(),
            obj["url"].toString()
        };
    }
};

class ModManifest {
public:
    explicit ModManifest(const QString &path) : m_path(path) {
        load();
    }

    void load() {
        QFile file(m_path);
        if (file.open(QIODevice::ReadOnly)) {
            QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
            QJsonObject root = doc.object();
            for (auto it = root.begin(); it != root.end(); ++it) {
                m_entries[it.key()] = ModManifestEntry::fromJson(it.value().toObject());
            }
        }
    }

    void save() {
        QJsonObject root;
        for (auto it = m_entries.begin(); it != m_entries.end(); ++it) {
            root[it.key()] = it.value().toJson();
        }
        QFile file(m_path);
        if (file.open(QIODevice::WriteOnly)) {
            file.write(QJsonDocument(root).toJson());
        }
    }

    void insert(const QString &filename, const ModManifestEntry &entry) {
        m_entries[filename] = entry;
        save();
    }

    ModManifestEntry get(const QString &filename) const {
        return m_entries.value(filename);
    }

    bool contains(const QString &filename) const {
        return m_entries.contains(filename);
    }

private:
    QString m_path;
    QMap<QString, ModManifestEntry> m_entries;
};
