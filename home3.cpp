#include <iostream>
#include <stdio.h>

main()
{
	printf("Task 2\n");
	long long int login1 = 12345;
	long long int password1 = 67890;
	long long int login2 = 45678;
	long long int password2 = 43210;
	
	long long int userLogin,userPassword;
	printf("input login:");
	scanf("%i",&userLogin);
	printf("input pass:");
	scanf("%i",&userPassword);
	
	if(((login1==12345)&&(password1==67890))||(login2==45678)&&(password2==43210))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
}
