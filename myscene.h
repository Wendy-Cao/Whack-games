#ifndef MYSCENE_H
#define MYSCENE_H

#include <QGraphicsScene>
#include "myitem.h"

class myScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit myScene(QObject *parent = 0);
    void showmouse(int num);
signals:
    
public slots:
    
};

#endif // MYSCENE_H
