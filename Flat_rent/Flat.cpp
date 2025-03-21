#include "Flat.h"

Flat::Flat(const std::string& str, int rooms, double area)
    : street(str), roomCount(rooms), totalArea(area) {}

std::ostream& operator<<(std::ostream& os, const Flat& flat) {
    os << "st. " << flat.street << " - " << flat.roomCount
        << " room(s) (" << flat.totalArea << " sq. m)";
    return os;
}

bool Flat::removeRoom(double roomArea) {
    if (roomCount <= 1) {
        std::cout << "Cannot remove a room as the flat has only one room." << std::endl;
        return false;
    }
    else {
        roomCount -= 1;
        totalArea -= roomArea;
        return true;
    }
}

bool Flat::operator==(const std::string& otherStreet) const {
    return street == otherStreet;
}

bool Flat::operator==(const Flat& otherFlat) const {
    return street == otherFlat.street;
}