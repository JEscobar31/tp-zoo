#include "zoomessage.h"
#include "zooobject.h"



ZooErrorLevel ZooMessage::getErrorLevel() const
{
    return errorLevel;
}

QString ZooMessage::getMessage() const
{

}

QString ZooMessage::getFrom() const
{

}

QString ZooMessage::getEmitorName() const
{
    return typeid (from).name();
}

ZooMessage::ZooMessage(ZooErrorLevel errorlevel, QString message, ZooObject *from)
    :ZooObject("message"), errorLevel (errorlevel), message(message), from(from)
{

}
