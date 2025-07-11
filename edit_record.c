#include "myheader.h"
DB* edit_record(DB *head,int *arr)
{
        int pin=0,i,flag;
        char student_id[10],temp_id[10],ch,new_name[20];
        DB *temp=NULL,*prev=NULL;
        if(head==NULL)
                printf("Currently record is empty.\n");
        else
        {
                printf("Enter student id:");
                scanf("%s",student_id);
                strcpy(temp_id,student_id);
                for(i=7;student_id[i];i++)
                        pin=pin*10+(student_id[i]-48);
                student_id[7]='\0';
                capitalize_id(student_id);
                temp=head;
                while(temp)
                {
                        if(strcmp(temp->id,student_id)==0 && temp->num==pin) break;
                        prev=temp;
                        temp=temp->link;
                }
                if(temp==NULL)
                        printf("No student found with id %s%d\n",student_id,pin);
                else{
                        printf("Choose your option...\n");
                        while(1)
                        {
                                printf("1.edit name.\n2.edit DOB.\n3.edit percentage.\n4.edit contact Number.\n5.edit email id.\n6.save changes.\n");
                                printf("Selected option:");
                                __fpurge(stdin);
                                scanf("%c",&ch);
                                flag=0;
                                switch(ch){
                                        case '1':printf("Enter name:");
                                                 scanf("%s",new_name);
                                                 if(islower(new_name[0])) new_name[0]-=32;
                                                 strcpy(temp->name,new_name);
                                                 break;
                                        case '2':printf("Enter new date of birth:\n");
                                                 printf("Date:");
                                                 scanf("%hd",&temp->dob.date);
                                                 printf("Month:");
                                                 scanf("%hd",&temp->dob.month);
                                                 printf("Year:");
                                                 scanf("%hd",&temp->dob.year);
                                                 break;
                                        case '3':printf("Enter SSC percentage:");
                                                 scanf("%f",&temp->edu_details.ssc);
                                                 printf("Enter inter/Dipolma percentage:");
                                                 scanf("%f",&temp->edu_details.middle);
                                                 printf("Enter B.tech percentage:");
                                                 scanf("%f",&temp->edu_details.b_tech);
                                                 break;
                                        case '4':printf("Enter new contact Number:");
                                                 break;
                                        case '5':printf("Enter new E-mail:");
                                                 scanf("%s",temp->mail);
                                                 break;
                                        case '6':flag=1;

                                }
                                if(flag) break;
                        }
                }
        }
        return head;
}
