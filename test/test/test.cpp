#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void) {
	
	int *p = new int(20);
	if (NULL == p)
	{
		system("pause");
		return 0;
	}
	*p = 20;//一样效果
	cout << *p  << endl;

	delete p;
	p = NULL;


	int *pp = new int[1000];
	if (NULL == pp)
	{
		system("pause");
		return 0;
	}

	pp[0] = 10;
	pp[1] = 20;
	cout << pp[0] << pp[1] << endl;
	delete []pp;;


	system("pause");
	return 0;
}

