#ifndef SECTIONEDLISTVIEW_H
#define SECTIONEDLISTVIEW_H

#include <QTreeView>

class SectionedListView : public QTreeView
{
public:
    SectionedListView(QWidget *parent = nullptr);
    void setModel(QAbstractItemModel *model) override ;

    QAbstractItemDelegate *itemDelegateForIndex(const QModelIndex &index) const;

private:
    QAbstractItemDelegate *sectionPainterDelegate = nullptr;

};


#endif // SECTIONEDLISTVIEW_H
