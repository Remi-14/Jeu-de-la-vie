// Cell.hpp
#ifndef CELL_HPP
#define CELL_HPP

class Cell {
private:
    bool alive;

public:
    Cell(bool state = false) : alive(state) {}

    bool isAlive() const { return alive; }
    void setAlive(bool state) { alive = state; }

    void updateState(int liveNeighbors);
};

#endif // CELL_HPP
