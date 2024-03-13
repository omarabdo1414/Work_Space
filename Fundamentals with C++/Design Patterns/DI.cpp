#include <iostream>
#include <string>

// Logger interface
class ILogger {
public:
    virtual void log(const std::string& message) = 0; // pure virtual function
    virtual ~ILogger() = default;
};

class Logger : public ILogger {
public:
    void log(const std::string& message) override {
        std::cout << "Logging: " << message << std::endl;
    }
};

class UserService {
private:
    ILogger& m_logger;

public:
    // Constructor with dependency injection
    UserService(ILogger& logger) : m_logger(logger) {}

    void performAction(const std::string& username, const std::string& action) {
        m_logger.log(username + " performed action: " + action);
    }
};

int main() {
    // Create Logger instance
    Logger logger;

    // Inject Logger into UserService
    UserService userService(logger);

    userService.performAction("John", "login");

    return 0;
}
