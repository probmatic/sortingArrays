/*probmatic*/
/*Using bubble sort to arrange numbers in an array in ascending order*/


#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the amount of integers you would like to sort:" << endl;
  	cin >> n;
    
 	cout << "Enter " << n <<" integers to sort. Hit 'Enter' after each input: " << endl;
	int numbArray[n] = {};
 	for (int i = 0; i < n; i++)
	{
		cin >> numbArray[i];
	}
	cout << "The numbers you inputted are: ";
	
	for (int i = 0; i < n; i++)
	{
		cout << numbArray[i] << " ";
	}

	cout << endl << "Sorting into ascending order using a bubble sort:"<< endl;

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n-1; i++)
		{
			if (numbArray[i] > numbArray[i + 1])
			{
				int temp = numbArray[i + 1];
				numbArray[i + 1] = numbArray[i];
				numbArray[i] = temp;
			}
		}
	}
	
	cout << "Numbers sorted are: ";
	for (int i = 0; i < n ; i++)
	{
		cout << numbArray[i] << " ";
	}

	system("pause");
	return 0;
}
