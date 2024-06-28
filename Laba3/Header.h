#pragma once
#include <iostream>
#include <string>

using namespace std;

class Transport {
public:
    virtual std::string Load() = 0;
    virtual std::string Deliver() = 0;
};

class Boat : public Transport {
public:
    std::string Load() override {
        return "Loading goods onto the boat.";
    }
    std::string Deliver() override {
        return "Delivering goods by boat.";
    }
};

class Truck : public Transport {
public:
    std::string Load() override {
        return "Loading goods onto the truck.";
    }
    std::string Deliver() override {
        return "Delivering goods by truck.";
    }
};

class Logistics {
public:
    virtual Transport* CreateTransport() = 0;

    std::string Delivering() {
        Transport* Transport = this->CreateTransport();
        std::string result = "Logistics: The transport has been used for delivery. "
            + Transport->Load() + " " + Transport->Deliver();
        cout << result << endl;
        delete Transport;
        return result;
    }
};

class BoatCreator : public Logistics {
public:
    Transport* CreateTransport() override {
        return new Boat;
    }
};

class TruckCreator : public Logistics {
public:
    Transport* CreateTransport() override {
        return new Truck;
    }
};


