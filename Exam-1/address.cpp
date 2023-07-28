#include <iostream>
using namespace std;

class Node
{
public:
    string address;
    Node *next;
    Node *prev;
    Node(string address)
    {
        this->address = address;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, string address)
{
    Node *newNode = new Node(address);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void visit(Node *&head, string address)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->address == address)
        {
            cout << tmp->address << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}

void next(Node *&current)
{
    if (current == NULL || current->next == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        current = current->next;
        cout << current->address << endl;
    }
}

void prev(Node *&current)
{
    if (current == NULL || current->prev == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        current = current->prev;
        cout << current->address << endl;
    }
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string address;
    while (true)
    {
        cin >> address;
        if (address == "end")
            break;
        insert_tail(head, tail, address);
    }

    int Q;
    cin >> Q;

   Node *current = head;

    for (int i = 0; i < Q; i++)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string address;
            cin >> address;
            visit(head, address);
        }
        else if (command == "next")
        {
            next(current);
        }
        else if (command == "prev")
        {
            prev(current);
        }
    }

    return 0;
}