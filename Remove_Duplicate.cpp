#include <iostream>
using namespace std;
class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void remove_dup(Node *&head) 
{
    Node *pos = head;
    while (pos != NULL && pos->next != NULL) {
        Node *temp = pos;
        while (temp->next != NULL) {
            if (temp->next->val == pos->val) {
            Node *dup = temp->next;
            temp->next = temp->next->next;
            delete dup;
            } else {
                temp = temp->next;
            }
        }
        pos = pos->next;
    }
}
void print_linked_list(Node *head) 
{
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void delete_linked_list(Node *&head) 
{
    while (head != NULL) {
        Node *tmp = head;
        head = head->next;
        delete tmp;
    }
}
int main() {
    Node *head = NULL;
    int value;

    while (cin >> value && value != -1) {
        insert_at_tail(head, value);
    }
    remove_dup(head);
    print_linked_list(head);
    delete_linked_list(head);

    return 0;
}