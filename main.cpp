#include <iostream>
#include "GroupRoster.h"
#include "GroupMember.h"
#include "Pirate.h"

int main() {
    // Creating GroupRoster instances for different types

    // GroupRoster for GroupMember
    GroupRoster<GroupMember> memberRoster;
    GroupMember* member1 = new GroupMember("Jack", 30);
    GroupMember* member2 = new GroupMember("Emily", 25);
    GroupMember* member3 = new GroupMember("John", 35);

    memberRoster.addMember(member1);
    memberRoster.addMember(member2);
    memberRoster.addMember(member3);

    std::cout << "GroupMember Roster:\n" << memberRoster.printRoster() << std::endl;

    // GroupRoster for Pirate
    GroupRoster<Pirate> pirateRoster;
    Pirate* pirate1 = new Pirate("Blackbeard", "Queen Anne's Revenge");
    Pirate* pirate2 = new Pirate("Jack Sparrow", "Black Pearl");

    pirateRoster.addMember(pirate1);
    pirateRoster.addMember(pirate2);

    std::cout << "Pirate Roster:\n" << pirateRoster.printRoster() << std::endl;

    // GroupRoster for integers
    GroupRoster<int> intRoster;
    int* num1 = new int(42);
    int* num2 = new int(7);

    intRoster.addMember(num1);
    intRoster.addMember(num2);

    std::cout << "Integer Roster:\n" << intRoster.printRoster() << std::endl;

    // Clean up memory
    delete member1;
    delete member2;
    delete member3;

    delete pirate1;
    delete pirate2;

    delete num1;
    delete num2;

    return 0;
}
