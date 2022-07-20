#include <iostream>
using namespace std;

class Node
{
public:
    int vale;
    Node *next;
};

// Head
Node *head;

void Insert(int x)
{
    Node *container = new Node();
    container->vale = x;
    container->next = NULL;
    // connnecting previous node with new node;
    if (head != NULL)
    {
        container->next = head;
    }

    head = container;
}

void Reverse()
{
    Node *current = head;
    Node *NextAddress = NULL;
    Node *Prevs = NULL;

    while (current != NULL)
    {
        NextAddress = current->next;
        current->next = Prevs;
        Prevs = current;
        current = NextAddress;
    }
    head = Prevs;
}
void Display()
{
    cout << "List is  ";
    Node *storeTemp = head;
    while (storeTemp != NULL)
    {
        cout << storeTemp->vale << " ";

        storeTemp = storeTemp->next;
    }
    cout << endl;
}

int main()
{

    cout << "Enter size of the list" << endl;

    Insert(1);
    Insert(2);
    Display();

    Reverse();
    Display();
}