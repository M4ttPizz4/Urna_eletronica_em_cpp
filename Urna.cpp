//Exemplo de urna eletr�nica em C++.
//Bibliotecas:
#include <iostream>
#include <stdlib.h>
#include <locale.h>
//Fun��o main, setlocale e vari�veis:
int main(){
setlocale(LC_ALL, "Portuguese");
int voto[10], candidato_1=0, candidato_2=0, i;
//Intera��o e repeti��o:
for(i=0; i<=10; i++){
	std::cout << "|-------------------------------------------------|\n";
	std::cout << "	Urna eletr�nica de Matt(Vers�o 1.0)\n\n";
	std::cout << "\nDigite o n�mero do candidato 1(1), ou do candidato 2(2) e pressione a tecla 'Enter':\n\n";
	std::cin >> voto[i];
}
//Calculando e imprimindo resultados:
if(voto[0] == 1){
	candidato_1++;
}
else if(voto[0] == 2){
	candidato_2++;
}
if(voto[1] == 1){
	candidato_1++;
}
else if(voto[1] == 2){
	candidato_2++;
}
if(voto[2] == 1){
	candidato_1++;
}
else if(voto[2] == 2){
	candidato_2++;
}
if(voto[3] == 1){
	candidato_1++;
}
else if(voto[3] == 2){
	candidato_2++;
}
if(voto[4] == 1){
	candidato_1++;
}
else if(voto[4] == 2){
	candidato_2++;
}
if(voto[5] == 1){
	candidato_1++;
}
else if(voto[5] == 2){
	candidato_2++;
}
if(voto[6] == 1){
	candidato_1++;
}
else if(voto[6] == 2){
	candidato_2++;
}
if(voto[7] == 1){
	candidato_1++;
}
else if(voto[7] == 2){
	candidato_2++;
}
if(voto[8] == 1){
	candidato_1++;
}
else if(voto[8] == 2){
	candidato_2++;
}
if(voto[9] == 1){
	candidato_1++;
}
else if(voto[9] == 2){
	candidato_2++;
}
std::cout << "|-------------------------------------------------|\n";
printf(" %i pessoas votaram no candidato 1.\n\n %i pessoas votaram no candidato 2.\n\n", candidato_1, candidato_2);
std::cout << "|-------------------------------------------------|\n";
//Finaliza��es:
system("pause");
return 0;
}
