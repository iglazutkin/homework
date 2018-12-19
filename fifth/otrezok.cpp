#include <iostream>
using namespace std;

int main()
{
    float a;
    float b;
    int n;
    cout << "kol-vo otrezkov?";
    cin >> n;
    float *p = new float[n];
    float *k = new float[n];
    for (int i = 0;i<n;i++) {
        cin >> p[i];
        cin >> k[i];
    }
    for (int i = 0;i<n;i++)
     {
        for (int j = 0; j < n - i - 1; j++) {
            if (k[j] > k[j + 1]) {
                b = k[j];
                a = p[j];
                p[j] = p[j+1];
                p[j + 1] = a;
                k[j] = k[j + 1];
                k[j + 1] = b;
            }
        }
     }
     cout << p[0] << ";" << k[0] << " ";
     a = k[0];
     b = 1;
      for (int i = 1;i<n;i++) {
            if (p[i] >= a) {
                cout << p[i] << ";" << k[i] << " ";
                a = k[i];
                b = ++b;
            }
      }
      delete [] p;
      delete [] k;
      cout << " Kol-vo otrezkov " << b;
    return 0;
}
