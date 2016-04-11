#include <iostream>
#include <windows.h>

void programa(void){
	
	HKEY chave;
	
	system("cls");
	char nome[30];
	printf("\n Digite qual nome sera dado para a fonte(sem espacos):\n\n ");
	scanf("%30s",&nome); // Obtém um máximo de 30 caracteres
	
	char fonte[30];
	printf("\n Digite exatamente o nome do arquivo de fonte + a extensao:\n\n ");
	scanf("%30s",&fonte);
	
	printf("Arraste o arquivo de fonte para dentro da pasta que sera aberta!");
	system("explorer C:\\Windows\\Fonts");
	
	RegOpenKey(HKEY_LOCAL_MACHINE,"SOFTWARE\\Microsoft\\WINDOWS NT\\CurrentVersion\\Fonts",&chave);
	RegSetValueEx(chave,(nome),0,REG_SZ,(LPBYTE)fonte,strlen(fonte));
	//RegCreateKey(HKEY_CURRENT_USER,"\\AppEvents\\Teste\\SubConjunto01",&chave);
	RegCloseKey(chave);
	
	printf("\n\n\n\nChave %d criada com sucesso no registro!", fonte);

}
int main(){
	
	int tempo = 3;
	
	printf("\n\n");
	printf("            Seja Bem Vindo(a) Ao Fonts Installer By Vinicius Saw v1.0-0 Beta!\n\n\n");
	Sleep(1000);
	
	while(tempo > -1){
	printf("            Iremos iniciar o software em %d segundo(s)...\n", tempo);
    tempo = tempo -1;
    Sleep(1000);
}
programa();
}	
	/*
	printf("Digite (s/n) se deseja instalar uma fonte\n");
	scanf("3s",&escolha);

	if(escolha = "s"){
	printf("Escolheu sim");
	programa_teste();
}
*/

	//return 0;
