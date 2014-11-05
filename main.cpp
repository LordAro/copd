#include "copdwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    COPDWindow w;
    w.show();

    return a.exec();
}
