#ifndef MTV_H_INCLUDED
#define MTV_H_INCLUDED
#include<stdio.h>
#include"conio2.h"
#include<time.h>
typedef struct user{
    char userid[100];
    char username[100];
    char password[100];
    char usertype[100];
    char question_id[100];
    char hint_answer[100];
    char mobile_number[11];
}user;

typedef struct question{
    char question_id[100];
    char question[100];
}question;

typedef struct seat{
    int seat_number;
    int seat_is_booked;
}seat;

typedef struct movie{
 char theater_id[100];
 char movie_id[100];
 char movie_name[100];
 int first_block_price;
 int second_block_price;
 int third_block_price;
 struct tm show_date;

 seat seats[100];
}movie;

typedef struct theater{
    char theater_id[100];
    char theater_name[100];
    int is_booked;
}theater;

typedef struct ticket{
  char ticket_id[100];
  char theater_id[100];
  char movie_id[100];
  struct tm show_date;
  int seat_number;
  char user_id[100];
}ticket;

void print_char(char,int,int,int);
void print_title(char*,int,int,int);
void print_title_in_middle(char*,int,int);
void print_basic_screen();

void input_password(user*,int,int);
int is_valid_integer(char*);
void get_string(char*,unsigned int);
void get_integer(int *);

void get_password(char*,unsigned int);
char* get_mobile_number(int,int);
void add_questions();
void set_master_admin_rec(user);
user* get_user_details();
void create_user(char*);
user* get_credentials(char*);
int check_user_details(user*);
void forget_credentials();
char* get_qouestion_id();
int check_mobile_number_in_records(char*);
user* login(char*);
void set_master_admin();
void add_movie();

void add_theater();
int enter_login_choice();
int enter_choice();

void show_theater();
int  delete_theater();
int delete_movie_by_theater_id(char*);
int delete_booking_by_movie_id(char*);

void add_movie();
int is_leap_year(int);
int compare_date(struct tm ,struct tm );
void show_movie();
void view_booking(user*);

void change_contact_details(user *);

movie * get_movie_id_and_show_date();
int * get_seat_numbers(movie *);
void change_seat_booking_status(int, char *, struct tm);
void booking(user *);
void cancel_booking(user *);
int delete_movie();
void change_security_question(user *);
void view_profile(user*);
int  delete_my_Account(user* );
void change_password(user*);

void forget_credentials(char *);
#endif // MTV_H_INCLUDED
