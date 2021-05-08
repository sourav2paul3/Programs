//PROGRAMM TO COPY FILES

#include <stdio.h>
main()
	{
		FILE *fp,*ft,*fr;
		char x;
		char fname[20],tname[20];
		printf("\nEnter the name of 1st file:");
		scanf("%s",fname);
		fp=fopen(fname,"r");
		if(!fp)
		  {
		  	printf("\nFile doesnt exists");
		  }
		printf("\nContent of file %s is:",fname);
		while(!feof(fp))
		     {
		     	x=getc(fp);
		     	putchar(x);
		     }
		rewind(fp);
		printf("\nEnter 2nd file:");
		scanf("%s",tname);
		ft=fopen(tname,"r");
		if(!ft)
		  {
		  	printf("\nfile doesnt exists");
		  }
		printf("\nContent of file %s is:",tname);
		while(!feof(ft))
		     {
		     	x=getc(ft);
		     	putchar(x);
		     }
		rewind(ft);
		printf("\nResultant file is:RESULT.txt");
		fr=fopen("RESULT.txt","w+");
		if(!fr)
		  {
		  	printf("\nError to open");
		  }
		while((x=getc(fp))!=EOF)
		     putc(x,fr);
		while(x=getc((ft))!=EOF)
		     putc(x,fr);
		rewind(fr);
		printf("\nContent of file RESULT.txt is:");
	    while(!feof(fr))
	         {
	         	x=getc(fr);
	         	putchar(x);
	         }
		fclose(fp);
		fclose(ft);
		fclose(fr);
	}
	
		      
		
