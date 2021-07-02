#include <stdio.h>

int main(void) {

	FILE* f = fopen("respostas.txt", "r");
  char sex, smoke;
  int age;
  int s=0, n=0, t=0;
	while(fscanf(f,"%c %d  %c", &sex, &age, &smoke) != EOF){
		if(smoke == 'S')
			s+=1;
		if(smoke == 'N')
			n+=1;
  t += 1;
	}
	fclose(f);
  printf("\n%d por cento das pessoas são fumantes.", (s*100)/t );


	FILE* f2 = fopen("respostas.txt", "r");
  s=0;
  n=0;
	while(fscanf(f2,"%c %d  %c", &sex, &age, &smoke) != EOF){
		if(smoke != 'N' && sex == 'M' && age < 40)
			s+=1;
		if(sex == 'M')
			n+=1;
	}
	fclose(f2);
  printf("\n\n%d por cento dos homens são não fumantes abaixo dos 40 anos.\n\n", (s*100)/n);
  return 0;

}