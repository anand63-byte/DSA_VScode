#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insert(int value) {
        Node* new_node = new Node(value);
        if (head == nullptr) {
            head = new_node;
        } else {
            Node* last_node = head;
            while (last_node->next != nullptr) {
                last_node = last_node->next;
            }
            last_node->next = new_node;
        }
    }

    void swapNodes(Node* prev1, Node* curr1, Node* prev2, Node* curr2) {
        if (prev1 != nullptr)
            prev1->next = curr2;
        else
            head = curr2;

        if (prev2 != nullptr)
            prev2->next = curr1;
        else
            head = curr1;

        Node* temp = curr2->next;
        curr2->next = curr1->next;
        curr1->next = temp;
    }

    // Rearrange the nodes as 4 3 5 2 6 7
    void rearrange() {
        Node* prev1 = nullptr;
        Node* curr1 = head;
        Node* prev2 = nullptr;
        Node* curr2 = head;

        // Find node 1 and 4
        for (int i = 1; i < 4; ++i) {
            prev1 = curr1;
            curr1 = curr1->next;
        }

        // Find node 2 and 3
        for (int i = 1; i < 3; ++i) {
            prev2 = curr2;
            curr2 = curr2->next;
        }

        // Swap node 3 and 4
        swapNodes(prev1, curr1, prev2, curr2);
    }

    void printList() {
        Node* current_node = head;
        while (current_node != nullptr) {
            cout << current_node->data << " ";
            current_node = current_node->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList llist;

    // Insert elements 1 2 3 4 5 6 7
    for (int i = 1; i <= 7; i++) {
        llist.insert(i);
    }

    // Rearrange the linked list
    llist.rearrange();

    // Print the rearranged linked list
    llist.printList();

    return 0;
}
