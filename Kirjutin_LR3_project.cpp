#include <iostream>
#include <limits>

using namespace std;

/*- ввести вещественное число x
- ввести вещественное число y
- ввести вещественное число z
- найти целую часть суммы этих 3-х чисел
- найти дробную часть среднего геометрического модулей этих 3-х чисел */

/* - enter the real number x
- enter the real number y
- enter a real number z
- find the integer part of the sum of these 3 numbers
- find the fractional part of the geometric mean of the modules of these 3 numbers */

int prov(int& num1)
{
	while (true)
	{
		cin >> num1;
		if (!cin)
		{
			cout << "Error. Enter the correct data type." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		else break;
	}
	cout << "You entered: " << num1 << endl;
	cout << " " << endl;
	return num1;
}

int task1(double& x)
{
    return x;
}

int task2(double& y)
{
    return y;
}

int task3(double& z)
{
    return z;
}

void task4()
{
    
}

void task5()
{
    
}

void main() 
{
    int h;
    double x, y, z;

    cout << "Welcome. Please, enter the number of task you wanna run or enter 0, if you wanna exit the program." << endl;
    cout << "1 - enter the real number x" << endl;
    cout << "2 - enter the real number y" << endl;
    cout << "3 - enter a real number z" << endl;
    cout << "4 - find the integer part of the sum of these 3 numbers" << endl;
    cout << "5 - find the fractional part of the geometric mean of the modules of these 3 numbers" << endl;
    prov(h);

    switch(h)
    {
        case 0:
            cout << "Shutting down the program. Goodbye!" << endl;
			break;
        case 1:
            task1(x);
            break;
        case 2:
            task2(y);
            break;
        case 3:
            task3(z);
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        default:
            cout << "There are no options that need this button" << endl;
            cout << " " << endl;
            cin.clear();
            break;
    }
}