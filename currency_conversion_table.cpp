#include <iostream> 
#include <cmath>
#include <iomanip>  
using namespace std; 

int main() 
{

double exchangeRate, step, baseAmt;
int rows; 

cout << "\n";
cout << "Enter base amount: ";
cin >> baseAmt;

while (baseAmt <= 0)
{
    cout << "Base amount must be greater than 0. ";
    cin >> baseAmt;
}


cout << "Enter step: ";
cin >> step;

while (step <= 0)
{
    cout << "Step must be greater than 0. ";
    cin >> step;
}

cout << "Enter number of rows: ";
cin >> rows;

while (rows <= 0)
{
    cout << "Number of rows must be greater than 0.";
    cin >> rows;
}


cout << "Enter exchange rate (e.g. CAD -> USD): ";
cin >> exchangeRate;

while (exchangeRate <= 0.00)
{
    cout << "Exchange rate must be greater than 0.";
    cin >> exchangeRate;
}

cout << endl;

cout << setw(10) << right << "Amount" 
    << setw(15) << right << "Converted" << endl;

cout << setw(25) << setfill('-')  << "" << setfill(' ') << "\n";

cout << fixed << setprecision(2); 

for (int i = 0; i < rows; i++)
{
    double amount = baseAmt + i * step;
    double converted = amount * exchangeRate;

cout << setw(10) << right << amount 
    << setw(15) << right << converted << "\n";       
}

/* 
int baseAmt;
int step;
int rows; 
int exchangeRate; 
*/





return 0; 
}