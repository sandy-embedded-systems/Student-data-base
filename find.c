#include "myheader.h"
void find_record(DB *head)
{
        int pin=0,i;
        char student_id[10];
        DB *temp=NULL,*prev=NULL;
        if(head==NULL)
                printf("Currently record is empty.\n");
        else
        {
                printf("Enter student is to find:");
                scanf("%s",student_id);
                for(i=7;student_id[i];i++)
                        pin=pin*10+(student_id[i]-48);
                student_id[7]='\0';
                capitalize_id(student_id);
                temp=head;
                while(temp && strcmp(temp->name,student_id)!=0 && temp->num!=pin)
                {
                        prev=temp;
                        temp=temp->link;
                }
                if(temp==NULL)
                        printf("No student found with id %s%d\n",student_id,pin);
                else{
                        printf("Details Found:\n");
                        printf("Name             :%s\n",temp->name);
                        printf("id               :%s%d\n",temp->id,temp->num);
                        printf("Data of Birth    :%hd%hd%d\n",temp->dob.date,temp->dob.month,temp->dob.year);                                                                       printf("SSC Percentage   :%0.2f\n",temp->edu_details.ssc);
                        printf("Inter or Diploma :%0.2f\n",temp->edu_details.middle);
                        printf("B.Tech percentage:%0.2f\n",temp->edu_details.b_tech);
                        printf("Mobile No        :%s\n",temp->contact_Num);
                        printf("E-mail           :%s\n",temp->mail);
                }
        }
        return;
}
