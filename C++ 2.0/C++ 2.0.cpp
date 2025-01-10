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
    void Reading() {
        ofstream outFile("File");
        if (outFile.is_open()) {
            outFile << speed << weight << weight << year;
            outFile.close();
        }
    }
    void Recording() {
        ifstream inFile("File");
        if (inFile.is_open()) {
            inFile >> speed >> weight >> brand >> year;
            cout << "Speed: " << speed << endl << "Weight: " << weight << endl << "Brand: " << brand << endl << "Year: " << year;
            inFile.close();
        }
    }
};

int main()
{
    Car p;
    p.Reading();
    p.Recording();
}