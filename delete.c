#include "myheader.h"
DB *delete_record(DB *head,char *student_id)
{
        DB *temp=NULL,*prev=NULL;
        int pin=0,i;
        for(i=7;student_id[i];i++){
                pin=pin*10+(student_id[i]-48);
        }
        student_id[7]='\0';
        capitalize_id(student_id);
        if(head==NULL)
        {
                printf("Currently no records in register.\n");
        }
        else if(strcmp(head->id,student_id)==0 && head->num==pin)
        {
                temp=head;
                head=head->link;
                free(temp);
        }
        else
        {
                temp=head;
                while(temp && strcmp(temp->id,student_id)!=0){
                        prev=temp;
                        temp=temp->link;
                }
                while(temp && temp->num!=pin){
                        prev=temp;
                        temp=temp->link;
                }
                if(temp==NULL)
                {
                        printf("No record with the id %s%d\n",student_id,pin);
                }
                else
                {
                        prev->link=temp->link;
                        free(temp);
                        printf("record deleted successfully.\n");
                }
        }
        return head;
}
