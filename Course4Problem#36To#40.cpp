#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// #36
enum enOpType{Add = '+', Sustract = '-', Multiply = '*', Division = '/' };

int ReadNumber(string Message)
{
    int Number = 0;

    cout << Message << endl;
    cin >> Number;

    return Number;
}

enOpType ReadOpType()
{
    char OpType = '+';

    cout << "Please enter operation type\n";
    cin >> OpType;

    return (enOpType)OpType;
}

int Calculate2Numbers(int Number1 , int Number2 , enOpType OpType)
{
    
    switch (OpType)
    {
    case enOpType::Add:
        return Number1 + Number2;
    case enOpType::Sustract:
        return Number1 - Number2;
    case enOpType::Multiply:
        return Number1 * Number2;
    case enOpType::Division:
        return Number1 / Number2;
    default:
        cout << "Not an operation type\n";
    }

}

// #37
int SubstractNumbers()
{

    int Num = 0, Counter = 1 , Sum = 0;

    do
    {
        Num = ReadNumber("Enter numbers to substract, when ever need to get the result type(-99) " + to_string(Counter));
        
        if (Num == -99)
        {
            break;
        }

        Sum += Num;
        Counter++;

    } while (Num != -99);

    return Sum;

}

// #38
enum enPrimeOrNotPrime{Prime = 1 , NotPrime = 0};

float ReadPositiveNumber(string Message)
{
    float Num = 0;

    do {

        cout << Message << "\n";
        cin >> Num;

       } while (Num <= 0);

    return Num;

}

enPrimeOrNotPrime CheckIfPrime(int Num)
{

    if (Num == 1 || Num == 2)
        return enPrimeOrNotPrime::NotPrime;
    

    int M = round(Num / 2);

    for (int i = 2; i <= M; i++)
    {

        if (Num % i == 0)
           return enPrimeOrNotPrime::NotPrime;

    }

    return enPrimeOrNotPrime::Prime;
}

void PrintNumberType(int Num)
{

    if (CheckIfPrime(Num) == enPrimeOrNotPrime::NotPrime)
        cout << "Number is not a prime\n";
    else
        cout << "Number is a prime\n";

}

// #39
float GetRemainder(float TotalBill , float TotalCashPaid)
{
    return TotalCashPaid - TotalBill;
}

void PrintRemainder()
{
   float TotalBill = ReadPositiveNumber("Enter total bill");
   float TotalCashPaid = ReadPositiveNumber("Enter total cash paid");

   cout << "\nTotal bill  =  " << TotalBill << "\n\n";
   cout << "Total cash paid =  " << TotalCashPaid << "\n\n";
   cout << "\n**************************\n";

   cout << "Remainder =  " << GetRemainder(TotalBill , TotalCashPaid) << "\n\n";

}

// #40
float TotalBillAfterServiceAndTax(float TotalBill)
{

    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;

    return TotalBill;

}

void PrintTotalBillAfterServiceAndTax()
{

    float Bill = ReadPositiveNumber("Enter the bill to get total bill after tax and service");

    cout << "Total bill before tax and service = " << Bill;

    cout << "\nTotal bill after tax and service =  " << TotalBillAfterServiceAndTax(Bill) << "\n";

}

int main()
{
    // #36
  /*  float Number1 = ReadNumber("Enter first number\n");
    float Number2 = ReadNumber("Enter second number\n");

    enOpType OpType = ReadOpType();

    cout << Calculate2Numbers(Number1, Number2 , OpType) << "\n";*/

    // #37
   //cout << endl << "Result = " << SubstractNumbers() << endl;

    // #38
    //PrintNumberType(ReadPositiveNumber("Enter a positive number"));

    // #39
    //PrintRemainder();

    // #40
    //PrintTotalBillAfterServiceAndTax();


    return 0;
}

