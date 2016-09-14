#include "myscene.h"

myScene::myScene(QObject *parent) :
    QGraphicsScene(parent)
{
    myItem *pItem1=new myItem(1) ;//第一个图元默认是中心坐标，后面可以设置偏移量
    addItem(pItem1);
//    pItem1->setEnabled(false);

}
void myScene::showmouse(int num)
{
    clear();
if(num==0)
    {
    myItem *pItem1=new myItem(1) ;//第一个图元默认是中心坐标，后面可以设置偏移量
    addItem(pItem1);
    myItem *pItem2=new myItem(2);//后期图员的坐标系原点在第一个图员的左上角
     pItem2->setPos(148,110);
     addItem(pItem2);
}
if(num==1)
    {
    myItem *pItem1=new myItem(1) ;//第一个图元默认是中心坐标，后面可以设置偏移量
    addItem(pItem1);
    myItem *pItem3=new myItem(3);//后期图员的坐标系原点在第一个图员的左上角
     pItem3->setPos(333,110);
     addItem(pItem3);
}
if(num==2)
    {
    myItem *pItem1=new myItem(1) ;//第一个图元默认是中心坐标，后面可以设置偏移量
    addItem(pItem1);
    myItem *pItem4=new myItem(4);//后期图员的坐标系原点在第一个图员的左上角
     pItem4->setPos(530,110);
     addItem(pItem4);
}
if(num==3)
    {
    myItem *pItem1=new myItem(1) ;//第一个图元默认是中心坐标，后面可以设置偏移量
    addItem(pItem1);
    myItem *pItem5=new myItem(5);//后期图员的坐标系原点在第一个图员的左上角
     pItem5->setPos(120,200);
     addItem(pItem5);
}
if(num==4)
    {
    myItem *pItem1=new myItem(1) ;//第一个图元默认是中心坐标，后面可以设置偏移量
    addItem(pItem1);
    myItem *pItem6=new myItem(6);//后期图员的坐标系原点在第一个图员的左上角
     pItem6->setPos(335,200);
     addItem(pItem6);
}
if(num==5)
    {
    myItem *pItem1=new myItem(1) ;//第一个图元默认是中心坐标，后面可以设置偏移量
    addItem(pItem1);
    myItem *pItem7=new myItem(7);//后期图员的坐标系原点在第一个图员的左上角
     pItem7->setPos(535,200);
     addItem(pItem7);
}
if(num==6)
    {
    myItem *pItem1=new myItem(1) ;//第一个图元默认是中心坐标，后面可以设置偏移量
    addItem(pItem1);
    myItem *pItem8=new myItem(8);//后期图员的坐标系原点在第一个图员的左上角
     pItem8->setPos(116,300);
     addItem(pItem8);
}
if(num==7)
    {
    myItem *pItem1=new myItem(1) ;//第一个图元默认是中心坐标，后面可以设置偏移量
    addItem(pItem1);
    myItem *pItem9=new myItem(9);//后期图员的坐标系原点在第一个图员的左上角
     pItem9->setPos(333,300);
     addItem(pItem9);
}
if(num==8)
    {
    myItem *pItem1=new myItem(1) ;//第一个图元默认是中心坐标，后面可以设置偏移量
    addItem(pItem1);
    myItem *pItem10=new myItem(10);//后期图员的坐标系原点在第一个图员的左上角
     pItem10->setPos(555,300);
     addItem(pItem10);
}
}
