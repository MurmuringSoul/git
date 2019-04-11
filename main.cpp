#include <iostream>
#include <stdlib.h>

using namespace std;

float F(float a, float b, float c, float x)
{
     float R;                               // Результат функции

     if ( (c < 0) && (x != 0) )
         R = -a * x - c;
     else if ( (c > 0) && (x == 0) )
         R=(x - a)/(-c);
     else
         R = (b * x)/(c - a);

         return R;
}

int main()
{
    float xn,xe,dx,x,a,b,c;

    cout << "input xn,xe,dx " << endl;
    cin >> xn >> xe >> dx;                  // xn - начальное x; xe - конечное x; dx - шаг;
    cout << "input a,b,c " << endl;
    cin >> a >> b >> c;
    cout <<"    |    x    |    F    |\n";

    for (x = xn; x <= xe; x += dx)
    {
        printf("    |%9.3f|", x);
        printf("%9.3f|", F(a,b,c,x));
        printf("\n");
    }

    return 0;
}
