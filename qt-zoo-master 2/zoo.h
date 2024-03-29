#ifndef ZOO_H
#define ZOO_H

#include "zoobudget.h"
#include "zooobject.h"
#include "zoostock.h"
#include "zoomessage.h"
#include "zoomessages.h"
#include <QMap>

typedef QMap<QString, ZooStock*> Stocklist;

class Zoo : public ZooObject
{
    ZooBudget *m_budget;
    Stocklist stockList;
    static Zoo *m_zoo;
    ZooMessage showMessage;
public:
    static Zoo *getInstance(const QString &name = "");
    ~Zoo();
    int addMoney(int amount);
    bool removeMoney(int amount);
    int getMoney();
    void testMe();

private:
    Zoo(const QString &name);
};

#endif // ZOO_H
