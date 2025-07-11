#include "myheader.h"
void print(DB* head)
{
        DB *temp=NULL;
        if(head==NULL){
                printf("Record is empty\n");
        }
        else{
                temp=head;
                printf("STUDENT ID        NAME                  DOB            SSC   INTER/DIPLOMA   B.TECH        MOBILE.NO            E-MAIL\n");
                while(temp){
                        printf("%s%d        %-20s %-2hd-%-2hd-%-2hd        %0.1f       %0.2f       %0.2f        ",temp->id,temp->num,temp->name,temp->dob.date,temp->dob.month,temp->dob.year,temp->edu_details.ssc,temp->edu_details.middle,temp->edu_details.b_tech);
                        printf("%-15s   %s\n",temp->contact_Num,temp->mail);
                        temp=temp->link;
                }
        }
        return;
}
