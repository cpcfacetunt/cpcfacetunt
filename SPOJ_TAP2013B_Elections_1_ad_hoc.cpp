#include <iostream>
#include <vector>  //vector
#include <algorithm>  //sort, reverse

using namespace std;

int main()
{

 int N, valor, totalVotos=0;
 float pc1, pc2;
 vector<int> votos;  //int votos[10];
 cin >> N;

 for(int i=0;i<N;i++) //while(N--){}
 {
  cin >> valor;  //cin >> v[i];
  votos.push_back(valor); //insert en el arreglo
  totalVotos += valor; //%100 votos
 }

 //elegir los dos elementos mayores
 sort(votos.begin(),votos.end()); //pueden ordenarlo directamente en forma decrec.
 reverse(votos.begin(),votos.end());

 pc1 = votos[0]*100.0/totalVotos;
 pc2 = votos[1]*100.0/totalVotos;

 if( pc1>=45 || ((pc1>=40) && ((pc1-pc2)>=10)) )
 {
  cout << 1 << endl;  //endles equiv a \n
 }
 else
 {
  cout << 2 << endl;
 }

 return 0;
}
