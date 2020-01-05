#ifndef ZOOMESSAGES_H
#define ZOOMESSAGES_H

#include<QVector>


#include "zoomessage.h"
#include "zooobject.h"

class ZooMessages : public ZooObject
{
private:
    typedef QVector<ZooMessage*> MessagesList;
    MessagesList messages;

public:
    ZooMessages();
    void addMessage(ZooMessage *message);
    MessagesList getMessages() const;
    MessagesList getMessagesByErrorLevel(ZooErrorLevel lvl) const;
    MessagesList getMessagesByEmitor(ZooObject* emetteur);
    MessagesList getInstance();
};

#endif // ZOOMESSAGES_H
