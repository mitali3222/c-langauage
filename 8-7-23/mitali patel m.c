#include<stdio.h>

main()
{
	int a;
	printf("press S for Sunday\n");
	printf("press M for Monday\n");
	printf("press T for Tuesday\n");
	printf("press W for Wednesday\n");
	printf("press t for thursday\n");
	printf("press F for Friday\n");
	printf("press s for saturday\n");
	
	printf("Enter Your Choice = ");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'S' :
			printf("Sunday");
			break;
		case 'M' :
			printf("Monday");
			break;
		case 'T' :
			printf("Tuesday");
			break;
		case 'W' :
			printf("Wednesday");
			break;
		case 't' :
			printf("thursday");
			break;
		case 'F' :
			printf("Friday");
			break;
		case 's' :
			printf("saturday");
			break;
		
	}
}
