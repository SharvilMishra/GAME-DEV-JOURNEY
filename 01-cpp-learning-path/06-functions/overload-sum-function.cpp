#include <iostream>
using namespace std;
void sum(int x, int y)
{
    cout << x + y << endl;
}

void sum(double x, double y)
{
    cout << x + y << endl;
}

int main()
{
    sum(3.14, 2.71);
    sum(345, 567);
    return 0;
}