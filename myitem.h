#ifndef MYITEM_H
#define MYITEM_H

#include <QGraphicsPixmapItem>
#include<QCursor>
#include<QGraphicsSceneMouseEvent>

class myItem : public QGraphicsPixmapItem
{
public:
    myItem(int index);
    virtual  void mousePressEvent(QGraphicsSceneMouseEvent * mouseEvent);
};
#endif // MYITEM_H
