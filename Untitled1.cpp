# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;


    cout << "\n[1] Addition\n [2] Subtraction \n [3] Multiplication \n [4] Divide \n";
    cout << "Enter operator to be use:";
    cin >> op;

    cout << "\nEnter Number: ";
    cin >> num1;
	cout << "Enter Number : ";
	cin>> num2;

    switch(op)
    {
        case '1':
            cout << "\n The answer is:"<<num1+num2;
            break;

        case '2':
            cout << "\n The answer is:"<<num1-num2;
            break;

        case '3':
            cout <<"\n The answer is:"<< num1*num2;
            break;

        case '4':
            cout << "\n The answer is:"<<num1/num2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}

