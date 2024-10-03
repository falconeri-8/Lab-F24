#include <iostream>

using namespace std;

void spacing() { cout << "------------------" << endl; }

float getInterestRate(int months)
{
    if (months <= 12)
    {
        return 0.1;
    }
    else if (months > 12 && months <= 24)
    {
        return 0.15;
    }
    else if (months > 24 && months <= 36)
    {
        return 0.2;
    }
    else if (months > 36 && months <= 48)
    {
        return 0.25;
    }
    else if (months > 48 && months <= 60)
    {
        return 0.3;
    }
    return 0.0;
}

int main()
{

    int months;
    float vehiclePrice;
    float downPayment;
    float interestRate;

    spacing();
    cout << "CarsNLoans Loan Calculator" << endl;
    cout << "Enter the vehicle price : " ;
    cin >> vehiclePrice;
    cout << "Enter the down payment amount : " ;
    cin >> downPayment;
    cout << "Enter number of installment months : " ;
    cin >> months;

    float payable = vehiclePrice - downPayment;
    float withInterest = payable + (payable * getInterestRate(months));
    float monthly = withInterest / months;

    cout << "Your monthly installment = " << monthly << endl;

    ;
}