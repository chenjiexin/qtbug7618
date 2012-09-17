#include "main.h"

#include <QCoreApplication>
#include <QTimer>

#include <iostream>

void MyObject::wakeUp(void)
{
    std::cerr << "." << std::flush;
}

int main(int argc, char **argv)
{
    new QCoreApplication(argc, argv);

    MyObject *o = new MyObject(qApp);
    QTimer *t = new QTimer(qApp);
    QObject::connect(t, SIGNAL(timeout()), o, SLOT(wakeUp()));
    t->start(1000 / 70);

    return qApp->exec();
}
