#include <QtGui/QApplication>
#include "dialog.h"
#include<QTextCodec>
int m_score;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("utf8");
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);
    Dialog w;
    w.show();
    return a.exec();
}
