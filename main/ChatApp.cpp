#include "ChatApp.h"
#include <iostream>

void ChatApp::registerUser(const User& user) {
    users.push_back(user);
}

void ChatApp::login(const std::string& username, const std::string& password) {
    for (User& user : users) {
        if (user.getUsername() == username && user.checkPassword(password)) {
            currentUser = &user;
            std::cout << "User " << username << " logged in successfully." << std::endl;
            return;
        }
    }
    throw std::invalid_argument("Incorrect username or password.");
}

void ChatApp::sendMessage(const std::string& receiver, const std::string& message) {
    if (currentUser != nullptr) {
        chatRoom.sendMessage(currentUser->getUsername(), receiver, message);
    }
    else {
        throw std::logic_error("User is not logged in.");
    }
}

void ChatApp::broadcastMessage(const std::string& message) {
    if (currentUser != nullptr) {
        chatRoom.broadcastMessage(currentUser->getUsername(), message);
    }
    else {
        throw std::logic_error("User is not logged in.");
    }
}

void ChatApp::logout() {
    currentUser = nullptr;
    std::cout << "User logged out successfully." << std::endl;
}