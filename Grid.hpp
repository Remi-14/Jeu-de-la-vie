// Grid.hpp
#ifndef GRID_HPP
#define GRID_HPP

#include <vector>
#include \"Cell.hpp\"

class Grid {
private:
    std::vector<std::vector<Cell>> cells;
    size_t rows;
    size_t cols;

    int countLiveNeighbors(size_t x, size_t y) const;

public:
    Grid(size_t rows, size_t cols);

    void loadFromFile(const std::string& filename);
    void update();
    void display() const;

    size_t getRows() const { return rows; }
    size_t getCols() const { return cols; }
    bool isCellAlive(size_t x, size_t y) const;
};

#endif // GRID_HPP
