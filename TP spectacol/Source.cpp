#include <iostream>

int inceput[100], sfarsit[100], nr[100];






int main()
{
	int n, i, h, m, schimb, ultim, aux;
	printf("n="); scanf("%d", &n);
	
	printf("Introduceti inceputul si sfarsitul spectacolelor");
	for (i = 0; i<n; i++)

		
	{nr[i] = i + 1; //transform timpul in minute
	scanf("%d %d",&h,&m); inceput[i] = h * 60 + m;
	scanf("%d %d", &h, &m); sfarsit[i] = h * 60 + m;
	}
	//ordonez spectacolele crescator dupa ora de final
	do
	{
		schimb = 0;
		for (i = 0; i<n - 1; i++)
		if (sfarsit[nr[i]]>sfarsit[nr[i + 1]])
		{
			aux = nr[i]; nr[i] = nr[i + 1]; nr[i + 1] = aux; schimb = 1;
		}
	} while (schimb);
	printf("Spectacolele selectate sunt : \n %d ", nr[0]) ;
	for (ultim = 0, i = 1; i<n; i++)
	if (inceput[nr[i]] >= sfarsit[nr[ultim]])
	{
		printf("%d ", nr[i]); ultim = i;
	}
	printf("\n");

}