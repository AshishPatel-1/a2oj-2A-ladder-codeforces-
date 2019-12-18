  
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;

    int a = x1 - x2;
    int b = y1 - y2;

    if (a!= 0 and b!= 0)
    {
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
    }
    else if (a!= 0)
    {
        x3 = x1;
        y3 = y1 + abs(a);
        x4 = x2;
        y4 = y2 + abs(a);
    }
    else
    {
        x3 = x1 + abs(b);
        y3 = y1;
        x4 = x2 + abs(b);
        y4 = y2;
    }

    if (a!= 0 and b!= 0 and abs(a) != abs(b))
        cout << -1 << endl;
    else
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}