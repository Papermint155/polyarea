#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define PI 3.14159265358979
#define STR_SEPARATOR "\n*********************************************"

double turnrad(double theta){
    double rad = theta/180*PI;
    return rad;
}
double invrad(double theta){
   double degree = theta*180/PI;
   return degree;
}

double flen(double n , double a1 ,double a2){
    double len = n * sin(turnrad(a1)) / sin(turnrad(a2));
    return len;
}

double ftheta(double n1, double n2, double a ){
    double theta = asin(sin(turnrad(a))* n1 / n2);
    return theta;
}

int main() {
    cout << "Please enter the data needed to calculate\n";
    int n = 0;
    cin >> n;
    double n1,n2,a1,a2 =0;
    for(int i=0; i<n; i++){
        cout << "\nPlease input the side 1 side 2, angle 1 and angle 2 accordingly, if it is the variable need to find put 0\n";
        cin >> n1 >> n2 >> a1 >> a2;
        if(n1 == 0){
            cout << "\nLength of the n1 side is " << flen(n2,a1,a2)<<STR_SEPARATOR;
        } else if (n2 == 0){
            cout << "\nLength of the n2 side is " << flen(n1,a2,a1)<<STR_SEPARATOR;
        } else if(a1 == 0){
            double theta = invrad(ftheta(n1,n2,a2));
            cout << "\nAngle of a1 is "<< theta <<"/"<<180-theta<<STR_SEPARATOR;//have rounding error
        } else if (a2 == 0){
            double theta = invrad(ftheta(n2,n1,a1));
            cout << "\nAngle of a2 is "<< theta<<"/"<<180-theta<<STR_SEPARATOR;//have rounding error
        }
    }
    return 0;
}
