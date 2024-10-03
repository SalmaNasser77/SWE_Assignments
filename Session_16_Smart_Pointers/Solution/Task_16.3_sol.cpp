#include <iostream>
#include <memory>
#include <vector>

class Character {
public:
    Character(const std::string& name) : name(name) {
        std::cout << name << " has been created.\n";
    }
    ~Character() {
        std::cout << name << " has been destroyed.\n";
    }
    void attack() {
        std::cout << name << " is attacking!\n";
    }
private:
    std::string name;
};

class GameSession {
public:
    GameSession() {
        std::cout << "Game session started.\n";
    }
    ~GameSession() {
        std::cout << "Game session ended.\n";
    }
    void startSession() {
        std::cout << "Game session is running.\n";
    }
};

class Player {
public:
    Player(const std::string& playerName, std::shared_ptr<GameSession> session)
        : name(playerName), session(session) {
        std::cout << playerName << " has joined the session.\n";
    }
    void setCharacter(std::unique_ptr<Character> character) {
        this->character = std::move(character);
    }
    void play() {
        std::cout << name << " is playing.\n";
        if (character) {
            character->attack();
        }
        if (session) {
            session->startSession();
        }
    }
private:
    std::string name;
    std::shared_ptr<GameSession> session;
    std::unique_ptr<Character> character;
};

int main() {
    auto session = std::make_shared<GameSession>();

    Player player1("Player1", session);
    player1.setCharacter(std::make_unique<Character>("Warrior"));

    Player player2("Player2", session);
    player2.setCharacter(std::make_unique<Character>("Mage"));

    player1.play();
    player2.play();

    return 0;
}
