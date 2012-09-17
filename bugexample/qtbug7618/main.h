#include <QObject>

class MyObject : public QObject
{
    Q_OBJECT
  public:
    MyObject(QObject *parent) : QObject(parent) {}
    virtual ~MyObject() {}
  public slots:
    void wakeUp(void);
};
