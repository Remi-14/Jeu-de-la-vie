// Game.hpp
#ifndef GAME_HPP
#define GAME_HPP

#include \"Grid.hpp\"\n#include <SFML/Graphics.hpp>

class Game {
private:
    Grid grid;
    sf::RenderWindow window;
    float iterationDelay;

    void drawGrid();

public:
    Game(const std::string& filename);
    void run();
};

#endif // GAME_HPP
