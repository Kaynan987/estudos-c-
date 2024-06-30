#include <iostream>
using namespace std;
#include <locale.h>

// #define TAM 4
// int main() {
// int n[TAM],i,mai,men,s;
//   for (i=0;i<TAM;i++){
//     cin>>n[i];
//   }
// mai=n[0];
// men=n[0];
// s=n[0];
// for(i=1;i<TAM;i++){
//   s+=n[i];
// if(n[i]>mai){
//   mai=n[i];
// }else{
//   if(n[i]<men){
//     men=n[i];
//   }
// }
// }
// cout<<"\n\n";
// float med =  s/TAM;
// cout << med << men << mai;
// }    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #define TAM 4
// int main(){
//   int n[TAM],i;
//   float q = 0, m=0;
// for(i=0;i<TAM;i++){
// cout<<"fale a sua nota ";cin>>n[i];
// m += n[i];
// }
// m /= TAM; 
// cout<<"MEDIA "<<m<<"\n";
// for(i=0;i<TAM;i++){
// if(n[i] > m){
// q++;

// }
//   }
//   cout<<"QUANTIDADE "<<q<<"\n";
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #define TAM 5
// int main(){
//   int n[TAM],i,igual=0,mai=0,men=0;
// for(i=0;i<TAM;i++){
// cout<<"fale a sua nota ";cin>>n[i];
// }
// for(i=1;i<TAM;i++){
// if(n[0] == n[i]){
// igual++;
// }
// if(n[0] < n[i]){
// mai++;  
// }
// if(n[0] > n[i]){
// men++;  
// }  
//   }  
//   cout<<"igual "<<igual<< " maior "<<mai<<" menor "<<men<<"\n";
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #define TAM 3
// int main(){
// int vet[TAM];
//   for(int i=0; i < TAM; i++){
//     cout<<"fale ";cin>>vet[i];
//   }
//   for(int i = TAM-1; i >= 0; i--){
//     cout<<vet[i];  
//   }
// }

// #define TAM 3
// int main(){
// int a[TAM],b[TAM],c[TAM];
//   for(int i=0; i < TAM; i++){
//     cout<<"fale ";cin>>a[i];
//   }
//   for(int i=0; i < TAM; i++){
//     cout<<"fale ";cin>>b[i];
//   }
//   for(int i = 0; i < TAM; i++){
//     c[i]= b[i] - a[i];
//     cout<<" "<<c[i];  
//   }
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// #define TAM 10

// int main() {
//     int n[TAM], i, mai, men;

//     // Leitura dos valores do vetor
//     for (i = 0; i < TAM; i++) {
//         cin >> n[i];
//     }

//     // Inicialização do maior e menor valor
//     mai = n[0];
//     men = n[0];

//     // Encontrar o maior e o menor valor no vetor
//     for(i = 1; i < TAM; i++) {
//         if(n[i] > mai) {
//             mai = n[i];
//         }
//         if(n[i] < men) {
//             men = n[i];
//         }
//     }

//     // Calcular o fatorial do maior valor
//     int fatorialMaior = 1;
//     for (i = 1; i <= mai; i++) {
//         fatorialMaior *= i;
//     }

//     // Calcular o fatorial do menor valor
//     int fatorialMenor = 1;
//     for (i = 1; i <= men; i++) {
//         fatorialMenor *= i;
//     }

//     // Exibir os resultados
//     cout << "Fatorial do maior valor (" << mai << "): " << fatorialMaior << endl;
//     cout << "Fatorial do menor valor (" << men << "): " << fatorialMenor << endl;

//     return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #define TAM 5

// int main() {
// int n[TAM][TAM],l,j;
//   for(l=0;l<TAM;l++){
//    for(j=0;j<TAM;j++){ 
//     n[l][j]=1;
//    }
//   }
// for(l=0;l<TAM;l++){
//   for(j=0;j<TAM;j++){
//   cout<<n[l][j]<<"\t";
//   }
// cout<<endl;
//   }
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #define TAM 5
// int main() {
// int n[TAM][TAM]{},l,j;
//   for(l=0;l<TAM;l++){
//    for(j=0;j<TAM;j++){ 
    
//    }
//   }
// for(l=0;l<TAM;l++){
//   for(j=0;j<TAM;j++){
//     if(l==j){
//        n[l][j]=1;
//      }
//     cout<<n[l][j]<<"\t";
//   }
// cout<<endl;
//   }
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #define TAM 2
// int main() {
// int n[TAM][TAM]{},l,j;
//   for(l=0;l<TAM;l++){
//    for(j=0;j<TAM;j++){ 
//     cout<<"fale ";cin>>n[l][j];
     
