#ifndef GROUPMEMBER_H
#define GROUPMEMBER_H

#include <string>
#include <iostream>

class GroupMember {
private:
    std::string name;
    int age;

public:
    GroupMember(const std::string& name, int age) : name(name), age(age) {}

    // Overload the << operator
    friend std::ostream& operator<<(std::ostream& os, const GroupMember& member) {
        os << "Name: " << member.name << ", Age: " << member.age;
        return os;
    }
};

#endif // GROUPMEMBER_H
