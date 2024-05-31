#include "GroupRoster.h"

// Destructor to clean up memory used by pointers
template <typename T>
GroupRoster<T>::~GroupRoster() {
    MemberNode<T>* current = head;
    while (current != nullptr) {
        MemberNode<T>* next = current->next;
        delete current->data;
        delete current;
        current = next;
    }
}

// Add a member to the roster
template <typename T>
void GroupRoster<T>::addMember(T* member) {
    MemberNode<T>* newNode = new MemberNode<T>;
    newNode->data = member;
    newNode->next = nullptr;

    if (isEmpty()) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

// Print the roster
template <typename T>
std::string GroupRoster<T>::printRoster() const {
    std::stringstream ss;
    MemberNode<T>* current = head;

    while (current != nullptr) {
        ss << *(current->data) << "\n";
        current = current->next;
    }

    return ss.str();
}

// Check if the roster is empty
template <typename T>
bool GroupRoster<T>::isEmpty() const {
    return head == nullptr;
}

// Get the size of the roster
template <typename T>
int GroupRoster<T>::size() const {
    int count = 0;
    MemberNode<T>* current = head;

    while (current != nullptr) {
        count++;
        current = current->next;
    }

    return count;
}
