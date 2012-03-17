#include <QtGui/QApplication>
#include <QTextCodec>
#include "ftpclientwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    FtpClientWindow ftpclientWdn;
    ftpclientWdn.show();
    
    return app.exec();
}
