#include <iostream>
#include <windows.h>
int main(){
	
	HKEY chave;
	
	char nome[30];
	printf("Digite exatamente o nome da fonte:\n");
	scanf("%30s",&nome); // Obtém um máximo de 30 caracteres
	
	char fonte[30];
	printf("Digite exatamente o nome da fonte + a extensao:\n");
	scanf("%30s",&fonte);
	
	RegOpenKey(HKEY_LOCAL_MACHINE,"SOFTWARE\\Microsoft\\WINDOWS NT\\CurrentVersion\\Fonts",&chave);
	RegSetValueEx(chave,(nome),0,REG_SZ,(LPBYTE)fonte,strlen(fonte));
	//RegCreateKey(HKEY_CURRENT_USER,"\\AppEvents\\Teste\\SubConjunto01",&chave);
	RegCloseKey(chave);
	return 0;
}
