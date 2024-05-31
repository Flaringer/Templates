#ifndef GROUPROSTER_H
#define GROUPROSTER_H

#include <string>
#include <sstream>

// Node Struct for holding data
template <typename T>
struct MemberNode {
    T* data;
    MemberNode* next;
};

// Group Roster Class Definition
template <typename T>
class GroupRoster {
private:
    MemberNode<T>* head;
    MemberNode<T>* tail;

public:
    // Constructor
    GroupRoster() : head(nullptr), tail(nullptr) {}

    // Destructor
    ~GroupRoster();

    // Add a member to the roster
    void addMember(T* member);

    // Print the roster
    std::string printRoster() const;

    // Check if the roster is empty
    bool isEmpty() const;

    // Get the size of the roster
    int size() const;
};

// Include the implementation file
#include "GroupRoster.tpp"

#endif // GROUPROSTER_H
