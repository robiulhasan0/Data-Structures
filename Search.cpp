#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    long long val;
    Node *next;
    Node(long long val) {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, long long v)
{
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int find_index(Node *head, int x)
{
    Node *tmp = head;
    int index = 0;
    while (tmp != NULL) {
        if (tmp->val == x) {
            return index;
        }
        tmp = tmp->next;
        index++;
    }
    return -1;
}

int main()
{
    long long t;
    cin >> t;
    while (t--) {
        Node *head = NULL, *tail = NULL;
        int v;
        while (cin >> v && v != -1) {
        insert_at_tail(head, tail, v);
        }
    int x;
    cin >> x;
    cout << find_index(head, x) << endl;
    Node *pos = head;
    while (pos != NULL) {
        Node *next = pos->next;
        delete pos;
        pos = next;
        }
    }
    return 0;
}