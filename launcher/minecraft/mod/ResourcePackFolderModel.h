#pragma once

#include "ModFolderModel.h"

class ResourcePackFolderModel : public ModFolderModel
{
    Q_OBJECT

public:
    explicit ResourcePackFolderModel(const QStringList &dirs, const QString &manifestPath = QString());

    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
};
