#include <iostream>

using namespace std;
struct H
{
    float a;
    float b;
    float c;
    float d;
};
int main()
{
    char l;
 H H1;
 cin >> H1.a;
 cin >> H1.b;
 cin >> H1.c;
 cin >> H1.d;
 cin >> l;
 H H2;
 cin >> H2.a;
 cin >> H2.b;
 cin >> H2.c;
 cin >> H2.d;
 H H3;
 switch(l) {
case '+':
     H3.a = H1.a + H2.a;
     H3.b = H1.b + H2.b;
     H3.c = H1.c + H2.c;
     H3.d = H1.d + H2.d;
     break;
 case '-':
     H3.a = H1.a - H2.a;
     H3.b = H1.b - H2.b;
     H3.c = H1.c - H2.c;
     H3.d = H1.d - H2.d;
     break;
 case '*':
    H3.a = (H1.a*H2.a)-(H1.b*H2.b)-(H1.c*H2.c)-(H1.d*H2.d);
    H3.b = (H1.a*H2.b)+(H1.b*H2.a)+(H1.c*H2.d)-(H1.d*H2.c);
    H3.c = (H1.a*H2.c)+(H1.c*H2.a)-(H1.b*H2.d)+(H1.d*H2.b);
    H3.d = (H1.a*H2.d)+(H1.d*H2.a)-(H1.c*H2.b)+(H1.b*H2.c);
    break;
 case '/':
    H3.a = (H1.a*(H2.a/(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)))-(H1.b*(H2.b/-(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)))-(H1.c*(H2.c/-(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)))-(H1.d*(H2.d/-(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)));
    H3.b = (H1.a*(H2.b/-(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)))+(H1.b*(H2.a/(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)))+(H1.c*(H2.d/-(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)))-(H1.d*(H2.c/-(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)));
    H3.c = (H1.a*(H2.c/-(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)))+(H1.c*(H2.a/(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)))-(H1.b*(H2.d/-(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)))+(H1.d*(H2.b/-(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)));
    H3.d = (H1.a*(H2.d/-(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)))+(H1.d*(H2.a/(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)))-(H1.c*(H2.b/-(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)))+(H1.b*(H2.c/-(H2.a*H2.a+H2.b*H2.b+H2.c*H2.c+H2.d*H2.d)));
    break;
 default:
    cout << "error";
    return 0;
 }
 cout << H3.a << " + ";
 cout << H3.b << "i + ";
 cout << H3.c << "j + ";
 cout << H3.d << "k";
    return 0;
}
