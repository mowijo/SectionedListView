#include "SectionModel.h"

#include <QList>


SectionModel::SectionModel(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant SectionModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex SectionModel::index(int row, int column, const QModelIndex &parent) const
{
    if( ! parent.isValid())
    {
        return createIndex(row, column)
    }
    else
    {
        //This is for a section
        if(row < 0 || row > sections.size()-1)
        {
            return QModelIndex();
        }
        QModelIndex = createIndex(row, column, sections[row]);
    }
}

QModelIndex SectionModel::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int SectionModel::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;


}

int SectionModel::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    return 1;
}

QVariant SectionModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}

void SectionModel::addEntry(const QString &sectionName, const QString entry)
{
    Section *section = nullptr;
    for(Section *candidate : sections)
    {
        if(candidate->name() == sectionName)
        {
            section = candidate;
            break;
        }
    }
    if(!section)
    {
        section = new Section;
        section->setName(sectionName);
        sections.append(section);
    }
    section->addElemment(entry);
}

void SectionModel::dump() const
{
    for(Section *section: sections)
    {
        section->dump();
    }
}
