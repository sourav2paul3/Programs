//PROGRAM TO OPERATE A RECORD OF FILE OF BINARY MODE

#include <stdio.h>
#include <stdlib.h>
struct record 
      {
      	int roll;
      	char name[20];
      	int marks;
      };
typedef struct record RD;
void main(void)
     {
     	FILE *fp,*ft;
     	char fname[20],tname[20];
     	RD rec;
     	int i,x,flag=0;
     	printf("\nEnter the file name:");
     	scanf("%s",fname);
     	fp=fopen(fname,"ab+");
     	do{
     		printf("\n1:Add another record");
     		printf("\n2:Delete a record");
     		printf("\n3:Update a record");
     		printf("\n4:Display all records");
     		printf("\n5:Count all the record");
     		printf("\n0:To Exit");
     		printf("\nEnter your choice:");
     		scanf("%d",&i);
     		switch(i)
     		{
     		case 1: printf("\nEnter a record");
     			    printf("\nEnter a roll:");
     			    scanf("%d",&rec.roll);
     			    fflush(stdin);
     			    printf("\nEnter Name:");
     			    gets(rec.name);
     		  	    printf("\nEnter marks:");
     			    scanf("%d",&rec.marks);
     			    fseek(fp,0l,SEEK_END);
     			    fwrite(&rec,sizeof(rec),1,fp);
     			    printf("\n1record added succesfully");
     			    break;
     			    
     			    
     		case 2: printf("\nEnter perticular Roll Number:");
     		    	scanf("%d",&x);
     		    	ft=fopen("temp.txt","wb");
     		    	if(!ft)
     		    	  {
     		    	  	printf("\nFile open error");
     		    	  	break;
     		    	  }
     		    	fseek(fp,0l,SEEK_SET);
     		    	flag=0;
     		    	while(fread(&rec,sizeof(rec),1,fp)==1)
     		    	    {
     		    	    	if(rec.roll!=x)
     		    	    	 fwrite(&rec,sizeof(rec),1,ft);
     		    	    	else
     		    	    	   flag=1;
     		    	    }
     		    	if(flag==1)
     		    	  {
     		    	  	fclose(fp);
     		    	  	fclose(ft);
     		    	  	remove(fname);
     		    	  	rename("temp.txt",fname);
     		    	  	fp=fopen(fname,"wb+");
     		    	  	printf("\nRecord Deleted");
     		    	  }
     		    	else
     		    	    printf("\nRecord not found");
     		    	break;
     		    	
     		    	
     		case 3: printf("\nEnter a particular roll number:");
     		 		scanf("%d",&x);
     		 		fseek(fp,0l,SEEK_SET);
     		 		flag=0;
     		 		while(fread(&rec,sizeof(rec),1,fp)==1)
     		 		    {
     		 		    	if(rec.roll==x)
     		 		    	  {
     		 		    	  	flag=1;
     		 		    	  	break;
     		 		    	  }
     		 		    }
     		 		if(flag==0)
     		 		   {
     		 		   	printf("\nRecord not found");
     		 		   	break;
     		 		   }
     		 		printf("\nOld name:%s",rec.name);
     		 		fflush(stdin);
     		 		printf("\nEnter new name:");
     		 		gets(rec.name);
     		 		printf("\nOld Marks:%d",rec.marks);
     		 		printf("\nEnter new marks:");
     		 		scanf("%d",&rec.marks);
     		 		fseek(fp,-(long)sizeof(rec),SEEK_CUR);
     		 		fwrite(&rec,sizeof(rec),1,fp);
     		 		printf("\n1Record Updated:");
     		 		break;
     		 		
     		 		
     		case 4: printf("\nRoll\tName\t  Mark");
     		        fseek(fp,0l,SEEK_SET);
     	     	    while(fread(&rec,sizeof(rec),1,fp)==1)
     			    printf("\n%d\t%s\t  %d",rec.roll,rec.name,rec.marks);
     		        break;
     		        
     		        
     		case 5: x=0;
     		        fseek(fp,0l,SEEK_SET);
     		        while(fread(&rec,sizeof(rec),1,fp)==1)
     		            x++;
     		        printf("\nNo. of record is %d",x);
     		        break;
     		        
     		        
     		case 0: printf("\nThe End");
     				break;
     				
     				
     		default :printf("\nInvalid Choice");
     				break;
     		}
     	}while(i!=0);
     	fclose(fp);
     	fclose(ft);
     	printf("\n\n");
     }
