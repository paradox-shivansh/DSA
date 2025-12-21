#include <iostream>
#include <unordered_set>
using namespace std;

// Definition of Linked List Node
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to detect loop using unordered_set
bool detectLoop(Node* head) {
    unordered_set<Node*> seen;  // Stores addresses of visited nodes
    
    Node* current = head;
    
    while (current != nullptr) {
        // If we have already seen this node, there is a loop
        if (seen.find(current) != seen.end()) {
            return true;  // Loop detected
        }
        
        // Insert current node into the set
        seen.insert(current);
        
        // Move to next node
        current = current->next;
    }
    
    return false;  // No loop found
}

// Helper function to create a new node
Node* newNode(int data) {
    return new Node(data);
}

// Driver code for testing
int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    
    // Create a loop: 5 points back to 3
    head->next->next->next->next->next = head->next->next;  // 5 -> 3
    
    if (detectLoop(head)) {
        cout << "Loop detected in the linked list!" << endl;
    } else {
        cout << "No loop in the linked list." << endl;
    }
    
    return 0;
}