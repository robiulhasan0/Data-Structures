#include <iostream>
using namespace std;
class Node 
{
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
void check_Linked_Lists(Node* head1, Node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->val != head2->val) {
            cout << "NO" << endl;
            return;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 == NULL && head2 == NULL) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main() {
    Node* head1 = NULL;
    int val;
    while (cin >> val && val != -1) {
        Node* newNode = new Node(val);
        newNode->next = head1;
        head1 = newNode;
    }
    Node* head2 = NULL;
    while (cin >> val && val != -1) {
        Node* newNode = new Node(val);
        newNode->next = head2;
        head2 = newNode;
    }
    check_Linked_Lists(head1, head2);

    return 0;
}
