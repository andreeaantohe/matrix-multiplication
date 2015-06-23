#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream f ("fisier.in");	
	//fisier de intrare
	ofstream g ("fisier.out");	//fisier de iesire
	int A[10][10], B[10][10], C[10][10], i, j, k, s, n;
	f>>n;
	for (i=0; i<n; i++)	//citim matricea A
		for (j=0; j<n; j++)
			f>>A[i][j];
	for (i=0; i<n; i++)	//citim matricea B
		for (j=0; j<n; j++)
			f>>B[i][j];
	for (i=0; i<n; i++)	//calculam matricea C
	{
		for (j=0; j<n; j++)
		{
			s=0;
			for (k=0; k<n; k++)
				s=s+A[i][k]*B[k][j];
			C[i][j]=s;
		}
	}
	for (i=0; i<n; i++)	//scriem matricea C
	{
		for (j=0; j<n; j++)
			g<<C[i][j]<<" ";
		g<<endl;
	}
	return 0;
}

