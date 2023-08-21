// example 5 Cable company billing

# include <iostream>
# include <iomanip>

using namespace std; 

const double res_bill_fees = 4.5;
const double res_basic = 20.5;
const double res_prem = 7.5;

const double bus_bill_fees = 15;
const double bus_basic = 75;
const double bus_conn = 5;
const double bus_prem = 50;

int main()
{
    int accountNum; 
    char customerType;
    int numOfPremChannels; 
    int numOfBasic;
    double amounDue;

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "THis program computes a cable bill " << endl;
    cout << "Enter an account number (an integer): ";
    cin >> accountNum;
    cout << endl;
    cout << "Enter customer type: "
         << "R or r (Residential), "
         << "B or b (bussiness): ";
    cin >> customerType;
    cout <<endl;

    switch (customerType)
    {
        case 'r':
        case 'R':
        cout << "Enter the numbe of premier channels: ";
        cin >> numOfPremChannels;
        cout << endl;

        amounDue = res_bill_fees + res_basic + numOfPremChannels * res_prem;
        cout << "Amount number : "
             << accountNum
             <<amounDue
             <<endl;
        break;

        case 'B':
        case 'b':
        cout << "Enter the numbe of basic services connections: ";
        cin >> numOfBasic;
        cout << endl;

        cout << "Enter the number of premier channles : ";
        cin >> numOfPremChannels;
        cout << endl;

        if (numOfBasic <= 10)
            amounDue = bus_bill_fees + bus_basic + numOfPremChannels * bus_prem;
        else
            amounDue = bus_bill_fees + bus_basic + (numOfBasic - 10) * bus_conn + numOfPremChannels *bus_prem;
        
        cout << "Account number : "<< accountNum<<endl;
        cout << "Amount due :$ "<< amounDue << endl;
        break;

        default:
            cout <<" Invalid customer type"<< endl;
    




    }

}