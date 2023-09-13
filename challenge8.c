int main (){
	int x;
	printf("Bonjour cher ami <3 \n");
	printf("entrez un nombre a base de 10 \n");
	scanf("%d",&x);
	int a = x/8;
	int b = x%8;
	int c = a/8;
	int d = a%8;
	int e = c/8;
	int f = c%8;
	
	printf("a base 8 : %d%d%d \n",f,d,b);
	 a = x/16;
	 b = x%16;
	 c = a/16;
	 d = a%16;
	 e = c/16;
	 f = c%16;
	printf("a base 16 : %d%d%d",f,d,b);

	

	
}
