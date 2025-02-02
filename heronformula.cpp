#include <bits/stdc++.h>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

double heron(double a, double b, double c){
    double area, s = 0;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

int main () {
    double a, b, c = 0;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n ; i++){
    cout << "\nPLease Enter The Triangle Side" <<"\n";
    cin >> a >> b >> c;
    cout << "Area of triangle "<< i+1 <<" side is " << heron(a,b,c) << "\n*****************************************************************";

    }
    return 0;
}

