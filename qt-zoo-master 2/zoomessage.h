#ifndef ZOOMESSAGE_H
#define ZOOMESSAGE_H

#include "zooobject.h"
#include "QString"

enum ZooErrorLevel {ERROR, WARNING, INFO, VERBOSE, DEBUG};

class ZooMessage: public ZooObject
{
private:
    ZooErrorLevel errorLevel;
    QString message;
    ZooObject* from;
public:
    ZooMessage(ZooErrorLevel errorlevel, QString message, ZooObject* from);
    ZooErrorLevel getErrorLevel() const;
    QString getMessage() const;
    QString getFrom() const;
    QString getEmitorName() const;
};

#endif // ZOOMESSAGE_H
