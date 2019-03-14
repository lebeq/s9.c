#include<stdio.h>

int main(){

int value = 0;
int i = 0;
int w[100] = {0};
int j = 0;
int scanBack;
int k;
int m = 0;
int a = 0;

printf("Bitte bis zu 100 ganze Zahlen eingeben: ");
while(i < 100 && (scanBack = scanf("%d", &value)) != EOF){	
	if(scanBack == 1 && i < 100){
		w[i] = value;
		i++;	
	}
	else{
		printf("Fehler bei der Eingabe! \n");
		return 1;
	}
}

/*printf("Anzahl der Zahlen: %d \n", i);*/
printf("Die zu sortierenden Zahlen:");
while(a < 100){
	if(w[a] != 0){
		printf(" %d", w[a]);
	}
a++;
}
printf("\n");

while(m < i){
	k = i - 1;
	while(k > m){
		if(w[k] < w[k-1]){
			w[k] = w[k] + w[k-1];
			w[k-1] = w[k] - w[k-1];
			w[k] = w[k] -w[k-1];
		}
	k--;	
	}
m++;
}
printf("Die Zahlen sortiert:");
while(j < 100){
	if(w[j] != 0){
	printf(" %d", w[j]);
	}
j++;
}
printf("\n");

return 0;
}
