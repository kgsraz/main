#pragma once
#ifndef CHATAPP_H
#define CHATAPP_H

#include <vector>
#include "User.h"
#include "ChatRoom.h"

class ChatApp {
private:
    std::vector<User> users;
    User* currentUser;
    ChatRoom chatRoom;

public:
    void registerUser(const User& user);
    void login(const std::string& username, const std::string& password);
    void sendMessage(const std::string& receiver, const std::string& message);
    void broadcastMessage(const std::string& message);
    void logout();
};

#endif // CHATAPP_H