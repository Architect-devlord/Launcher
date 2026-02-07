#include "ResourcePackFolderModel.h"

ResourcePackFolderModel::ResourcePackFolderModel(const QStringList &dirs, const QString &manifestPath) : ModFolderModel(dirs, manifestPath) {
}

QVariant ResourcePackFolderModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (role == Qt::ToolTipRole) {
        switch (section) {
            case ActiveColumn:
                return tr("Is the resource pack enabled?");
            case NameColumn:
                return tr("The name of the resource pack.");
            case VersionColumn:
                return tr("The version of the resource pack.");
            case DateColumn:
                return tr("The date and time this resource pack was last changed (or added).");
            default:
                return QVariant();
        }
    }

    return ModFolderModel::headerData(section, orientation, role);
}
