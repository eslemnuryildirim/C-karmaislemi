#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int num_1,num_2,bigest,smallest;
	int sonuc;
	int cevap;

	num_1=rand()%50+1;
	num_2=rand()%50+1;
	if (num_1>num_2){
		bigest=num_1;
		smallest=num_2;
}
	else if (num_2>num_1){
		bigest=num_2;
		smallest=num_1;
	}
	else{
		bigest=num_1;
		smallest=num_2;
	}
	sonuc=bigest-smallest;
	printf("%d-%d =?\n",bigest,smallest);
	printf("Lütfen cevabını girin.\n");
	scanf("%d",&cevap);
		if (cevap==sonuc){
			printf("Tebrikler.\n");
		}
		else{
			printf("Yanıldınız.\n");
		}
		return 0;
	}
