#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(NULL)));
    int a;
    double x,x1;
    double y,y1;
    double s;
    double avg;
    int i;
    a = -1;
    x1 = 0;
    y1 = 0;
    i = 0;
    s = 0;
    for (i=0;i<100;i=i+1) {
        x = rand()%2000-1000;
        y = rand()%2000-1000;
        x/=100;
        y/=100;
        if ((pow(x,2)+pow(y,2)) < 100) {
         s = s + sqrt(pow((x-x1),2) + pow((y-y1),2));
         x1 = x;
         y1 = y;
         ++a;
        }
    }
    avg = s / a;
    cout << avg;
    return 0;
}
