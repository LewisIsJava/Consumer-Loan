// Consumer Loan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int face_value;
    double interest_amount, monthly_payment, desired_interest, duration_of_loan_in_months;
    

    cout << "This program will calculate a discount intallment loan\n"
        << "It will do this by taking the interest off of the face value of the loan\n";

    cout << "Please enter the face value of the loan you require: $";
    cin >> face_value;
    cout << "Please enter the interest on this loan: %";
    cin >> desired_interest;
    cout << "Enter the duration at which this loan will be payed back in months: ";
    cin >> duration_of_loan_in_months;

    cout << endl;
    double duration_of_loan_in_years = duration_of_loan_in_months / 12, literal_interest;

    while (face_value > 0)
    {
        monthly_payment = face_value / duration_of_loan_in_months;
        literal_interest = desired_interest / 100;
        interest_amount = (face_value * literal_interest) * (duration_of_loan_in_years);
        face_value = face_value - interest_amount;
        

        cout << "With a interest of " << literal_interest << "% " << "and being paid over a peiod of " << duration_of_loan_in_years << endl
            << "this equates to $" << interest_amount << " this being paid instantly leaves you with a face value of $" << face_value << endl;
        
        cout << "To do another calculation, just enter new values when prompted, or enter 0 to exit\n";
        cout << "Please enter the face value of the loan you require : $";
        cin >> face_value;
        cout << "Please enter the interest on this loan: %";
        cin >> desired_interest;
        cout << "Enter the duration at which this loan will be payed back in months: ";
        cin >> duration_of_loan_in_months;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
