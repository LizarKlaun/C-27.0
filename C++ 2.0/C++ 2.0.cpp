#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Car {
    int speed;
    string brand;
    int weight;
    int year;
public:
    Car() {
        speed = 70;
        brand = "Audi";
        weight = 140;
        year = 2015;
    }
    friend ostream& operator<<(ostream& os, const Car& p) {
        os << p.speed << " " << p.brand << " " << p.weight << " " << p.year;
        return os;
    }
    friend istream& operator>>(istream& is, Car& p) {
        is >> p.speed >> p.brand >> p.weight >> p.year;
        return is;
    }


};

int main()
{
    Car p;

    ofstream outFile("person.txt");
    if (outFile.is_open()) {
        outFile << p;
        outFile.close();
    }
    ifstream inFile("person.txt");
    if (inFile.is_open()) {
        inFile >> p;
        cout << "Car: " << p.name
        inFile.close();
    }
}