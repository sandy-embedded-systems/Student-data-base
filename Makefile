a.out:main.o insert.o print.o delete.o condition_check.o find.o checkDOB.o edit_record.o save.o sync.o reverse.o
        cc main.o insert.o print.o delete.o condition_check.o find.o checkDOB.o edit_record.o save.o sync.o reverse.o
main.o:main.c
        cc -c main.c
insert.o:insert.c
        cc -c insert.c
print.o:print.c
        cc -c print.c
delete.o:delete.c
        cc -c delete.c
fun.o:condition_check.c
        cc -c condition_check.c
find.o:find.c
        cc -c find.c
checkDOB.o:checkDOB.c
        cc -c checkDOB.c
edit.o:edit_record.c
        cc -c edit_record.c
save.o:save.c
        cc -c save.c
sync.o:sync.c
        cc -c sync.c
reverse.o:reverse.c
        cc -c reverse.c
