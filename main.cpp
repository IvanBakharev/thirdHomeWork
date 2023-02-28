#include <iostream>
#include <stdio.h>

main()
{
	int pin1,pin2;
	printf("pin1 =");
	scanf("%i",&pin1);
	printf("pin2=");
	scanf("%i",&pin2);
	
	if(((pin1==345)&&(pin2==543))||(pin1==789)&&(pin2==987))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
    
}
