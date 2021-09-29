//============================================================================
// Name        : Arrays_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#define MAX 100
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
	int t[MAX];
	int i;
	int n;
	int comptador;

	srand (time (NULL));

	for (i=0;i<MAX;++i)
	{
		 t[i]=rand() % (50 - 1 + 1) + 1;

		 cout << t[i] << " " << endl;
	}

		cout << "Introdueixi un nombre entre l'1 i el 50:";
		cin >> n;


	comptador = 0;
	for(i=0; i<MAX ; i++)
	{
		if(t[i]==n)
			comptador ++;
	}

		cout << "Aquest nombre exixteix " << comptador << " vegades";




	return 0;
}
