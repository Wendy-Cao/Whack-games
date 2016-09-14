#include "myitem.h"
#include<QDebug>
#include<QtGlobal>
extern      int m_score;
myItem::myItem(int index)
{
    switch(index)
    {
    case 1:
        setPixmap(QPixmap("://image/1.jpg"));
        break;
    case 2:
        setPixmap(QPixmap("://image/mouse.png"));
        break;
    case 3:
        setPixmap(QPixmap("://image/mouse.png"));
        break;
    case 4:
        setPixmap(QPixmap("://image/mouse.png"));
        break;
    case 5:
        setPixmap(QPixmap("://image/mouse.png"));
        break;
    case 6:
        setPixmap(QPixmap("://image/mouse.png"));
        break;
    case 7:
        setPixmap(QPixmap("://image/mouse.png"));
        break;
    case 8:
        setPixmap(QPixmap("://image/mouse.png"));
        break;
    case 9:
        setPixmap(QPixmap("://image/mouse.png"));
        break;
    case 10:
        setPixmap(QPixmap("://image/mouse.png"));
        break;
    }
    setCursor(QPixmap("://image/up.png"));
}
void myItem::mousePressEvent( QGraphicsSceneMouseEvent * mouseEvent)
{
    setCursor(QPixmap("://image/down.png"));
    QPointF xy=mouseEvent->pos();
    int x=xy.rx();
    int y=xy.ry();
    qDebug()<<xy<<endl;
    if(mouseEvent->button()==Qt::LeftButton && x<100 & y<100)
     {
    setPixmap(QPixmap("://image/hit.jpg"));
    m_score=m_score+10;
    }
    setCursor(QPixmap("://image/down.png"));
    return ;
}
