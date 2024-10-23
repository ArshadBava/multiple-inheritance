#include <iostream>

using namespace std;

class Drivable {
public:
    virtual void drive() = 0;
};

class Flyable {
public:
    virtual void fly() = 0;
};

class FlyingCar : public Drivable, public Flyable {
public:
    void drive() override {
        cout << "The flying car is driving on the road." << endl;
    }

    void fly() override {
        cout << "The flying car is soaring through the sky." << endl;
    }
};

int main() {
    FlyingCar myFlyingCar;

    int choice;
    cout << "Enter 1 to drive the car or 2 to fly the car: ";
    cin >> choice;

    if (choice == 1) {
        myFlyingCar.drive();
    } else if (choice == 2) {
        myFlyingCar.fly();
    } else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}

