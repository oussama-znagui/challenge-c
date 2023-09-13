int main (){
	int x1,y1,x2,y2 ;
	float dis;
	printf("Bonjour cher ami <3 \n");
	printf("entrez les parametres x1 y1 x2 y2 par ordre \n");
	scanf("%d%d",&x1,&y1);
	scanf("%d%d",&x2,&y2);
	int x = pow((x2-x1),2);
	int y = pow((y2-y1),2);
	dis = sqrt(x+y);
	printf("la distabce est : %f",dis);

	
}
