#include "myheader.h"
void save_records(DB *head)
{
        FILE *fp=NULL;
        DB *temp=NULL;
        fp=fopen("v24he2.txt","w");
        if(head==NULL){
                printf("currently no records in register to save.\n");
                return;
        }
        else{
                temp=head;
                while(temp)
                {
                        fprintf(fp,"%-20s %s%d  %-2hd %-2hd %-2hd   %0.2f   %0.2f   %0.2f   %s   %s\n",temp->name,temp->id,temp->num,\
                                        temp->dob.date,temp->dob.month,temp->dob.year,temp->edu_details.ssc,temp->edu_details.middle,\
                                        temp->edu_details.b_tech,temp->contact_Num,temp->mail);
                        temp=temp->link;
                }
                printf("Data Saved successfully to v24he2.txt\n");
        }
        fclose(fp);
        return;
}
