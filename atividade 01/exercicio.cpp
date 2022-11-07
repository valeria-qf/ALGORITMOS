#include <iostream>
#include <math.h>
using namespace std;

void ponteiro_substitui(int X, float Y, char Z) // QUESTAO 1
{
  int *P1 = &X;
  float *P2 = &Y;
  char *P3 = &Z;

  
  cout << "\nAntes :" << endl;
  cout << X << endl;
  cout << Y << endl;
  cout << Z << endl;

  *P1 = 3;
  *P2 = 3.5;
  *P3 = 'V';

  cout << "\nDepois: " << endl;
  cout << X << endl;
  cout << Y << endl;
  cout << Z << endl;
}

void SomaAB(int A, int B) // QUESTAO 2
{
  int soma = A + B;
  int *P = &A;
  *P = soma;

  cout << "\nA: " << A << "\nB: " << B << "\nSoma: " << soma << endl;
}

void Vetor() // QUESTAO 3
{
    float V[10];

    for (int i = 0; i<10; i++)
    {
        cout<< &V[i] << endl;
    }
}
 
void Matriz() // QUESTAO 4
{
    float M[3][3];
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout << "Endereço na posição " << i << " x " << j << " é :" << &M[i][j] << endl;
        }
        cout<<endl;
    }

}

void vetor_dobro() // QUESTAO 5
{
    int V[5];
    int *P = &V[0];
    
    cout << "ANTES:" <<endl;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        V[i] = rand() % 50;
        cout << V[i] <<endl;
        P[i] = V[i] * 2;
    }

    cout << "\nDEPOIS:" <<endl;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
     cout<< P[i] <<endl;
    }
}

void vetor_par() // QUESTAO 6
{
  int V[5];


  for(int i = 0; i <5; i++)
    {
      V[i] = rand() % 10;
      cout<< V[i]<< " ";
    }
  for (int i = 0; i < 5; i++)
  {
      if (V[i] %2 == 0 )
        {
            cout <<"\n" << "\nnumero: " << V[i] << "\nposição:  " << &V[i] << endl;
        }
  }

}

void Ponteiro_operacoes() // QUESTAO 7
{
  int A = 10, *B = &A, **C = &B, ***D = &C;

  cout << A << "\nDobro: " << *B * 2 << "\nTriplo: " << **C * 3 << "\nQuádruplo: " << ***D * 4 << endl;

}

int Valores_ordem(int A, int B, int C) // QUESTAO 8
{
  int maior, meio, menor;
  int *PA = &A, *PB = &B, *PC = &C;

  if ((*PA < *PB) && (*PA < *PC))
  {
    menor = *PA;
  }

  if ((*PB< *PA) && (*PB < *PC))
  {
    menor = *PB;
  }

  if ((*PC < *PB) && (*PC < *PA))
  {
    menor = *PC;
  }

  if ((*PA > *PB) && (*PA > *PC))
  {
    maior = *PA;
  }

   if ((*PB > *PA) && (*PB > *PC))
  {
    maior = *PB;
  }

   if ((*PC > *PB) && (*PC > *PA))
  {
    maior = *PC;
  }

  if ((*PA != maior) && (*PA != menor))
  {
    meio = *PA;
  }

  if ((*PB != maior) && (*PB != menor))
  {
    meio = *PB;
  }

  if ((*PC != maior) && (*PC != menor))
  {
    meio = *PC;
  }

  A = menor;
  B = meio;
  C = maior;

  cout <<"\nOrdenado: " << A <<", " << B << ", " << C << " " << endl;

  if ((A == B) && (B == C))
  {
    return 1;
  }

  else
  {
    return 0;
  }

}

void frac2(float num, int* inteiro, float* frac)
{
  int auxInt = int(num);
  inteiro = &auxInt;

  float auxFrac = (num - auxInt);
  frac = &auxFrac;

    cout << "O número digitado foi: " << num << endl;   
    cout << "Parte inteira: " << *inteiro << endl;
    cout << "Parte fracionada: " << *frac << endl; 
}

