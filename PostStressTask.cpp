// PostStressTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "pch.h"
#include <unordered_set>
#include <algorithm>
using namespace std;

/* Problem of array, sum of pairs = number

/* complexity O(N) */
void getSumPairs(int num, int arr[], int size)
{
	unordered_set<int> setofPair; int pair;
	for (int i = 0; i < size; i++)
	{
		pair = num - arr[i];
		if (pair >= 0 && setofPair.find(pair) != setofPair.end())
			cout << "(" << arr[i] << ", " << pair << ")" << endl;
             setofPair.insert(arr[i]);
	}
}


//reversing number with recursion
/*int reverseNum(int num) {
	int tens = 0;
	if (num < 10) return num;
	else {
		while (num / 10) tens++;
		int rev = num % 10 * tens * 10;
		return reverseNum(num / 10) + rev;
	}
}*/

/* problem of linked list and cycle finding
???? Note: ov asec for loopov chi lini? o_O -> for(node* i = top; i!=NULL; i = top->next)  length++; //I guess ok klni
?? mid pointer pahelu pah@ chhaskaca inch kap uner cycle gtnelu het, kmtacem :(
// en cycle-i problem@, anvstah aseci ban chhaskacvec
uzum ei counting pahei visited noderi inj vor arrayum orinak, vor pahin vor node-i visited-i qanak@ darnar 2 return anei ed
node-i previous node-i indexn u asei inqn a cycle arajacrel

*/



int main()
{
	int arr[] = { 2, 8, 4, 6, 7, 10, 5, 25, 21, 20, 3 };
	int num;
	cout << "Please enter your number" << endl;
	cin >> num;
	getSumPairs(num, arr, 11);
	cout << "for number reversing";
	//cin >> num;
	//cout << "Reverse number" << reverseNum(num);
}

