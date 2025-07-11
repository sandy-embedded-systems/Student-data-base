#include "myheader.h"
DB *add_record(DB* head,int *arr)
{
        DB *newnode=NULL,*temp=NULL,*prev=NULL;
        char name[20],str[8]="V24HE2",ch,ch2,letter[9],choice;
        int id_num,flag;
        float percentage;
        newnode=(DB*)calloc(1,SIZE);
        if(newnode==NULL)
        {
                printf("Unable to create slot\nTry again\n");
        }
        else
        {
NAME:           printf("Enter name:");
                scanf("%s",name);
                if(check_name(name))
                {
                        printf("ERROR : invalid name.\n");
                        goto NAME;
                }
                if(islower(name[0])) name[0]-=32;
                strcpy(newnode->name,name);
                printf("creating id...\n");
                ch=name[0];
                str[strlen(str)]=ch;
                id_num=arr[ch-65]+1;
                arr[ch-65]++;
                strcpy(newnode->id,str);
                newnode->num=id_num;
                printf("Your id:%s%d\n",str,id_num);

DOB:            printf("Enter Date of Birth:\n");
                printf("Date:");
                scanf("%hd",&newnode->dob.date);
                printf("Month:");
                scanf("%hd",&newnode->dob.month);
                printf("Year:");
                scanf("%hd",&newnode->dob.year);
                if(checkDOB(&newnode->dob))
                {
                        printf("Invalid date of Birth.\n");
                        goto DOB;
                }

                printf("Enter marks percentage:\n");
SSC:            printf("SSC grade:");
                scanf("%f",&percentage);
                if(check_percentage(percentage*10))
                {
                        printf("Invalid grade\n");
                        goto SSC;
                }
                newnode->edu_details.ssc=percentage;
MIDDLE:         printf("Inter/diploma percentage:");
                scanf("%f",&percentage);
                if(check_percentage(percentage))
                {
                        printf("Invalid percentage\n");
                        goto MIDDLE;
                }
                newnode->edu_details.middle=percentage;
B_TECH:         printf("B.tech percentage:");
                scanf("%f",&percentage);
                if(check_percentage(percentage))
                {
                        printf("Invalid percentage\n");
                        goto B_TECH;
                }
                newnode->edu_details.b_tech=percentage;

MOBILE_NUM:     printf("enter Phone NUM:");
                scanf("%s",newnode->contact_Num);
                if(check_contactNum(newnode->contact_Num))
                {
                        printf("Invalid mobile number.\n");
                        goto MOBILE_NUM;
                }
                else if(strlen(newnode->contact_Num)!=10){
                        printf("Invalid mobile number.\n");
                        goto MOBILE_NUM;
                }

                printf("enter mail:");
                scanf("%s",newnode->mail);

                /****  Add in sorted order  ****/
                if(head==NULL) head=newnode;
                else if(ch<head->name[0])
                {
                        newnode->link=head;
                        head=newnode;
                }
                else
                {
                        temp=head;
                        flag=1;
                        while(temp){
                                ch2=temp->name[0];
                                if(ch<ch2){
                                        prev->link=newnode;
                                        newnode->link=temp;
                                        flag=0;break;
                                }
                                prev=temp;
                                temp=temp->link;
                                if(ch==ch2 && id_num==prev->num+1){
                                        prev->link=newnode;
                                        newnode->link=temp;
                                        flag=0;
                                        break;
                                }

                        }
                        if(flag) prev->link=newnode;
                }
        }
        return head;
}
