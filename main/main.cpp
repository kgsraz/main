#include <iostream>
#include <vector>
#include "User.h"
#include "ChatApp.h"

int main() {

    ChatApp chatApp;

    try {
        // Регистрация пользователей
        User user1("Alice", "password1");
        User user2("Bob", "password2");

        chatApp.registerUser(user1);
        chatApp.registerUser(user2);

        // Логин пользователя
        chatApp.login("Alice", "password1");

        // Отправка сообщений
        chatApp.sendMessage("Bob", "Hello, Bob!");

        // Отправка широковещательного сообщения
        chatApp.broadcastMessage("Broadcast message from Alice!");

        // Логаут пользователя
        chatApp.logout();

    }
    catch (const std::exception& e) {
        std::cerr << "Произошла ошибка: " << e.what() << std::endl;
    }

    return 0;
}