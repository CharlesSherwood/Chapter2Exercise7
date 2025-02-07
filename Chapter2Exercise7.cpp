/*File Name:Chapter2exercise7.cpp
Progrmmer Name:Charles Sherwood
Date:2/2025
Requirements:This program will calulate the difference in
the ocean levels if the ocen rises at 1.5 times per year for 5,7,10 years
*/

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    
    double rise = 1.5;
    double five = 5;
    double seven = 7;
    double ten = 10;


    double five_years = rise * five;
    double seven_years = rise * seven;
    double ten_years = rise * ten;

    cout << "In this program we will be looking at the difference of ocean levels if the rate was 1.5millimeters per year" << endl;

    cout << "If the ocean rose at a rate of 1.5 millimeters five years it would be at " << five_years <<" millimeters"<< endl;
    cout << "If the ocean rose at a rate of 1.5 millimeters for seven years it would be at " << seven_years << " millimeters" << endl;
    cout << "If the ocean rose at a rate of 1.5 millimeters for ten years it would be at " << ten_years << " millimeters" << endl;
    return 0;



}
