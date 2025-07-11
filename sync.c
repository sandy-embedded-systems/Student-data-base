#include "myheader.h"
int cnt_lines(char *name)
{
        FILE *fp=NULL;
        char ch;
        int cnt=0;
        fp=fopen(name,"r");
        while((ch=fgetc(fp))!=EOF){
                if(ch=='\n')
                        cnt++;
        }
        fclose(fp);
        return cnt;
}
DB *sync_records(int *arr)
{
        DB *head=NULL,*newnode=NULL,*temp=NULL;
        FILE *fp=NULL;
        _Bool flag;
        int cnt;
        float ssc,middle,b_tech;
        short int date,month,year;
        char name[20],id[8],cont_num[11],mail[30],ch,id_num,file_name[]="v24he2.txt";
        fp=fopen(file_name,"r");
        if(fp==NULL)
        {
                printf("Currently no file exist to sync.\n");
                return head;
        }
        else{
                cnt=cnt_lines(file_name);
                flag=1;
                while(cnt--)
                {
                        newnode=calloc(1,SIZE);
                        fscanf(fp,"%s ",name);
                        fscanf(fp,"%s ",id);
                        id_num=id[strlen(id)-1];
                        id[strlen(id)-1]='\0';
                        ch=id[strlen(id)-1];
                        fscanf(fp,"%hd %hd %hd %f %f %f %s %s",&date,&month,&year,&ssc,&middle,&b_tech,cont_num,mail);
                        strcpy(newnode->name,name);
                        strcpy(newnode->id,id);
                        newnode->num=id_num-48;
                        arr[ch-65]=id_num-48;
                        newnode->dob.date=date;
                        newnode->dob.month=month;
                        newnode->dob.year=year;
                        newnode->edu_details.ssc=ssc;
                        newnode->edu_details.middle=middle;
                        newnode->edu_details.b_tech=b_tech;
                        strcpy(newnode->contact_Num,cont_num);
                        strcpy(newnode->mail,mail);
                        if(flag){
                                head=newnode;
                                temp=newnode;
                                flag=0;
                        }
                        else{
                                temp->link=newnode;
                                temp=newnode;
                        }
                }
                printf("sync successfull.\n");
        }
        return head;
}
