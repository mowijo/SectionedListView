#include "SectionedListView.h"

#include <QPainter>

class SectionPainterDelegate : public QAbstractItemDelegate
{
public:
    QAbstractItemDelegate *baseDelegate = nullptr;

    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const override
    {
    //    return baseDelegate->sizeHint(option, index);
        return QSize(50, 150);
    }

    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override
    {
        painter->fillRect(QRect(0,0,150,50), Qt::red);
  //      baseDelegate->paint(painter, option, index);
    }


};

SectionedListView::SectionedListView(QWidget *parent)
    : QTreeView(parent)
{
    SectionPainterDelegate *delegate = new SectionPainterDelegate;
//    delegate->baseDelegate = this->itemDelegateForColumn(0);
    sectionPainterDelegate = delegate;
}

void SectionedListView::setModel(QAbstractItemModel *model)
{
    QTreeView::setModel(model);
    setItemsExpandable(false);
    setExpandsOnDoubleClick(false);
    expandAll();
    setIndentation(0);
    setRootIsDecorated(false);
}

QAbstractItemDelegate *SectionedListView::itemDelegateForIndex(const QModelIndex &index) const
{
    return sectionPainterDelegate;
}

