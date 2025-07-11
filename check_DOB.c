#include "myheader.h"
_Bool checkLeapYear(int year)
{
    if((year%4==0 && year%100!=0) || (year%400==0)) {
        return 0;
    }
    else return 1;
}
_Bool checkDOB(DOB *ptr)
{

        int m=ptr->month,d=ptr->date,y=ptr->year;
        if(d>32){
                printf("Invalid date in date of birth.\n");
                return 1;
        }
        if(m>12){
                printf("Invalid month in Date of Birth\n");
                return 1;
        }
        if(y>2005 || y<1999){
                printf("Invalid year in Date of Birth\n");
                return 1;
        }
        else{
                if(m==2){
                        if(d==29){
                                if(checkLeapYear(y)) return 0;
                                else{
                                        printf("Invalid date in Date of Birth\n");
                                        return 1;
                                }
                        }
                        else if(d<29 && d>0) return 0;
                }
                else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
                {
                        if(d>32){
                                printf("Invalid date in Date of Birth\n");
                                return 1;
                        }
                        else return 0;
                }
                else if(m==4||m==6||m==9||m==11)
                {
                        if(d>31){
                                printf("Invalid date in Date of Birth\n");
                                return 1;
                        }
                        else return 0;
                }
        }
}
