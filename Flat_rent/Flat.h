#include <iostream>
#include <string>

class Flat {
private:
    std::string street;
    int roomCount;
    double totalArea;

public:
    Flat(const std::string& str, int rooms, double area);

    friend std::ostream& operator<<(std::ostream& os, const Flat& flat);

    bool removeRoom(double roomArea);

    bool operator==(const std::string& otherStreet) const;

    bool operator==(const Flat& otherFlat) const;
};
