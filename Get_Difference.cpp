#include <bits/stdc++.h>
using namespace std;
class Node 
{
public:
    long long val;
    Node *next;
    Node(long long val) 
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, long long v) 
{
    Node *newNode = new Node(v);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int find_max_min_diff(Node *head) 
{
    if (head == NULL) return 0;

    long long maxVal = head->val, minVal = head->val;
    Node *tmp = head;
    while (tmp != NULL) 
    {
        maxVal = max(maxVal, tmp->val);
        minVal = min(minVal, tmp->val);
        tmp = tmp->next;
    }
    return maxVal - minVal;
}
int main() 
{
    Node *head = NULL, *tail = NULL;
    long long val;
    while (cin >> val && val != -1) {
        insert_at_tail(head, tail, val);
    }

    cout <<find_max_min_diff(head) << endl;
    return 0;
}