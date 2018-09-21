#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main()
{
	float aluno [4][4];
	float media;
	int i, j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout << "Aluno: " << i;
			cout << "Digite a Primeira Nota: ";
			cin >> aluno[i][j];
			cout << aluno[i][j];
			aluno[i][4] = (aluno[i][1] + aluno[i][2] + aluno[i][3]) /2;
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout << "Aluno: " << i;
			if (aluno[i][j]>=7)
				cout << "Aluno Aprovado!!!! ";
			else
				cout << "Aluno Reprovado!";	
			system("cls");	
		}
	}
	
	cout << "Nota Aluno 1 " << aluno[0][4];
	cout << "Nota Aluno 2 " << aluno[1][4];
	cout << "Nota Aluno 3 " << aluno[2][4];
	cout << "Nota Aluno 4 " << aluno[3][4];
}
