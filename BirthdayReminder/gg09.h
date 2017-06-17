///name and surname
///name
CARD* search_name(LIST* list){
	CARD* ctr;
	CARD* temp;
	char* name;
	if(!(name=(char*)malloc(sizeof(char)))){
		printf("\n   !!Error!!\nHafizada yer yok!!\n"); 
        	return NULL;
        }
	int x,i=0;
	printf("Enter a name : ");
	scanf("%s",name);
	ctr=search_name_in(list,name,&x);
	if(x==0){
		printf("%s is not in the list\n",name);
		free(name);
		return NULL;
	}else{
		if(x==1){
			printf("%s , %s\nBirthday: %d.%d\nE-mail: %s\n",ctr->fname,ctr->lname,(ctr->dm)%100,(ctr->dm)/100,ctr->email);
			return ctr;
		}else{
			printf("There are %d %s in the list\n",x,name);
			printf("------------------------------\n");
			temp=ctr;
			while(x>i){
				printf("%d.%s %s\n",++i,temp->fname,temp->lname);
				temp=temp->fnext;
			}
			printf("%d.No one(back to the menu)\n",i+1);
			while(1){
				printf("------------------------------\n");
				printf("Your choose : ");
				scanf("%d",&i);
				if(i==x+1){
					free(name);
					return NULL;
				}else if(i>0 && i<=x){
					while(i>1){
						ctr=ctr->fnext;
						i--;
					}
					printf("%s , %s",ctr->fname,ctr->lname);
					printf("\nBirthday: %d.%d\nE-mail: %s\n",(ctr->dm)%100,(ctr->dm)/100,ctr->email);
					free(name);
					return ctr;
				}else{
					printf("ERROR!! you can enter only 1 to %d\n",x+1);
					printf("please try again!!!\n");
				}
			}
		}
	}
}	
///surname
CARD* search_surname(LIST* list){
	CARD* ctr;
	CARD* temp;
	char* surname;
	if(!(surname=(char*)malloc(sizeof(char)))){
		printf("\n   !!Error!!\nHafizada yer yok!!\n"); 
        	return NULL;
        }
	int x,i=0;
	printf("Enter a surname : ");
	scanf("%s",surname);
	ctr=search_surname_in(list,surname,&x);
	if(x==0){
		printf("%s is not in the list\n",surname);
		free(surname);
		return NULL;
	}else{
		if(x==1){
			printf("%s , %s\nBirthday: %d.%d\nE-mail: %s\n",ctr->fname,ctr->lname,(ctr->dm)%100,(ctr->dm)/100,ctr->email);
			return ctr;
		}else{
			printf("There are %d .%s in the list\n",x,surname);
			printf("-----------------------------\n");
			temp=ctr;
			while(x>i){
				printf("%d.%s %s\n",++i,temp->fname,temp->lname);
				temp=temp->lnext;
			}
			printf("%d.No one(back to the menu)\n",i+1);
			while(1){
				printf("------------------------------\n");
				printf("Your choose : ");
				scanf("%d",&i);
				if(i==x+1){
					free(surname);
					return NULL;
				}else if(i>0 && i<=x){
					while(i>1){
						ctr=ctr->lnext;
						i--;
					}
					printf("%s , %s",ctr->fname,ctr->lname);
					printf("\nBirthday: %d.%d\nE-mail: %s\n",(ctr->dm)%100,(ctr->dm)/100,ctr->email);
					free(surname);
					return ctr;
				}else{
					printf("ERROR!! you can enter only 1 to %d\n",x+1);
					printf("please try again!!!\n");
				}
			}
		}
	}
}	
	
