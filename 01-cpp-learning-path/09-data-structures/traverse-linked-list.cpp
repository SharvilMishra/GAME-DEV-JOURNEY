#include <iostream>
using namespace std;

struct node
{
    int info;
    node *link;
};

void trav(node *start)
{
    node *t = start;

    while (t != NULL)
    {
        cout << t->info << " ";
        t = t->link;
    }
}

int main()
{
    node *p, *start, *t;

    // First node
    p = new node;
    p->info = 10;
    p->link = NULL;
    start = p;
    t = p;

    // Second node
    p = new node;
    p->info = 20;
    p->link = NULL;
    t->link = p;
    t = p;

    // Third node
    p = new node;
    p->info = 30;
    p->link = NULL;
    t->link = p;
    t = p;

    trav(start);

    return 0;
}