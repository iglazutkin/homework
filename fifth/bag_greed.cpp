#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    float ves;
    float a[5];
    float b;
    string name[5];
    string k;
    float h;
    float weight[5];
    float price[5];
    cin >> ves;
    for (int i = 0;i<5;i++)
    {
        cin >> name[i];
        cin >> weight[i];
        cin >> price[i];
        a[i] = price[i]/weight[i];
    }
    for (int i = 0;i<5;i++)
     {

        for (int j = 0; j < 5 - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                b = a[j];
                k = name[j];
                h = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = h;
                name[j] = name [j + 1];
                name[j + 1] = k;
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }


     }
       for (int i = 0;i<5;i++)
       {
           if (ves >= weight[i]) {

            ves = ves - weight[i];
            cout << name[i];
           }
           else
            {
           b = ves/weight[i];
           ves = ves - weight[i];
           cout << b << name[i];
           break;
           }
       }
       return 0;

}
