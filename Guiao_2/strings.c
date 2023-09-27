#include <stdio.h>
#include<string.h>
#include <ctype.h>

void minusculo(char s1[],char s2[]){
		int i = 0;
		while(s1[i] != '\0'){
			s2[i] = tolower(s1[i]);
			i++;
		}
		s2[i] = '\0';
	}

void ordem(char* s1,char* s2){
	if (strcmp(s1,s2)==0){
		printf("As palavras são iguais\n");
	}
	else if (strcmp(s1,s2)<0){
		printf("Ordem: %s,%s\n",s1,s2);
	}
	else{
		printf("Ordem: %s,%s\n",s2,s1);
	}
}

int main(void)
{
	char s1[50];
	char s2[50];
	char s3[50];

	printf("Enter the first string\n");
	fgets(s1,50,stdin);
	printf("Enter the second string\n");
	fgets(s2,50,stdin);

	int len = strlen(s1);
	int len2 = strlen(s2);
	int count = 0;
	int j = 0;
	int i = 0;
	char ch;
	char s4[50];
	char s5[50];
	ch = s2[0];

	for(int i = 0;i<len;i++){
		count = i;
	}

	while (ch != '\0') {
        ch = s2[i];
        if (isupper(ch))
            j++;
 
        i++;
    }

	strcpy(s4,s2);
	strcpy(s5,strcat(s4,s2));

	printf("Tamanho da primeira string: %d\n",count);
	printf("Numero de letras maisculas da segunda string: %d\n",j);
	minusculo(s1,s3);
	printf("Palavra 1 em minusculas: %s\n",s3);
	minusculo(s2,s3);
	printf("Palavra 2 em minusculas: %s\n",s3);
	ordem(s1,s2);
	
    return 0;
}
