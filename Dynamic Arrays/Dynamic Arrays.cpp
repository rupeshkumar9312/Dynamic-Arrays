// Dynamic Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>


using namespace std;
int main()
{
	int arr_size = 10;    
	
	int* arr = new int[arr_size];
	int index = 0;

	while (cin >> arr[index]) {
		index++;
		if (index >= arr_size) {
			cout << "Continue ... ?? (Y/N)" << endl;
			char choice;
			cin >> choice;
			if (choice == 'N')
				break;
			else
			{
				arr_size = arr_size + 5;
				int* temp = new int[arr_size];
				for (int i = 0; i < index; i++) {
					temp[i] = arr[i];
				}

				delete[] arr;
				arr = temp;
			}
		}
	
		}
	for (int i = 0; i<index; i++) {
		cout << arr[i] << endl;
	}
	/*int size = 5;
	int *arr = new int[size];
	for (int i = 0;;i++)
	{
		cin >> arr[i];
		if (i == size)
		{
			cout << "Do you want add more elements...?? (Y/N)" << endl;
			char choice;
			cin >> choice;
			if (choice == 'Y') {
				size = size + 5;
				int *temp = new int[size];
				for (int j = 0;j < i;j++)
				{
					temp[j] = arr[i];
				}
				delete[] arr;
				arr = temp;
			}
			else
			{

			
				for (int i = 0;i < size;i++)
				{
					cout << arr[i] << endl;
				}
				
			}

		}
	}*/
//X:
//	
	return 0;
}

