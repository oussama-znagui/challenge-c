int main (){
	float tmp,tmpc ;
	
	

	printf("Bonjour cher ami <3 \n");
	printf("Entrez la temperature en Fahrenheit \n");
	scanf("%f",&tmp);
	tmpc = (tmp-32)/1.8;
	printf ("la temperature en Celsius est : %f",tmpc);
	if (tmpc <= 5){
		printf ("très froid");
	}
	if(tmpc > 5 && tmpc <= 20){
		printf ("froid");
	}
	if(tmpc > 20 && tmpc <= 30){
		printf ("chaud");
	}
	if(tmpc > 30 && tmpc <= 50){
		printf ("chaud");
	}
	
	
	
	
}
