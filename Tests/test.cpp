#include "pch.h"
#include "Source.cpp"

TEST(BoatTest, Operation) {
    Boat boat;
    EXPECT_EQ(boat.Deliver(), "Delivering goods by boat.");
}


TEST(TruckTest, Operation) {
    Truck truck;
    EXPECT_EQ(truck.Deliver(), "Delivering goods by truck.");
}


TEST(LogisticBoat, del) {
    BoatCreator t;
    std::string result = t.Delivering();
    EXPECT_EQ(result, "Logistics: The transport has been used for delivery. Loading goods onto the boat. Delivering goods by boat.");
}


TEST(LogisticTruck, del) {
    TruckCreator t;
    std::string result = t.Delivering();
    EXPECT_EQ(result, "Logistics: The transport has been used for delivery. Loading goods onto the truck. Delivering goods by truck.");
}
