#include <iostream>
#include <string>

// Logger class
class Logger {
public:
    void log(const std::string& message) {
        std::cout << "Logging: " << message << std::endl;
    }
};

// UserService class without dependency injection
class UserService {
private:
    Logger logger;

public:
    void performAction(const std::string& username, const std::string& action) {
        logger.log(username + " performed action: " + action);
    }
};

int main() {
    UserService userService;

    userService.performAction("John", "login");

    return 0;
}
