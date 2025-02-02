#include <bits/stdc++.h>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;
double turnrad(double theta){
    double rad = 0;
    rad = theta /180*3.14159265359;
    return rad;
}
double sinarea(double n1 , double n2, double theta){
    double area = 0;
    area = 0.5*n1*n2*sin(turnrad(theta));
    return area;
}
int main () {
    double n1,n2,angle,n = 0;
    cout << "Please enter the number of try";
    cin >> n;
    for(int i = 0; i<n; i++){
        cout << "\nPlease enter the side 1 and side 2 and the angle between side\n";
        cin >> n1 >> n2 >> angle;
        cout << "Area of triangle is " << sinarea(n1,n2,angle) << "\n**********************************************************";
    }
    return 0;
}
