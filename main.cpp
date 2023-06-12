#include "checkemail.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CheckEmail w;
    w.show();
    return a.exec();
}
