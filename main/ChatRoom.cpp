#include "ChatRoom.h"
#include <iostream>

void ChatRoom::sendMessage(const std::string& sender, const std::string& receiver, const std::string& message) {
    std::cout << sender << " sent a message to " << receiver << ": " << message << std::endl;
}

void ChatRoom::broadcastMessage(const std::string& sender, const std::string& message) {
    std::cout << sender << " broadcasted a message: " << message << std::endl;
}