int negativos(float *vet, int n) {
  int count = 0;

  for(int i = 0; i < n; i++) {
    if (vet[i] < 0) {
      count++;
    }
  }

  cout << "Quantidade de negativos: " << count << endl;

  return count;

}

void parteint(float num, int* inteiro, float* frac, float *mult10)
{
    int auxint = int(num);
    float auxfrac = (num - auxint);
    float auxmult = num * 10;

    inteiro = &auxint;
    mult10 = &auxmult;
    frac = &auxfrac;

    cout << "Número: " << num << endl;
    cout << "Parte inteira: " << *inteiro << endl;
    cout << "Parte fracionada: " << *frac << endl;
    cout << "Multiplicado por 10: " << *mult10 << endl;

}

void calc_hexa(float l, float *area, float *perimetro){

    float a = (3 * pow(l,2) * sqrt(3))/2;
    cout << "A area do hexagono e: " << a;

    cout << '\n';
    float p = ( 6 * l);
    cout << "O perimetro do hexagono e: " << p;
    cout << '\n';

    area = &a;
    perimetro = &p;

}

int main() {

  // QUESTAO 1

  cout<< "QUESTAO 1" << endl;
  ponteiro_substitui(10, 35.5, 'V');
  cout <<"\n-------------------------" << endl;
 
 
  // QUESTAO 2
 
  cout<< "QUESTAO 2" << endl;
  SomaAB(10, 5);
  cout <<"\n-------------------------" << endl;
 

  // QUESTAO 3
    cout <<"QUESTAO 3 \n"<< endl;
    Vetor();
    cout <<"\n-------------------------" << endl;


  // QUESTAO 4

    cout<< "QUESTAO 4 \n" << endl;
    Matriz();
    cout<< endl;
    cout <<"-------------------------" << endl;
   

  // QUESTAO 5

  cout << "QUESTAO 5 \n"<< endl;
  vetor_dobro();
  cout << endl;
  cout <<"-------------------------" << endl;
  
  // QUESTAO 6

  cout << "QUESTAO 6 \n"<< endl;
  vetor_par();
  cout << endl;
  cout <<"-------------------------" << endl;

  // QUESTAO 7

  cout << "QUESTAO 7 \n"<< endl;
  Ponteiro_operacoes();
  cout << endl;
  cout <<"-------------------------" << endl;
  
  // QUESTAO 8

    int P, S, T;

    cout << "QUESTAO 8 \n"<< endl;

    cout<< "Digite o valor de P: "<<endl;
    cin>> P;

    cout<<"Digite o valor de S: " <<endl;
    cin>>S;

    cout<<"Digite o valor de T: ";
    cin>> T;

    Valores_ordem(P, S, T);
    
    cout << endl;
    cout <<"-------------------------" << endl;

  // QUESTAO 9


  cout << "QUESTAO 9 \n"<< endl;
  cout << "Digite um numero real: " << endl;
  float num;
  float *frac;
  int *inteiro;
  cin >> num;
  frac2(num, inteiro, frac);
  cout <<"\n-------------------------" << endl;


  cout << "QUESTAO 10 \n"<< endl;
  cout << "Insira o tamanho do vetor: ";
  int n;
  cin >> n;

  float vetorreal[n];
  float *vet = vetorreal;

  cout << "\nInforme os elementos do array (numeros reais)\n";
  for(int i = 0; i < n; i++) {
    cin >> vetorreal[i];
  }
  negativos(vet, n);
  cout <<"\n-------------------------" << endl;

  // Prova Q2

  cout << "QUESTAO 2 PROVA \n" << endl;
  cout << "Digite um numero real: " << endl;
  float n2;
  cin >> n2;

  int * inteiro2;
  float * frac2;
  float *mult;
  parteint(n2, inteiro2, frac2, mult);

  // Prova Q3

    float l = 0;
    float *a;
    float *p;

    while (l >= 0){
      cout << "Digite o tamanho do lado. Digite um valor negativo para sair: ";
      cin >> l;
      cout << '\n';

      calc_hexa(l, a , p);

      cout << '\n';

    }

return 0;
}

