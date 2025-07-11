#include"myheader.h"
void capitalize_id(char *id)
{
        int i;
        for(i=0;id[i];i++)
                if(islower(id[i])) id[i]-=32;
        return;
}
_Bool check_percentage(const float num)
{
        if(num>100) return 1;
        else if(num<40) return 1;
        else return 0;
}
_Bool check_contactNum(const char *ptr)
{
        int i=0;
        while(ptr[i])
        {
                if(!isdigit(ptr[i])) return 1;
                i++;
        }
        return 0;
}
_Bool check_name(const char *name){
        int i;
        for(i=0;name[i];i++){
                if(!isalpha(name[i])) return 1;
        }
        return 0;
}
