#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;

double add(vector<double>& x, vector<double>& y, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += x[i] * y[(i+1)%n];  // Use modulo to wrap around to the first point
    }
    return sum;
}

double sub(vector<double>& x, vector<double>& y, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += x[(i+1)%n] * y[i];  // Use modulo to wrap around to the first point
    }
    return sum;
}

int main() {
    vector<double> x, y;
    int n = 0;
    cout << "Enter the number of points: ";
    cin >> n;
    cout << "Please enter the coordinates of the points according to the order(clockwise or anti-clockwise)" << endl;
    for (int i = 0; i < n; i++) {
        double a = 0, b = 0;
        cout << "\nEnter the coordinates x" << i+1 << " and y" << i+1 << ": ";
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }

    // Shoelace formula for area
    double area = 0.5 * abs(add(x, y, n) - sub(x, y, n));

    cout << "\nThe area of the polygon is: " << area << endl;
    return 0;
}
