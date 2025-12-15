#include "it.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IT w;
    w.show();
    return a.exec();
}