//   }
// }
// for(l=0;l<TAM;l++){
//   for(j=0;j<TAM;j++){
//       cout<<n[l][j]<<"\t";
//     }
//   cout<<endl;
//   }
//  cout<<endl; 
// for(l=0;l<TAM;l++){
//   for(j=0;j<TAM;j++){
//     if(n[l][j]==100){
//         n[l][j] = 1;
//      }
//     cout<<n[l][j]<<"\t";
//   }
// cout<<endl;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #define TAM 5
// int main() {
// int n[TAM][TAM]{},l,j;
//   for(l=0;l<TAM;l++){
//    for(j=0;j<TAM;j++){ 

//   }
// }
// cout<<endl; 
// for(l=0;l<TAM;l++){
//   for(j=0;j<TAM;j++){
//     if(l>j){
//         n[l][j] = 1;
//      }
//     cout<<n[l][j]<<"\t";
//   }
// cout<<endl;
// }
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #define TAM 2
// int main() {
// int n[TAM][TAM]{},l,j,s=0;
//   for(l=0;l<TAM;l++){
//    for(j=0;j<TAM;j++){ 
//       cout<<"fale ";cin>>n[l][j];
//    }
// }
// cout<<endl; 
// for(l=0;l<TAM;l++){
//   s+=n[l][l];
//   cout<<n[l][l];
//   for(j=0;j<TAM;j++){
//     }
// cout<<endl;
//   }
// cout<<s;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #define TAM 2
// int main() {
// int n[TAM][TAM]{},l,j,s[TAM];
//   for(l=0;l<TAM;l++){
//    for(j=0;j<TAM;j++){ 
//       cout<<"fale ";cin>>n[l][j];
//    }
// }

// for(l=0;l<TAM;l++){
//   s[l]=0;
//   for(j=0;j<TAM;j++){
//     s[l]+=n[l][j];
//   }
// cout<<endl;
//   }
//   for(l=0;l<TAM;l++){
//     for(j=0;j<TAM;j++){
//       n[l][j] *= s[l];
//     }
//   cout<<endl;
//     }

//   for(l=0;l<TAM;l++){
//     for(j=0;j<TAM;j++){
//       cout<<n[l][j]<<"\t";
//     }
//   cout<<endl;
//     }
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define TAM1 2
#define TAM2 3
int main() {
int n[TAM1][TAM2]{},l,j,m[TAM2][TAM1]{},s[TAM1][TAM2]{};
//n
  for(l=0;l<TAM1;l++){
   for(j=0;j<TAM2;j++){ 
      cout<<"fale ";cin>>n[l][j];
   }
}
//m
for(l=0;l<TAM2;l++){
  for(j=0;j<TAM1;j++){ 
     cout<<"fale1 ";cin>>m[l][j];
     }
  }

  for(l=0;l<TAM1;l++){
    for(j=0;j<TAM2;j++){
      cout<<n[l][j]<<"\t";
    }
  cout<<"\t\n";
    
  }
  for(l=0;l<TAM2;l++){
    for(j=0;j<TAM1;j++){
      cout<<m[l][j]<<"\t";
    }
  cout<<endl;
    }

   for(l=0;l<TAM1;l++){
     for(j=0;j<TAM2;j++){ 
      for(int k=0;k<TAM2;k++)
       s[l][j] += n[l][k] * m[k][j];
     }
  }
  cout<<"\n\n\n";

  for(l=0;l<TAM1;l++){
    for(j=0;j<TAM1;j++){
      cout<<s[l][j]<<"\t";
    }
  cout<<endl;
    }
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #define TAM 2
// int main(){
//   int n[TAM][TAM]{},l,j,m[TAM];
// for(l=0;l<TAM;l++){
//   for(j=0;j<TAM;j++){
//     cout<<"fale ";cin>>n[l][j];
//   if(m[l]>n[l][j]){
//     m[l]=n[l][j];
//   }

//   }
// }
// for(l=0;l<TAM;l++){
//   for(j=0;j<TAM;j++){
//     cout<<n[l][j]<<"\t";
// }
//    cout<<"\n\n";
// }
//   for(l=0;l<TAM;l++){
//   cout<<m[l]<<"\t";
//   }
//   cout<<endl;
// }
// #define TAM 4
// int main(){
// int n[TAM],i;
//   for(i=0;i<TAM;i++){
//     cout<<"fale ";cin>>n[i];
//   }
// for(i=0;i<TAM;i++){
//   cout<<n[i]<<"\t";
// }
// }
// #define TAM 4

// int main (){
//   srand(time(NULL));
//   int mat[TAM][TAM];

//   cout << "preencha o valor de cada posição da matriz!\n";
//   for (int linha = 0; linha < TAM; linha++){
//     for (int coluna=0; coluna < TAM; coluna++){
//       mat[linha][coluna] = rand() % TAM + 1;
//     }
//   }
//   for (int linha = 0; linha < TAM; linha++){
//     for (int coluna=0; coluna < TAM; coluna++){
//       cout << "\t" <<mat[linha][coluna];
//     }
//     cout << "\t\n";
//   }

  
  
}
  
