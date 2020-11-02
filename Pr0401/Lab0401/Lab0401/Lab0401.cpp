// Lab0401.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>  
using namespace std;
int main()
{
    int N, i;
    double S;
    cout << "N = "; cin >> N;
    S = 0;
    i = 1;
    while (i <= N) {
        S += (sin(cos(i))/(1+sin(i)*sin(i)));
        i++; }
    cout << S << endl;
    
        S = 0;
        i = 1;
        do {
            S += (sin(cos(i)) / (1 + sin(i) * sin(i)));
            i++;
        } while (i <= N);
        cout << S << endl;
    S = 0;
    for (i = 1; i <= N; i++)
    {
        S  += (sin(cos(i)) / (1 + sin(i) * sin(i)));
    }     cout << S << endl;
    S = 0;
    for (i = N; i >= 1; i--) { S += (sin(cos(i)) / (1 + sin(i) * sin(i)));
    }     cout << S << endl;
    return 0;
}