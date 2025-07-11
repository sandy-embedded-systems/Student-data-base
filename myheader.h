#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<unistd.h>
#include<ctype.h>
typedef short int s16;
typedef struct data_of_birth
{
        s16 date;
        s16 month;
        s16 year;
}DOB;
typedef struct Education{
        float ssc;
        float middle;
        float b_tech;
}EDU;
typedef struct database{
        char name[20];
        char id[8];
        int num;
        DOB dob;
        EDU edu_details;
        char contact_Num[15];
        char mail[40];
        struct database *link;
}DB;
#define SIZE sizeof(DB)
void print(DB*);
DB *add_record(DB*,int*);
DB *delete_record(DB*,char*);
void find_record(DB*);
void capitalize_id(char*);
_Bool checkDOB(DOB*);
_Bool check_percentage(const float);
_Bool check_contactNum(const char*);
_Bool check_name(const char*);
DB *edit_record(DB*,int*);
void save_records(DB*);
DB *sync_records(int*);
void reverse_records(DB*);
