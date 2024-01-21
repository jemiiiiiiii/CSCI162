#include <iostream>
#include <cmath>
    using std::cout;
    using std::endl;
    using std::cin;
    using std::string;

void swap ( int* array, int a, int b)
{
	int temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

int main()
{
    string binary;
	cout << "Enter the binary number: ";
	cin >> binary;
    int size = binary.length();
	int* binArray = new int [size];
	for ( int i = 0; i < size; i++)
    {
		binArray[i] = binary[i] - '0';
	}

    for ( int i = 0; i < size/2 ; i++) {
		swap ( binArray, i, size - i - 1);
	}

    int temp = 0;
	for ( int i = 0; i < size; i++) {
		int dec = (pow(2, i)) * binArray[i];
		temp += dec;
	}

    cout << "Decimal conversion: " << temp << endl;
    

}