#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int s;
    int v;
    double t;
    int status;
    double sinA;

    cin >> s;
    cin >> v;
    cin >> t;
    sinA = sin((double) (s * 22) / 7 / 180);
    t = pow(v, 2) * pow(sinA, 2) / 20;
    cout << t << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

