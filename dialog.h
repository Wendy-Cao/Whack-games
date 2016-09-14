#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "myscene.h"
#include<QTimer>
#include<QTime>
#include "myitem.h"
#include<QMessageBox>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    void shengji();
    ~Dialog();
    
public slots:
   void showTime();

private slots:
   void on_startbtn_clicked();

   void on_startbtn_2_clicked();

   void on_startbtn_3_clicked();

private:
    Ui::Dialog *ui;
    int m_Time;
        QTimer *m_pTimer;//首先创建一个定时器
    myScene sc;
    int cou;
    int a;
};

#endif // DIALOG_H
