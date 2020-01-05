#include "zoomessages.h"
#include "QDebug"
#include "zoomessages.h"


ZooMessages::ZooMessages():ZooObject("messages")
{

}

void ZooMessages::addMessage(ZooMessage *message)
{
    messages.push_back(message);
}

ZooMessages::MessagesList ZooMessages::getMessages() const
{
    return messages;
}

ZooMessages::MessagesList ZooMessages::getMessagesByErrorLevel(ZooErrorLevel lvl) const
{
    MessagesList messageList;
    for(int i = 0; messages.size() - 1; i++){
        if(messages.at(i)->getErrorLevel() == lvl){
            messageList.push_back(messages.at(i));
        }
    }
    return messageList;
}

ZooMessages::MessagesList ZooMessages::getMessagesByEmitor(ZooObject *emetteur)
{
    MessagesList messageList;
    for(int i = 0; messages.size() - 1; i++){
        if(messages.at(i)->getEmitorName() == typeid (emetteur).name()){
            messageList.push_back(messages.at(i));
        }
    };
    return messageList;
}




