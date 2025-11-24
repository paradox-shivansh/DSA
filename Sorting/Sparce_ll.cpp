#include<iostream>
using namespace std;

class Node {
public:
    int col, row, data;
    Node *next;  // ✅ should point to another Node

    Node(int row, int col, int data) {
        this->col = col;
        this->row = row;
        this->data = data;
        this->next = NULL;
    }
};

class SparseList {
public:
    Node *head;  // ✅ should be Node*, not int*

    SparseList() {
        head = nullptr;
    }

    void create_sparse(int row, int col, int data) {
        Node *temp = new Node(row, col, data);
        temp->next = head;
        head = temp;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << "(" << temp->row << "," << temp->col << ") -> " << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main() {
    SparseList s;
    s.create_sparse(0, 1, 5);
    s.create_sparse(2, 3, 10);
    s.create_sparse(4, 0, 15);

    cout << "Sparse Matrix (Linked List Representation):\n";
    s.display();

    return 0;
}
