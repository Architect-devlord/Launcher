#include "ModFolderLoadTask.h"
#include <QDebug>

ModFolderLoadTask::ModFolderLoadTask(QStringList dirs) :
    m_dirs(dirs), m_result(new Result())
{
}

void ModFolderLoadTask::run()
{
    for (auto & dirPath : m_dirs)
    {
        QDir dir(dirPath);
        if (!dir.exists())
            continue;
        dir.setFilter(QDir::Readable | QDir::NoDotAndDotDot | QDir::Files | QDir::Dirs);
        dir.setSorting(QDir::Name | QDir::IgnoreCase | QDir::LocaleAware);
        dir.refresh();
        for (auto entry : dir.entryInfoList())
        {
            Mod m(entry);
            m_result->mods[m.mmc_id()] = m;
        }
    }
    emit succeeded();
}
