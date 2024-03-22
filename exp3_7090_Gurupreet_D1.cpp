#include <iostream>
#include <vector>
using namespace std;

class Room {
private:
    float length;
    float breadth;

public:
    Room() {}

    void get() {
        cout << "Enter the length of the room: ";
        cin >> length;
        cout << "Enter the breadth of the room: ";
        cin >> breadth;
    }

    void display() {
        cout << "Length of the room: " << length << endl;
        cout << "Breadth of the room: " << breadth << endl;
    }

    float area() {
        return length * breadth;
    }

    float perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    vector<Room> rooms(5);
    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for room " << i+1 << endl;
        rooms[i].get();
    }

    // Displaying area and perimeter of all rooms
    for (int i = 0; i < rooms.size(); ++i) {
        cout << "\nRoom " << i+1 << endl;
        cout << "Area: " << rooms[i].area() << endl;
        cout << "Perimeter: " << rooms[i].perimeter() << endl;
    }

    return 0;
}
