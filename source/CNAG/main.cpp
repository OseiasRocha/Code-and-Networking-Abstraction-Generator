#include "cnagmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CNAGMainWindow w;
    w.show();
    return a.exec();
}
