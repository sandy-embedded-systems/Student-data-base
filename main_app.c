#include "myheader.h"
int arr[26];
_Bool save,edit,flag;
void main(){
        DB *head=NULL;
        char ch,std_id[10];
        head=sync_records(arr);
        while(1)
        {
                printf("...............MENU.............\n");
                printf("a/A:add new record\ne/E:Edit record\np/P:print all records\nd/D:delete a record\nf/F:find a student\nr/R:reverse the records\n");
                printf("s/S:save records\nq/Q:quit\n");
                printf("Enter your choice:");
                __fpurge(stdin);
                scanf("%c",&ch);
                if(isupper(ch)) ch+=32;
                switch(ch)
                {
                        case 'a':head=add_record(head,arr);
                                 save=1;
                                 break;
                        case 'e':head=edit_record(head,arr);
                                 edit=1;
                                 break;
                        case 'p':print(head);
                                 break;
                        case 'r':reverse_records(head);
                                 printf("%s%d           %-20s   %-2hd-%-2hd-%-2hd        %0.1f       %0.2f       %0.2f        ",head->id,head->num,head->name,head->dob.date,head->dob.month,head->dob.year,head->edu_details.ssc,head->edu_details.middle,head->edu_details.b_tech);
                        printf("%-15s   %s\n",head->contact_Num,head->mail);
                                 break;
                        case 'd':printf("Enter id to delete:");
                                 scanf("%s",std_id);
                                 head=delete_record(head,std_id);
                                 edit=1;
                                 break;
                        case 'f':find_record(head);
                                 break;
                        case 's':save_records(head);
                                 save=1;
                                 flag=1;
                                 break;
                        case 'q':if(flag) exit(0);
                                 if(save==1 || edit==1){
                                         printf("WARNING : modifications are not saved\n");
                                         printf("do you want to save ?\ny for yes.....n for no\n");
                                         __fpurge(stdin);
                                         scanf("%c",&ch);
                                         if(ch=='y' || ch=='Y') save_records(head);
                                         exit(0);
                                 }
                                 else exit(0);
                }
        }
        return;
}
