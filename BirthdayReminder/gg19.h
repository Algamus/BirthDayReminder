void calendar(LIST* list){
	CARD* card;
	int x,i,ay,gun;
	time_t t;
	struct tm *z;
	time(&t);
	z=localtime(&t);
	gun=z->tm_mday;
	ay=(z->tm_mon)+1;
	x=((z->tm_mon)+1)*100+z->tm_mday;
	printf("\n-----------------------------------%d.%d.%d\n",z->tm_mday,(z->tm_mon)+1,(z->tm_year)+1900);
	card=search_bm_in(list,x);
	if(list->count==0){
		printf(" The list is empty ");  
		return ;
	}
	for(i=1;i<7;i++){
		gun++;
		if(gun>31 && (ay==1||ay==3||ay==5||ay==7||ay==8||ay==10||ay==12)){
			ay++;
			gun=1;
		}
		if(gun>30 && (ay==4||ay==6||ay==9||ay==11)){
			ay++;
			gun=1;		
		}
		if(gun>28 &&ay==2){
			ay++;
			gun=1;
		}
        }
	pr_upcoming(list,card,gun,ay,x);
	
}
	
