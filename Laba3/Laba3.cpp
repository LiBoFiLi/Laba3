#include "Source.cpp"

int main() {
    Logistics* boat = new BoatCreator();
    boat->Delivering();
    delete boat;

    Logistics* truck = new TruckCreator();
    truck->Delivering();
    delete truck;

    return 0;
}
