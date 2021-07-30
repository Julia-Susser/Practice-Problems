#include <iostream>
#include "file2.h"

using namespace std;

int main()
{
    Rectangle r;
    r.width = 10;
    r.height = 15;
    r.x = 3;
    r.y = 2;

    cout << r.area() << endl;

    

    return 0;
}
