#include "dialog.h"
#include "ui_dialog.h"
extern      int m_score;
static int a;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    cou=0;
    a=0;
    ui->setupUi(this);
    ui->gv->setScene(&sc);
    m_pTimer=new QTimer;//首先创建一个定时器
        connect(m_pTimer,SIGNAL(timeout()),
              this,SLOT(showTime()));//关联信号和槽函数,自定义的普通类不能使用
        //3.设置超时时间

}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::showTime()
{
    int num;
     QTime time;
     time=QTime::currentTime();
qsrand(time.msec()+time.second()*1000);
num=qrand()%9;
cou++;
if(cou>=2)
    {
sc.showmouse(num);
cou=0;
}
ui->Lcdscord->display(m_score);//显示
ui->Lcdscord_2->display(a);//显示
shengji();
    QString szTime=QString("00:00:%1").arg(m_Time);
ui->Lcd->display(szTime);//显示
if( --m_Time <0 )
    {
m_pTimer->stop();
m_score=0;
ui->startbtn_2->setEnabled(true);
ui->startbtn_3->setEnabled(true);
    }
}

void Dialog::on_startbtn_clicked()
{
    //1.或得用户时间并显示
    m_score=0;
    a=1;
    m_Time=60;
    ui->Lcd->display(m_Time);//显示
    //2.禁止继续输入框和按钮
    ui->startbtn->setEnabled(false);
    ui->startbtn_2->setEnabled(false);
    ui->startbtn_3->setEnabled(false);
    //3.启动
    m_pTimer->start(1000);
}
void Dialog::on_startbtn_3_clicked()
{
    close();
}
void Dialog::on_startbtn_2_clicked()
{
    m_pTimer->start(1000);
    m_score=0;
    m_Time=60;
    ui->startbtn->setEnabled(false);
    ui->startbtn_2->setEnabled(false);
}
void Dialog::shengji()
{
    if(m_score>100 && a==1)
    {
        m_pTimer->stop();
       int ret=QMessageBox::information(NULL,"升级","恭喜您进入第2关","开始");
        if( 0 == ret )
            {
            a=a+1;
           m_score=0;
            ui->startbtn->setEnabled(false);
            ui->startbtn_2->setEnabled(false);
            ui->startbtn_3->setEnabled(false);
            m_pTimer->start(500);
            }
    }

    if(m_score>100 && a==2)
    {
        m_pTimer->stop();
       int ret=QMessageBox::information(NULL,"升级","恭喜您进入第3关","开始");
        if( 0 == ret)
            {
            a=a+1;
           m_score=0;
            ui->startbtn->setEnabled(false);
            ui->startbtn_2->setEnabled(false);
            ui->startbtn_3->setEnabled(false);
            m_pTimer->start(500);
            }
    }
    if(m_score>100 && a==3)
    {
        m_pTimer->stop();
       int ret=QMessageBox::information(NULL,"升级","闯关结束","关闭");
        if( 0 == ret)
            {
            a=a+1;
           m_score=0;
            ui->startbtn->setEnabled(true);
            ui->startbtn_2->setEnabled(true);
            ui->startbtn_3->setEnabled(true);
            }
    }
}

