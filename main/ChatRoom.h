#pragma once
#ifndef CHATROOM_H
#define CHATROOM_H

#include <string>

class ChatRoom {
public:
    void sendMessage(const std::string& sender, const std::string& receiver, const std::string& message);
    void broadcastMessage(const std::string& sender, const std::string& message);
};

#endif // CHATROOM_H