#ifndef PIRATE_H
#define PIRATE_H

#include <string>
#include <iostream>

class Pirate {
private:
    std::string name;
    std::string ship;

public:
    Pirate(const std::string& name, const std::string& ship) : name(name), ship(ship) {}

    // Overload the << operator
    friend std::ostream& operator<<(std::ostream& os, const Pirate& pirate) {
        os << "Name: " << pirate.name << ", Ship: " << pirate.ship;
        return os;
    }

    // Overload the == operator
    bool operator==(const Pirate& other) const {
        return (name == other.name && ship == other.ship);
    }
};

#endif // PIRATE_H
