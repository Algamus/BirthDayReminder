///file first open
void fileopen(LIST* list,int a){
	FILE* dosya;
	int x;
	if(a){
		if((dosya=fopen("Contents.card","w"))==NULL){
			return ;
		}
		file_read_list(list,dosya);
	}else{
		if((dosya=fopen("Contents.card","r"))==NULL){
			return ;
		}else{	
			fscanf(dosya, "%d",&x);
			if(280702020!=x){
				return ;
			}else{
				fscanf(dosya,"%d",&x);
				for(;x>0;x--){
					file_read_file(list,dosya);
				}
			}
		}	
	}
	fclose(dosya);
}	
	
