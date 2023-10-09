#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double jarak;
    int s;
    int v;
    double srad;

    cout<<"Menghitung jarak horizontal burung boro \n";
    cout<<"Masukan sudut : ";
    cin >> s;
    cout<<"Masukan Kecepatan : ";
    cin >> v;
    srad = s * (3.14 / 180);
    jarak = v * v * sin(2 * srad) / 10;
    cout <<"jarak terjauh yang bisa ditempuh boro adalah : ";
    cout <<fixed<<setprecision(1) << jarak << endl;
    return 0;
}
