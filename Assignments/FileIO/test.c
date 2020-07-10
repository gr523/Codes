#include <stdio.h>
#define err {printf("Error\n");return 0;}
int main()
{
 	FILE *fp,*fw;

 	if(!(fp=fopen("Input.txt","r"))) err
 	if(!(fw=fopen("Output.txt","a"))) err 


 	for(int i=fgetc(fp);i!=EOF;i=fgetc(fp)) fputc(i,fw); 

 	fclose(fp),fclose(fw);

}