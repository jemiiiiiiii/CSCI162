#include <iostream>
    using std::cout;
    using std::endl;
    using std::cin;

void swap ( int* array, int a, int b)
{
	int temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

int main()
{
    int x;
    cout << "Enter a Decimal number: ";
    cin >> x;

    int quot;

    int length = 0;
    int temp = x;
    while ( temp > 0)
    {
        temp /= 2;
        length++;
    }

    int* decArray = new int[length];

    for ( int i = 0; i < length; i++) 
    {
		quot = x / 2;
		decArray[i] = x % 2;
		x = quot;
    }

    for ( int i = 0; i < length/2 ; i++) {
		swap ( decArray, i, length - i - 1);
	}

    cout << "Binary conversion:";
    for (int i = 0; i < length; i++)
    {
        cout << decArray[i];
    }
}