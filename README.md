# Student-data-base
NAME
        Student Data Base for batch:V24HE2
DIRECTIONS FOR THE USER:
        ->Use the following command for execution.
                1) make
                2) ./a.out
FILES DISCRIPTION:
        1.main.c
                This file is consisting of all operation to be needed for the batch.
        2.add_record:
                DB *add_record(DB *head, int *arr);

                This function is helpfull as follows:
                To add a new student for this batch, and checking the credintials of student are valid or not.
                This function asks name(middle name),Date of birth,SSC ,inter/diploma, graduation details,contact number,
                E-mail id.
        3.delete_recrd:
                DB *delete-record(DB* head,char *student_ID);

                This function is helpfull in deleting already exsiting student record in this batch.
                If student found, it deletes the credentials of that particular ID.
                If student not found, it notify back to user.
        4.find_record:
                void find_record(DB *head,char *student_ID);

                To check wether the student with the supplied ID is a student of this batch or not.
                If Student belongs to this batch,It gather all the details of supplied ID.
                If student not found,it notify back to user.
        5.edit_record:
                DB *edit_record(DB *head);

                It helps in modifing the details of a particular student with an id which is present in this batch.
                You can modify :
                Name,Date of birth,SSC ineter/diploma graduation perccentages,contact number and E-mail id.
                If student of supplied ID is present in the batch, you can edit all credentials of that supplied ID.
        6.reverse_records:
                void reverse_records(DB*head);

                You can observe the Students data from last to first.
        7.print_records:
                void print_records(DB * head);

                To see the available Students and their details in sorted order.
        8.check_DOB:

                It will decide wether the entered date of birth is a valid or not.
        9.condition_check:
                This file has different functions.
                a.caputalize_id: This function will capitalize each alphabet in Supplied id.
                b.check_percentage:It is capable of deciding wether the entered percentage is valid or Not.
                c.Check_contacNum:If the user entered any alphabet or numbers entered is more than 10 numbers,it will treated
                 it as an invalid contact number.
                d.check_name:If enterd name consists other than alphabets it is invalid name,and it is decided by this function.
        10.save:
                void save(DB *head);

                It is used to save the data of students entered by the user to the file "v24he2.txt".
        11.sync:
                DB *sync(int *arr);

                When you run the process again,the previous data will be sync to current process.
                If data is enpty,it returns NULL by saying sync successful.

SUPPORTING FUNCTIONS:

        1.void capitalize_id(char*);
                This functions is to capitalise the ID entered by user , if they are in Lower case.This is usefull for
                search student ID.
        2._Bool checkDOB(const DOB*);
                This function validate the entered date of birth is valid or not.
                If valid returns 0,else 1.
        3._Bool check_percentage(const float);
                The Educational career percentages of student must be above 40% and below 100%.
                IF the entered credentials are valid returns 0,else 1.
        _Bool check_contactNumc(const char*);
                The functions check the contact number.
                If it is a valid contact number ,it returns 0 else 1.
        _Bool check_name(const char*);
                This functions observes if there is/are any chrecters other than alphabets.


INSTRUCTIONS :
        You should download all the files in this folder , otherwise the main_app program will not run .
        This project is created using GCC compiler and Make utility , meaning that copy these files into your current directory and use make command in the linux terminal to create an executable file
        
