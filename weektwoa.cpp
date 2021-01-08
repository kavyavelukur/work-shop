#include<stdio.h>
int main()
{
	int grade,failed;
	printf("enter the class obatined by the student");
	scanf("%d",&grade);
	printf("how many students has failed");
    scanf("%d",&failed);
    switch(grade){
    	case 1:
    		if(failed<3)
    		    printf("no grade marks awarded");
    		if(failed<=3)
    		    printf("your grace marks is 5");
    	    break;
    	case 2:
    		if(failed>2)
    		   printf("no grace marks awarded");
    		if(failed<=3)
    		   printf("your grace msrks is 4");
    		break;
    	case 3:
    		if(failed>1)
    		   printf("no grace marks");
    		if(failed=1)
    		   printf("your grace marks is 5");
    		break;
    		default:("you entered wrong class for student");
}
           if(grade==1||grade==2||grade==3)
           {
           	printf("the student has obtained a grade marks of %d per subject\n",grade);
           }
}
OUTPUT::
enter the class obatined by the student7
how many students has failed5


