#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>
#include<time.h>


void main_menu();
void receiption();
void normal_booking();
int VIP_booking();
int food_menu();
int room_booking();
int food_menu();
int payment();
int count_salary();
int feedback();

//other functions in functions

void insert();
void disp();
void search();
void deletefile();
void update();
int avlroomno();
int empty();

float Getfood(float totprice,int qrt);
float deasert(float total,int qrt);

int vip_wedding();
int vip_dayout();
int vip_nightpan();

void cusDetails();

int wedding_amount(int n);
int payment();

int salary(int x,int s);

// from receiption function
FILE *fptr;

struct receiption {

	int roomnumber;
	char name[20];
	char address[25];
	char phonenumber[15];
	char nationality[15];
	char email[20];
	char period[10];
	char arrivaldate[10];

} stud;

char rep;

// from normal booking function
float wedding();
float birthday();
float other();
int price[] = {3500,2000,2500,500,300,200};
float total;
int howmanyplate, platetype, drinktype, howmanydrink;


// from VIP booking function
int y,w;
char q;

int main() {
	int i=0;
	int choice;
	time_t t;
	time(&t);

	system("clear");
	printf("\n\n\n");
	printf("\t\t\t\t------------------------------------------------------------------------------------\n");
	printf("\t\t\t\too      oo      oo   oo oo oo   oo          oo oo      oo oo    oo       oo  oo oo oo\n");
	printf("\t\t\t\t oo    oooo    oo    oo         oo        oo         oo     oo  oo oo oo oo  oo\n");
	printf("\t\t\t\t  oo  oo  oo  oo     oo oo      oo       oo          oo     oo  oo  oo   oo  oo oo\n");
	printf("\t\t\t\t   oooo    oooo      oo         oo        oo         oo     oo  oo       oo  oo\n");
	printf("\t\t\t\t    oo      oo       oo oo oo   oo oo oo    oo oo      oo oo    oo       oo  oo oo oo\n");
	printf("\t\t\t\t------------------------------------------------------------------------------------\n\n\n");

	printf("\t\t\t\t\t\t***************************************************\n");
	printf("\t\t\t\t\t\t*  *********************************************  *\n");
	printf("\t\t\t\t\t\t*  *                                           *  *\n");
	printf("\t\t\t\t\t\t*  *        -----------------------------      *  *\n");
	printf("\t\t\t\t\t\t*  *           HOTEL MANAGEMENT SYSTEM         *  *\n");
	printf("\t\t\t\t\t\t*  *        -----------------------------      *  *\n");
	printf("\t\t\t\t\t\t*  *                                           *  *\n");
	printf("\t\t\t\t\t\t*  *                                           *  *\n");
	printf("\t\t\t\t\t\t*  *                                           *  *\n");
	printf("\t\t\t\t\t\t*  *            A PROJECT BY GROUP-09          *  *\n");
	printf("\t\t\t\t\t\t*  *                                           *  *\n");
	printf("\t\t\t\t\t\t*  *********************************************  *\n");
	printf("\t\t\t\t\t\t***************************************************\n\n");

	printf("\t\t\t\t\t\t               %s",ctime(&t));

	printf("\n\n\n\t\t\t\t\t\t Press Enter to continue.....\n");
	getchar();

	system("clear");

	main_menu();


	return 0;
}

void main_menu() {
	int i=0;
	int select,pack;
	time_t t;
	time(&t);

	system("clear");

	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ******************************  |Main menu|  ***************************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");

	printf("\n\n\t\t\t\t\t\t***************************************************\n");
	printf("\t\t\t\t\t\t*  *********************************************  *\n");
	printf("\t\t\t\t\t\t*  *                                           *  *\n");
	printf("\t\t\t\t\t\t*  *               01.Receiption               *  *\n");
	printf("\t\t\t\t\t\t*  *               02.Packeges                 *  *\n");
	printf("\t\t\t\t\t\t*  *               03.Room Booking             *  *\n");
	printf("\t\t\t\t\t\t*  *               04.Food Order               *  *\n");
	printf("\t\t\t\t\t\t*  *               05.payment                  *  *\n");
	printf("\t\t\t\t\t\t*  *               06.Salary                   *  *\n");
	printf("\t\t\t\t\t\t*  *               07.feedback                 *  *\n");
	printf("\t\t\t\t\t\t*  *               08.Exit                     *  *\n");
	printf("\t\t\t\t\t\t*  *                                           *  *\n");
	printf("\t\t\t\t\t\t*  *********************************************  *\n");
	printf("\t\t\t\t\t\t***************************************************\n\n");


	printf("\n\t\t\t\t\t Please enter your choice from menu: ");
	scanf("%d",&select);

	switch(select) {
		case 1:
			receiption();
			break;
		case 2:
			system("clear");
			printf("\n\t\t\t\t\t********You can select packaeges under two categories********\n\n");
			printf("\n\t\t\t\t\t\t\t** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t\t\t**                         **");
			printf("\n\t\t\t\t\t\t\t**    01.Normal packeges   **");
			printf("\n\t\t\t\t\t\t\t**    02.VIP packeges      **");
			printf("\n\t\t\t\t\t\t\t**                         **");
			printf("\n\t\t\t\t\t\t\t** ** ** ** ** ** ** ** ** **");
			printf("\n\n\t\t\t\t\t Please enter your choice: ");
			scanf("%d",&pack);

			switch(pack) {
				case 1:
					normal_booking();
					break;
				case 2:
					VIP_booking();
					break;
				default:
					printf("\nInvalid Input");
			}
			break;
		case 3:
			room_booking();
			break;
		case 4:
			food_menu();
			break;
		case 5:
			payment();
			break;
		case 6:
			count_salary();
			break;
		case 7:
			feedback();
			break;
		case 8:
			system("clear");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t *****THANK YOU*****");
			printf("\n\t\t\t\t\t\t              FOR TRUSTING OUR SERVICE");
			printf("\n\n\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t*  >> >> >> >> >>  >>       >>      >>      >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*  << << << << <<  <<       <<   <<    <<   << <<     <<  <<   <<   <<            *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>  >>    >>  >> >>      >>           *\n");
			printf("\t\t\t\t*        <<        << << << <<  <<  <<  <<  <<   <<   <<  <<            << <<     *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>    >>  >>  >> >>              >>   *\n");
			printf("\t\t\t\t*        <<        <<       <<  <<      <<  <<     << <<  <<   <<             <<  *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			exit(0);
			printf("\n\n\n");
			break;
		default:
			main();
	}

}


//********************receiption function start********************
void receiption() {
	int c, emp;

	system("clear");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ******************************  |Receiption|  ***************************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");

	printf("\n");
	printf("\n\t\t\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	printf("\n\t\t\t\t\t\t   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	printf("\n\t\t\t\t\t\t||                                           ||");
	printf("\n\t\t\t\t\t\t||         01.Customer Registration          ||");
	printf("\n\t\t\t\t\t\t||         02.Display coustomer details      ||");
	printf("\n\t\t\t\t\t\t||         03.Search customer details       ||");
	printf("\n\t\t\t\t\t\t||         04.Delete customer details       ||");
	printf("\n\t\t\t\t\t\t||         05.Update customer details       ||");
	printf("\n\t\t\t\t\t\t||         06.Exit                           ||");
	printf("\n\t\t\t\t\t\t||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _||");
	printf("\n\t\t\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	printf("\n");

	printf("\n\n\t\t\t\t\tEnter your choice from menu:");
	scanf("%d", &c);
	printf("\n");

	switch (c) {
		case 1:
			insert();
			break;
		case 2:
			emp = empty();
			if (emp == 0) {
				printf("\n\n\t\t\t\t\t\t*****The file is EMPTY*****\n");

				printf("\n\n\t\t\t\t\t\tDo you want to Register Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
				printf("\n\n\t\t\t\t\t\tEnter Your choice :");
				scanf(" %c",&rep);

				switch(rep) {
					case 'Y':
					case 'y': {
						system("clear");
						insert();
						break;
					}
					case 'N':
					case 'n': {
						system("clear");
						receiption();
						break;
					}
					default:
						printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
				}
			}

			else
				disp();
			break;

		case 3:
			search();
			break;
		case 4:
			deletefile();
			break;
		case 5:
			update();
			break;
		case 6:
			system("clear");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t *****THANK YOU*****");
			printf("\n\t\t\t\t\t\t              FOR TRUSTING OUR SERVICE");
			printf("\n\n\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t*  >> >> >> >> >>  >>       >>      >>      >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*  << << << << <<  <<       <<   <<    <<   << <<     <<  <<   <<   <<            *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>  >>    >>  >> >>      >>           *\n");
			printf("\t\t\t\t*        <<        << << << <<  <<  <<  <<  <<   <<   <<  <<            << <<     *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>    >>  >>  >> >>              >>   *\n");
			printf("\t\t\t\t*        <<        <<       <<  <<      <<  <<     << <<  <<   <<             <<  *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\n\n\n");
			exit(0);
			break;

		default:
			printf("\n\n\t\t\t\t\tYour choice is wrong\n\n\t\t\t\t\tPlease try again...\n");
			break;

	}

}


//    FUNCTION TO INSERT RECORDS TO THE FILE
void insert() {
	FILE *fp;
	fp = fopen("Record", "a");

	printf("\n\t\t\t\t\t\t\t\t");
	printf("\n\t\t\t\t\t\t\t      **************************");

	printf("\n\n\n\t\t\t\t\t\tEnter Room number:");
	scanf("%d", &stud.roomnumber);

	printf("\n\t\t\t\t\t\tEnter Name:");
	scanf("%s", stud.name);

	printf("\n\t\t\t\t\t\tEnter Address:");
	scanf("%s", stud.address);

	printf("\n\t\t\t\t\t\tEnter Phone Number:");
	scanf("%s", stud.phonenumber);

	printf("\n\t\t\t\t\t\tEnter Nationality:");
	scanf("%s", stud.nationality);

	printf("\n\t\t\t\t\t\tEnter Email:");
	scanf("%s", stud.email);

	printf("\n\t\t\t\t\t\tEnter Period(\'x\'days):");
	scanf("%s", stud.period);

	printf("\n\t\t\t\t\t\tEnter Arrival date(dd\\mm\\yyyy):");
	scanf("%s", stud.arrivaldate);

	fwrite(&stud, sizeof(stud), 1, fp);

	fclose(fp);

	printf("\n\n\t\t\t\t\t\tDo you want to Register Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			insert();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			receiption();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}

//    FUNCTION TO DISPLAY RECORDS
void disp() {
	FILE *fp1;
	fp1 = fopen("Record", "r");
	system("clear");
	printf("\n\t\t\t\t\t\t\t\tAll Customer Details:");
	printf("\n\t\t\t\t\t\t\t      **************************");

	printf("\nRoom number \tName \t\tAddress \tPhone Number \tNationality \tEmail \t\t\t\tPeriod \t\tArrival Date");
	while (fread(&stud, sizeof(stud), 1, fp1))
		printf("\n\n  %d\t\t%s\t\t%s\t\t%s\t%s\t\t%s\t\t%s\t\t%s\n", stud.roomnumber, stud.name, stud.address, stud.phonenumber, stud.nationality, stud.email, stud.period, stud.arrivaldate);

	fclose(fp1);

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t *****THANK YOU*****");
			printf("\n\t\t\t\t\t\t              FOR TRUSTING OUR SERVICE");
			printf("\n\n\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t*  >> >> >> >> >>  >>       >>      >>      >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*  << << << << <<  <<       <<   <<    <<   << <<     <<  <<   <<   <<            *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>  >>    >>  >> >>      >>           *\n");
			printf("\t\t\t\t*        <<        << << << <<  <<  <<  <<  <<   <<   <<  <<            << <<     *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>    >>  >>  >> >>              >>   *\n");
			printf("\t\t\t\t*        <<        <<       <<  <<      <<  <<     << <<  <<   <<             <<  *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\n\n\n");
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			receiption();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}

}

//    FUNCTION TO SEARCH THE GIVEN RECORD
void search() {
	FILE *fp2;
	int r, s, avl;
	system("clear");
	printf("\n\n\t\t\t\t\t\tEnter the Room no you want to search  :");
	scanf("%d", &r);
	avl = avlroomno(r);
	if (avl == 0)
		printf("\n\n\t\t\t\t\t\tRoom No %d is not available in the file\n",r);
	else {
		fp2 = fopen("Record", "r");
		while (fread(&stud, sizeof(stud), 1, fp2)) {
			s = stud.roomnumber;
			if (s == r) {
				printf("\n\n\t\t\t\t\t\tRoom no       = %d", stud.roomnumber);
				printf("\n\n\t\t\t\t\t\tName          = %s", stud.name);
				printf("\n\n\t\t\t\t\t\tAddress       = %s\n", stud.address);
				printf("\n\n\t\t\t\t\t\tPhone Number  = %s\n", stud.phonenumber);
				printf("\n\n\t\t\t\t\t\tNationality   = %s\n", stud.nationality);
				printf("\n\n\t\t\t\t\t\tEmail         = %s\n", stud.email);
				printf("\n\n\t\t\t\t\t\tPeriod        = %s\n", stud.period);
				printf("\n\n\t\t\t\t\t\tArrival Date  = %s\n", stud.arrivaldate);
			}
		}
		fclose(fp2);
	}

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t *****THANK YOU*****");
			printf("\n\t\t\t\t\t\t              FOR TRUSTING OUR SERVICE");
			printf("\n\n\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t*  >> >> >> >> >>  >>       >>      >>      >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*  << << << << <<  <<       <<   <<    <<   << <<     <<  <<   <<   <<            *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>  >>    >>  >> >>      >>           *\n");
			printf("\t\t\t\t*        <<        << << << <<  <<  <<  <<  <<   <<   <<  <<            << <<     *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>    >>  >>  >> >>              >>   *\n");
			printf("\t\t\t\t*        <<        <<       <<  <<      <<  <<     << <<  <<   <<             <<  *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\n\n\n");
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			receiption();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}

void deletefile() {
	FILE *fpo;
	FILE *fpt;
	int r, s;
	system("clear");
	printf("\n\n\t\t\t\t\t\tEnter the Room no you want to delete :");
	scanf("%d", &r);
	if (avlroomno(r) == 0)
		printf("\n\n\t\t\t\t\t\tRoom no %d is not available in the file\n", r);
	else {
		fpo = fopen("Record", "r");
		fpt = fopen("TempFile", "w");
		while (fread(&stud, sizeof(stud), 1, fpo)) {
			s = stud.roomnumber;
			if (s != r)
				fwrite(&stud, sizeof(stud), 1, fpt);
		}
		fclose(fpo);
		fclose(fpt);
		fpo = fopen("Record", "w");
		fpt = fopen("TempFile", "r");
		while (fread(&stud, sizeof(stud), 1, fpt))
			fwrite(&stud, sizeof(stud), 1, fpo);
		printf("\n\n\n\t\t\t\t\t\t\t*****RECORD DELETED*****\n");
		fclose(fpo);
		fclose(fpt);
	}

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t *****THANK YOU*****");
			printf("\n\t\t\t\t\t\t              FOR TRUSTING OUR SERVICE");
			printf("\n\n\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t*  >> >> >> >> >>  >>       >>      >>      >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*  << << << << <<  <<       <<   <<    <<   << <<     <<  <<   <<   <<            *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>  >>    >>  >> >>      >>           *\n");
			printf("\t\t\t\t*        <<        << << << <<  <<  <<  <<  <<   <<   <<  <<            << <<     *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>    >>  >>  >> >>              >>   *\n");
			printf("\t\t\t\t*        <<        <<       <<  <<      <<  <<     << <<  <<   <<             <<  *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\n\n\n");
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			receiption();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}
//    FUNCTION TO UPDATE THE RECORD
void update() {
	int avl;
	FILE *fpt;
	FILE *fpo;
	int s, r, ch;
	system("clear");
	printf("\n\n\t\t\t\t\t\tEnter room number to update:");
	scanf("%d", &r);
	avl = avlroomno(r);
	if (avl == 0) {
		printf("\n\n\t\t\t\t\t\tRoom number %d is not Available in the file", r);
	} else {
		fpo = fopen("Record", "r");
		fpt = fopen("TempFile", "w");
		while (fread(&stud, sizeof(stud), 1, fpo)) {
			s = stud.roomnumber;
			if (s != r)
				fwrite(&stud, sizeof(stud), 1, fpt);
			else {
				printf("\n\n\t\t\t\t\t\t01.Update Name of Room Number %d", r);
				printf("\n\n\t\t\t\t\t\t02.Update phone number of Room Number %d", r);
				printf("\n\n\t\t\t\t\t\t03.Update both Name and phone number of Room Number %d", r);
				printf("\n\n\t\t\t\t\t\tEnter your choice:");
				scanf("%d", &ch);
				switch (ch) {
					case 1:
						printf("\n\t\t\t\t\t\tEnter Name:");
						scanf("%s", stud.name);
						break;
					case 2:
						printf("\n\t\t\t\t\t\tEnter phone number : ");
						scanf("%s", stud.phonenumber);
						break;
					case 3:
						printf("\n\t\t\t\t\t\tEnter Name: ");
						scanf("%s", stud.name);
						printf("\n\t\t\t\t\t\tEnter Phone number: ");
						scanf("%s", stud.phonenumber);
						break;
					default:
						printf("\n\n\t\t\t\t\t\tInvalid Selection");
						break;
				}
				fwrite(&stud, sizeof(stud), 1, fpt);
			}
		}
		fclose(fpo);
		fclose(fpt);
		fpo = fopen("Record", "w");
		fpt = fopen("TempFile", "r");
		while (fread(&stud, sizeof(stud), 1, fpt)) {
			fwrite(&stud, sizeof(stud), 1, fpo);
		}
		fclose(fpo);
		fclose(fpt);
		printf("\n\n\t\t\t\t\t\tRECORD UPDATED");
	}

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t *****THANK YOU*****");
			printf("\n\t\t\t\t\t\t              FOR TRUSTING OUR SERVICE");
			printf("\n\n\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t*  >> >> >> >> >>  >>       >>      >>      >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*  << << << << <<  <<       <<   <<    <<   << <<     <<  <<   <<   <<            *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>  >>    >>  >> >>      >>           *\n");
			printf("\t\t\t\t*        <<        << << << <<  <<  <<  <<  <<   <<   <<  <<            << <<     *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>    >>  >>  >> >>              >>   *\n");
			printf("\t\t\t\t*        <<        <<       <<  <<      <<  <<     << <<  <<   <<             <<  *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\n\n\n");
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			receiption();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}

//    FUNCTION TO CHECK GIVEN ROOM NO IS AVAILABLE //
int avlroomno(int rno) {
	FILE *fp;
	int c = 0;
	fp = fopen("Record", "r");
	while (!feof(fp)) {
		fread(&stud, sizeof(stud), 1, fp);

		if (rno == stud.roomnumber) {
			fclose(fp);
			return 1;
		}
	}
	fclose(fp);

	return 0;
}
//FUNCTION TO CHECK THE FILE IS EMPTY OR NOT
int empty() {
	int c = 0;
	FILE *fp;
	fp = fopen("Record", "r");
	while (fread(&stud, sizeof(stud), 1, fp))
		c = 1;
	fclose(fp);
	return c;
}

//********************receiption function end********************


//********************normal function start********************


void normal_booking() {

	int choice;


	system("clear");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ****************************  |Normal Packeges|  *************************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\n\n\t\t\t\t\tBirthday [0]\tWedding [1]\tOther [2]\tBack [3]\n\n");

	printf("\t\t\t\t\t\tEnter choice: ");
	scanf("%d",&choice);

	if (choice >= 0 && 2>=choice) {

		printf("\n\n\t\t\t\tPlate Type:\n");
		printf("\n\t\t\t\t\tChicken [0]");
		printf("\n\n\t\t\t\t\tVegitable [1]");
		printf("\n\n\t\t\t\t\tFish [2]\n");
		printf("\n\t\t\t\tWellcome Drink Type:\n");
		printf("\n\t\t\t\t\tMixfruit [3]");
		printf("\n\n\t\t\t\t\tMango [4]");
		printf("\n\n\t\t\t\t\tLemon [5]\n\n");

		printf("\t\t\tEnter plate type:");
		scanf("%d",&platetype);
		printf("\t\t\tHow many plates: ");
		scanf("%d",&howmanyplate);

		printf("\n\t\t\tEnter welcome drink type: ");
		scanf("%d",&drinktype);
		printf("\t\t\tHow many cups: ");
		scanf("%d",&howmanydrink);

		switch(choice) {
			case 0:
				birthday();
				break;
			case 1:
				wedding();
				break;
			case 2:
				other();
				break;
		}

	} else if (choice == 3) {
		main_menu();
	}

	else {
		if(choice != 3) {
			printf("\t\t\tInvalid choice\n");
		}
	}





}

float wedding() {
	char rep;

	total = 100000 + (price[platetype] * howmanyplate) + (price[drinktype] * howmanydrink);
	printf("\n\t\t\tTotal Cost: %.2f",total);

	sleep(2);

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t *****THANK YOU*****");
			printf("\n\t\t\t\t\t\t              FOR TRUSTING OUR SERVICE");
			printf("\n\n\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t*  >> >> >> >> >>  >>       >>      >>      >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*  << << << << <<  <<       <<   <<    <<   << <<     <<  <<   <<   <<            *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>  >>    >>  >> >>      >>           *\n");
			printf("\t\t\t\t*        <<        << << << <<  <<  <<  <<  <<   <<   <<  <<            << <<     *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>    >>  >>  >> >>              >>   *\n");
			printf("\t\t\t\t*        <<        <<       <<  <<      <<  <<     << <<  <<   <<             <<  *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\n\n\n");
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			main_menu();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
	}
}

float birthday() {
	total = 80000 + (price[platetype] * howmanyplate) + (price[drinktype] * howmanydrink);
	printf("\n\t\t\tTotal Cost: %.2f",total);

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t *****THANK YOU*****");
			printf("\n\t\t\t\t\t\t              FOR TRUSTING OUR SERVICE");
			printf("\n\n\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t*  >> >> >> >> >>  >>       >>      >>      >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*  << << << << <<  <<       <<   <<    <<   << <<     <<  <<   <<   <<            *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>  >>    >>  >> >>      >>           *\n");
			printf("\t\t\t\t*        <<        << << << <<  <<  <<  <<  <<   <<   <<  <<            << <<     *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>    >>  >>  >> >>              >>   *\n");
			printf("\t\t\t\t*        <<        <<       <<  <<      <<  <<     << <<  <<   <<             <<  *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\n\n\n");
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			main_menu();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
	}
}

float other() {
	total = 50000 + (price[platetype] * howmanyplate) + (price[drinktype] * howmanydrink);
	printf("\n\t\t\tTotal Cost: %.2f",total);

	printf("\n\n\t\t\t\t\t\t\tDo you want to Exit..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

	switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t *****THANK YOU*****");
			printf("\n\t\t\t\t\t\t              FOR TRUSTING OUR SERVICE");
			printf("\n\n\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t*  >> >> >> >> >>  >>       >>      >>      >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*  << << << << <<  <<       <<   <<    <<   << <<     <<  <<   <<   <<            *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>  >>    >>  >> >>      >>           *\n");
			printf("\t\t\t\t*        <<        << << << <<  <<  <<  <<  <<   <<   <<  <<            << <<     *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>    >>  >>  >> >>              >>   *\n");
			printf("\t\t\t\t*        <<        <<       <<  <<      <<  <<     << <<  <<   <<             <<  *\n");
			printf("\t\t\t\t*        >>        >>       >>  >>      >>  >>        >>  >>     >>   >> >> >>    *\n");
			printf("\t\t\t\t*                                                                                 *\n");
			printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\n\n\n");
			exit(0);
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			main_menu();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
	}
}


//********************normal function end********************


//********************VIP function start********************

int VIP_booking() {
	system("clear");	//Close close current and new window
	int x;

	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   *****************************  |VIP Packeges|  **************************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");

	printf("\n\n\n");
	printf("\n\t\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** **");
	printf("\n\t\t\t\t\t\t       **                               **");
	printf("\n\t\t\t\t\t\t       **   01.WEDDING PACKEGES         **");
	printf("\n\t\t\t\t\t\t       **   02.DAYOUT PACKEGES          **");
	printf("\n\t\t\t\t\t\t       **   03.NIGHT FUNCTON PACKEGES   **");
	printf("\n\t\t\t\t\t\t       **   04.BACK                     **");
	printf("\n\t\t\t\t\t\t       **                               **");
	printf("\n\t\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** **");

	printf("\n\n\t\t\t\t\t\t\tEnter your choice : ");
	scanf("%d",&x);

	switch(x) {
		case(1):
			vip_wedding();
			break;

		case(2):
			vip_dayout();
			break;

		case(3):
			vip_nightpan();
			break;
		case(4):
			main_menu();
			break;

		default:
			printf("Please can you try it(only-1,2,3)");
			main();

	}


	return 0;
}


int vip_wedding() {
	int id;
	char nam[20];

	char wedd[50]="WEDDING PACKEGES";
	char dedd[50]="DAYOUT PACKEGES";
	char nedd[50]="NIGHT PANCTON PACKEGES";

	char plpk[50]="PLATINUM PACK";
	char glpk[50]="GOLD PACK";
	char slpk[50]="SILVER PACK";
	char blpk[50]="BRONZE PACK";

	float prc=1035000.00;
	float grc=635000.00;
	float src=330000.00;
	float brc=175000.00;




	FILE *weddingpack;
	weddingpack=fopen("Weddingpack.txt","a+");



	system("clear");	//Close close current and new window

	printf("\n\n\t\t\t\t\t\t\t***** WEDDING PACKEGES *****\n");

	printf("\n\n\n");
	printf("\n\t\t\t\t\t\t       ** ** ** ** ** ** ** ** ** **  **");
	printf("\n\t\t\t\t\t\t       **                             **");
	printf("\n\t\t\t\t\t\t       **      01.PLATINUM PACK       **");
	printf("\n\t\t\t\t\t\t       **      02.GOLD PACK           **");
	printf("\n\t\t\t\t\t\t       **      03.SILVER PACK         **");
	printf("\n\t\t\t\t\t\t       **      04.BRONZE PACK         **");
	printf("\n\t\t\t\t\t\t       **      05.BACK                **");
	printf("\n\t\t\t\t\t\t       **                             **");
	printf("\n\t\t\t\t\t\t       ** ** ** ** ** ** ** ** **  ** **");

	printf("\n\n\t\t\t\t\t\t\tEnter your choice : ");
	scanf("%d",&y);

	switch(y) {
		case(1):
			system("clear");	//Close current and new window
			printf("\t\t\t\t\t\t\t----- WEDDING PACKEGES -----");
			printf("\n\t\t\t\t\t\t\tPLATINUM PACK(Rs. 1 035 000.00)");


			printf("\n\n\n");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t       **                                                 **");
			printf("\n\t\t\t\t\t       **      Hall                     Rs.300 000.00     **");
			printf("\n\t\t\t\t\t       **      Fashion Designer         Rs.50 000.00      **");
			printf("\n\t\t\t\t\t       **      Transport service        Rs.100 000.00     **");
			printf("\n\t\t\t\t\t       **      Foods                    Rs.150 000.00     **");
			printf("\n\t\t\t\t\t       **      Pool                     Rs.10 000.00      **");
			printf("\n\t\t\t\t\t       **      Laksary room (3 day)     Rs.300 000.00     **");
			printf("\n\t\t\t\t\t       **      Photographers            Rs.125 000.00     **");
			printf("\n\t\t\t\t\t       **                                                 **");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");

			printf("\n\n\t\t\t\t\t\t\tAre you sure? (Y/N) : ");
			scanf(" %c",&q);

			switch(q) {

				case('y'):
				case('Y'):
					printf("\n\t\t\t\t\t\t\tEnter your ID : ");
					scanf("%d",&id);

					printf("\t\t\t\t\t\t\tEnter your Name : ");
					scanf("%s",nam);

					printf("\n\t\t\t\t\t\t\tSuccessful");

					fprintf(weddingpack,"%d\t%s\t%s\t%s\t\t%.2f\n",id,nam,wedd,plpk,prc);
					fclose(weddingpack);

				case('n'):
				case('N'):

					printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
					printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
					scanf("%d",&w);
			}

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}
			break;


		case(2):

			system("clear");	//Close current and new window
			printf("\t\t\t\t\t\t\t----- WEDDING PACKEGES -----");
			printf("\n\t\t\t\t\t\t\t   GOLD PACK(Rs. 635000.00)");


			printf("\n\n\n");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t       **                                                 **");
			printf("\n\t\t\t\t\t       **      Hall                     Rs.250 000.00     **");
			printf("\n\t\t\t\t\t       **      Fashion Designer         Rs.45 000.00      **");
			printf("\n\t\t\t\t\t       **      Transport service        Rs.95 000.00      **");
			printf("\n\t\t\t\t\t       **      Foods                    Rs.145 000.00     **");
			printf("\n\t\t\t\t\t       **      Photographers            Rs.100 000.00.00  **");
			printf("\n\t\t\t\t\t       **                                                 **");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");

			printf("\n\n\t\t\t\t\t\t\tAre you sure? (Y/N) : ");
			scanf(" %c",&q);

			switch(q) {

				case('y'):
				case('Y'):
					printf("\n\t\t\t\t\t\t\tEnter your ID : ");
					scanf("%d",&id);

					printf("\t\t\t\t\t\t\tEnter your Name : ");
					scanf("%s",nam);

					printf("\n\t\t\t\t\t\t\tSuccessful");

					fprintf(weddingpack,"%d\t%s\t%s\t%s\t\t%.2f\n",id,nam,wedd,plpk,prc);
					fclose(weddingpack);

				case('n'):
				case('N'):

					printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
					printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
					scanf("%d",&w);
			}

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}
			break;


		case(3):

			system("clear");	//Close current and new window
			printf("\t\t\t\t\t\t\t----- WEDDING PACKEGES -----");
			printf("\n\t\t\t\t\t\t\t SILVER PACK(Rs. 330 000.00)");


			printf("\n\n\n");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t       **                                                 **");
			printf("\n\t\t\t\t\t       **      Hall                     Rs.200 000.00     **");
			printf("\n\t\t\t\t\t       **      Foods                    Rs.130 000.00     **");
			printf("\n\t\t\t\t\t       **                                                 **");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");

			printf("\n\n\t\t\t\t\t\t\tAre you sure? (Y/N) : ");
			scanf(" %c",&q);

			switch(q) {

				case('y'):
				case('Y'):
					printf("\n\t\t\t\t\t\t\tEnter your ID : ");
					scanf("%d",&id);

					printf("\t\t\t\t\t\t\tEnter your Name : ");
					scanf("%s",nam);

					printf("\n\t\t\t\t\t\t\tSuccessful");

					fprintf(weddingpack,"%d\t%s\t%s\t%s\t\t%.2f\n",id,nam,wedd,plpk,prc);
					fclose(weddingpack);

				case('n'):
				case('N'):

					printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
					printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
					scanf("%d",&w);
			}

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}
			break;



		case(4):

			system("clear");	//Close current and new window
			printf("\t\t\t\t\t\t\t----- WEDDING PACKEGES -----");
			printf("\n\t\t\t\t\t\t\t BRONZE PACK(Rs. 175 000.00)");


			printf("\n\n\n");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t       **                                                 **");
			printf("\n\t\t\t\t\t       **      Hall                     Rs.175 000.00     **");
			printf("\n\t\t\t\t\t       **                                                 **");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");

			printf("\n\n\t\t\t\t\t\t\tAre you sure? (Y/N) : ");
			scanf(" %c",&q);



			switch(q) {

				case('y'):
				case('Y'):
					printf("\n\t\t\t\t\t\t\tEnter your ID : ");
					scanf("%d",&id);

					printf("\t\t\t\t\t\t\tEnter your Name : ");
					scanf("%s",nam);

					printf("\n\t\t\t\t\t\t\tSuccessful");

					fprintf(weddingpack,"%d\t%s\t%s\t%s\t\t%.2f\n",id,nam,wedd,plpk,prc);
					fclose(weddingpack);

				case('n'):
				case('N'):

					printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
					printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
					scanf("%d",&w);
			}

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}
			break;

		case 5:
			VIP_booking();
			break;

		default:


			printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
			printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
			scanf("%d",&w);


			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}


	}
}


int vip_dayout() {
	int id;
	char nam[20];

	char wedd[50]="WEDDING PACKEGES";
	char dedd[50]="DAYOUT PACKEGES";
	char nedd[50]="NIGHT PANCTON PACKEGES";

	char plpk[50]="PLATINUM PACK";
	char glpk[50]="GOLD PACK";
	char slpk[50]="SILVER PACK";
	char blpk[50]="BRONZE PACK";

	float prc=115000.00;
	float grc=25000.00;
	float src=20000.00;
	float brc=9000.00;


	FILE *dayoutingpack;
	dayoutingpack=fopen("Dayoutpack.txt","a+");


	system("clear");	//Close close current and new window

	printf("\n\n\t\t\t\t\t\t\t***** DAYOUT PACKEGES *****\n");

	printf("\n\n\n");
	printf("\n\t\t\t\t\t\t       ** ** ** ** ** ** ** ** ** **  **");
	printf("\n\t\t\t\t\t\t       **                             **");
	printf("\n\t\t\t\t\t\t       **      01.PLATINUM PACK       **");
	printf("\n\t\t\t\t\t\t       **      02.GOLD PACK           **");
	printf("\n\t\t\t\t\t\t       **      03.SILVER PACK         **");
	printf("\n\t\t\t\t\t\t       **      04.BRONZE PACK         **");
	printf("\n\t\t\t\t\t\t       **      05.BACK                **");
	printf("\n\t\t\t\t\t\t       **                             **");
	printf("\n\t\t\t\t\t\t       ** ** ** ** ** ** ** ** **  ** **");

	printf("\n\n\t\t\t\t\t\t\tEnter your choice : ");
	scanf("%d",&y);


	switch(y) {

		case(1):


			system("clear");	//Close current and new window
			printf("\t\t\t\t\t\t\t----- DAYOUT PACKEGES -----");
			printf("\n\t\t\t\t\t\t\tPLATINUM PACK(Rs. 115 000.00)");


			printf("\n\n\n");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       **      Special Pleace         Rs.10 000.00     **");
			printf("\n\t\t\t\t\t       **      Pool                   Rs.5 000.00      **");
			printf("\n\t\t\t\t\t       **      Foods                  Rs.20 000.00     **");
			printf("\n\t\t\t\t\t       **      Rooms                  Rs.50 000.00     **");
			printf("\n\t\t\t\t\t       **      Transport service      Rs.30 000.00     **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");

			printf("\n\n\t\t\t\t\t\t\tAre you sure? (Y/N) : ");
			scanf(" %c",&q);

			switch(q) {

				case('y'):
				case('Y'):
					printf("\n\t\t\t\t\t\t\tEnter your ID : ");
					scanf("%d",&id);

					printf("\t\t\t\t\t\t\tEnter your Name : ");
					scanf("%s",nam);

					printf("\n\t\t\t\t\t\t\tSuccessful");

					fprintf(dayoutingpack,"%d\t%s\t%s\t%s\t\t%.2f\n",id,nam,wedd,plpk,prc);
					fclose(dayoutingpack);

				case('n'):
				case('N'):

					printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
					printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
					scanf("%d",&w);
			}

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}
			break;

		case(2):

			system("clear");	//Close current and new window
			printf("\t\t\t\t\t\t\t----- DAYOUT PACKEGES -----");
			printf("\n\t\t\t\t\t\t\tGOLD PACK(Rs. 25000.00)");


			printf("\n\n\n");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       **      Special Pleace         Rs.5 000.00     **");
			printf("\n\t\t\t\t\t       **      Pool                   Rs.5 000.00      **");
			printf("\n\t\t\t\t\t       **      Foods                  Rs.15 000.00     **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");

			printf("\n\n\t\t\t\t\t\t\tAre you sure? (Y/N) : ");
			scanf(" %c",&q);

			switch(q) {

				case('y'):
				case('Y'):
					printf("\n\t\t\t\t\t\t\tEnter your ID : ");
					scanf("%d",&id);

					printf("\t\t\t\t\t\t\tEnter your Name : ");
					scanf("%s",nam);

					printf("\n\t\t\t\t\t\t\tSuccessful");

					fprintf(dayoutingpack,"%d\t%s\t%s\t%s\t\t%.2f\n",id,nam,wedd,plpk,prc);
					fclose(dayoutingpack);

				case('n'):
				case('N'):

					printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
					printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
					scanf("%d",&w);
			}

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}
			break;



		case(3):

			system("clear");	//Close current and new window
			printf("\t\t\t\t\t\t\t----- DAYOUT PACKEGES -----");
			printf("\n\t\t\t\t\t\t\tSILVER PACK(Rs. 20 000.00)");


			printf("\n\n\n");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       **      Special Pleace         Rs.10 000.00     **");
			printf("\n\t\t\t\t\t       **      Foods                  Rs.10 000.00     **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");

			printf("\n\n\t\t\t\t\t\t\tAre you sure? (Y/N) : ");
			scanf(" %c",&q);

			switch(q) {

				case('y'):
				case('Y'):
					printf("\n\t\t\t\t\t\t\tEnter your ID : ");
					scanf("%d",&id);

					printf("\t\t\t\t\t\t\tEnter your Name : ");
					scanf("%s",nam);

					printf("\n\t\t\t\t\t\t\tSuccessful");

					fprintf(dayoutingpack,"%d\t%s\t%s\t%s\t\t%.2f\n",id,nam,wedd,plpk,prc);
					fclose(dayoutingpack);

				case('n'):
				case('N'):

					printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
					printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
					scanf("%d",&w);
			}

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}
			break;




		case(4):

			system("clear");	//Close current and new window
			printf("\t\t\t\t\t\t\t----- DAYOUT PACKEGES -----");
			printf("\n\t\t\t\t\t\t\tBRONZE PACK(Rs. 9000.00)");


			printf("\n\n\n");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       **      Special Pleace          Rs.9 000.00     **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");

			printf("\n\n\t\t\t\t\t\t\tAre you sure? (Y/N) : ");
			scanf(" %c",&q);

			switch(q) {

				case('y'):
				case('Y'):
					printf("\n\t\t\t\t\t\t\tEnter your ID : ");
					scanf("%d",&id);

					printf("\t\t\t\t\t\t\tEnter your Name : ");
					scanf("%s",nam);

					printf("\n\t\t\t\t\t\t\tSuccessful");

					fprintf(dayoutingpack,"%d\t%s\t%s\t%s\t\t%.2f\n",id,nam,wedd,plpk,prc);
					fclose(dayoutingpack);

				case('n'):
				case('N'):

					printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
					printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
					scanf("%d",&w);
			}

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}
			break;

		case 5:
			VIP_booking();
			break;


		default:
			printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
			printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
			scanf("%d",&w);


			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}


	}

}




int vip_nightpan() {

	int id;
	char nam[20];

	char wedd[50]="WEDDING PACKEGES";
	char dedd[50]="DAYOUT PACKEGES";
	char nedd[50]="NIGHT PANCTON PACKEGES";

	char plpk[50]="PLATINUM PACK";
	char glpk[50]="GOLD PACK";
	char slpk[50]="SILVER PACK";
	char blpk[50]="BRONZE PACK";

	float prc=52000.00;
	float grc=24000.00;
	float src=16000.00;
	float brc=10000.00;




	FILE *nightpunctionpack;
	nightpunctionpack=fopen("Nightpunctionpack.txt","a+");


	system("clear");	//Close close current and new window

	printf("\n\n\t\t\t\t\t\t\t***** NIGHT FUNCTION PACKEGES *****\n");

	printf("\n\n\n");
	printf("\n\t\t\t\t\t\t       ** ** ** ** ** ** ** ** ** **  **");
	printf("\n\t\t\t\t\t\t       **                             **");
	printf("\n\t\t\t\t\t\t       **      01.PLATINUM PACK       **");
	printf("\n\t\t\t\t\t\t       **      02.GOLD PACK           **");
	printf("\n\t\t\t\t\t\t       **      03.SILVER PACK         **");
	printf("\n\t\t\t\t\t\t       **      04.BRONZE PACK         **");
	printf("\n\t\t\t\t\t\t       **      05.BACK                **");
	printf("\n\t\t\t\t\t\t       **                             **");
	printf("\n\t\t\t\t\t\t       ** ** ** ** ** ** ** ** **  ** **");

	printf("\n\n\t\t\t\t\t\t\tEnter your choice : ");
	scanf("%d",&y);


	switch(y) {
		case(1):

			system("clear");	//Close current and new window
			printf("\t\t\t\t\t\t\t----- NIGHT FUNCTION PACKEGES -----");
			printf("\n\t\t\t\t\t\t\tPLATINUM PACK(Rs. 52 000.00)");


			printf("\n\n\n");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       **      Special Pleace         Rs.10 000.00     **");
			printf("\n\t\t\t\t\t       **      Pool                   Rs.5 000.00      **");
			printf("\n\t\t\t\t\t       **      Foods                  Rs.10 000.00     **");
			printf("\n\t\t\t\t\t       **      Rooms                  Rs.12 000.00     **");
			printf("\n\t\t\t\t\t       **      Transport service      Rs.15 000.00     **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");

			printf("\n\n\t\t\t\t\t\t\tAre you sure? (Y/N) : ");
			scanf(" %c",&q);

			switch(q) {

				case('y'):
				case('Y'):
					printf("\n\t\t\t\t\t\t\tEnter your ID : ");
					scanf("%d",&id);

					printf("\t\t\t\t\t\t\tEnter your Name : ");
					scanf("%s",nam);

					printf("\n\t\t\t\t\t\t\tSuccessful");

					fprintf(nightpunctionpack,"%d\t%s\t%s\t%s\t\t%.2f\n",id,nam,wedd,plpk,prc);
					fclose(nightpunctionpack);

				case('n'):
				case('N'):

					printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
					printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
					scanf("%d",&w);
			}

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}
			break;


		case(2):

			system("clear");	//Close current and new window
			printf("\t\t\t\t\t\t\t----- NIGHT FUNCTION PACKEGES -----");
			printf("\n\t\t\t\t\t\t\tGOLD PACK(Rs. 24000.00");


			printf("\n\n\n");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       **      Special Pleace         Rs.10 000.00     **");
			printf("\n\t\t\t\t\t       **      Pool                   Rs.5 000.00      **");
			printf("\n\t\t\t\t\t       **      Foods                  Rs.9 000.00      **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");

			printf("\n\n\t\t\t\t\t\t\tAre you sure? (Y/N) : ");
			scanf(" %c",&q);

			switch(q) {

				case('y'):
				case('Y'):
					printf("\n\t\t\t\t\t\t\tEnter your ID : ");
					scanf("%d",&id);

					printf("\t\t\t\t\t\t\tEnter your Name : ");
					scanf("%s",nam);

					printf("\n\t\t\t\t\t\t\tSuccessful");

					fprintf(nightpunctionpack,"%d\t%s\t%s\t%s\t\t%.2f\n",id,nam,wedd,plpk,prc);
					fclose(nightpunctionpack);

				case('n'):
				case('N'):

					printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
					printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
					scanf("%d",&w);
			}

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}
			break;


		case(3):

			system("clear");	//Close current and new window
			printf("\t\t\t\t\t\t\t----- NIGHT FUNCTION PACKEGES -----");
			printf("\n\t\t\t\t\t\t\tSILVER PACK(Rs. 16000.00");


			printf("\n\n\n");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       **      Special Pleace         Rs.10 000.00     **");
			printf("\n\t\t\t\t\t       **      Foods                  Rs.6 000.00      **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");

			printf("\n\n\t\t\t\t\t\t\tAre you sure? (Y/N) : ");
			scanf(" %c",&q);

			switch(q) {

				case('y'):
				case('Y'):
					printf("\n\t\t\t\t\t\t\tEnter your ID : ");
					scanf("%d",&id);

					printf("\t\t\t\t\t\t\tEnter your Name : ");
					scanf("%s",nam);

					printf("\n\t\t\t\t\t\t\tSuccessful");

					fprintf(nightpunctionpack,"%d\t%s\t%s\t%s\t\t%.2f\n",id,nam,wedd,plpk,prc);
					fclose(nightpunctionpack);

				case('n'):
				case('N'):

					printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
					printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
					scanf("%d",&w);
			}

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}
			break;


		case(4):

			system("clear");	//Close current and new window
			printf("\t\t\t\t\t\t\t----- NIGHT FUNCTION PACKEGES -----");
			printf("\n\t\t\t\t\t\t\tBRONZE PACK(Rs. 10000.00)");


			printf("\n\n\n");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       **      Special Pleace         Rs.10 000.00     **");
			printf("\n\t\t\t\t\t       **                                              **");
			printf("\n\t\t\t\t\t       ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **");

			printf("\n\n\t\t\t\t\t\t\tAre you sure? (Y/N) : ");
			scanf(" %c",&q);

			switch(q) {

				case('y'):
				case('Y'):
					printf("\n\t\t\t\t\t\t\tEnter your ID : ");
					scanf("%d",&id);

					printf("\t\t\t\t\t\t\tEnter your Name : ");
					scanf("%s",nam);

					printf("\n\t\t\t\t\t\t\tSuccessful");

					fprintf(nightpunctionpack,"%d\t%s\t%s\t%s\t\t%.2f\n",id,nam,wedd,plpk,prc);
					fclose(nightpunctionpack);

				case('n'):
				case('N'):

					printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
					printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
					scanf("%d",&w);
			}

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_wedding();
					break;
				default:
					main_menu();
			}
			break;


		case 5:
			VIP_booking();
			break;


		default:
			system("clear");	//Close close current and new window
			printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
			printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
			scanf("%d",&w);

			switch(w) {
				case(1):
					main_menu();
					break;
				case(2):
					vip_nightpan();
					break;

			}


	}



}

//********************VIP function end********************


//********************room booking function start********************

int room_booking() {

	int sel1;  //first selection avilable room or menu
	int avRoSel; //Avilable Room Selection
	int roomBedSele; //Room Bed Select
	int z;  //How many Rooms

	system("clear");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ******************************  |Room booking|  ***************************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");

	printf("\n\t\t\t\t\t\t\t\t01.Avilable Rooms\n");
	printf("\t\t\t\t\t\t\t\t02.Go to main menu\n");
	printf("\n\t\t\t\t\t\t\t\tEnter Your choice : ");

	scanf("%d",&sel1);
	switch(sel1) {
		case 1:
			system("clear");
			printf("\n\t\t\t\t\t\t:::::::::::::>>>> Avilable Rooms <<<<:::::::::::\n");
			printf("\n\t\t\t\t\t\t\t\t01.A/C Rooms\n");
			printf("\t\t\t\t\t\t\t\t02.Non A/C Rooms\n\n");
			printf("\t\t\t\t\t\t\t\t03.Back\n\n");
			printf("\n\t\t\t\t\t\t\t\tEnter Your choice:  ");
			scanf("%d",&avRoSel);

			switch(avRoSel) {
				case 1:
					system("clear");
					printf("\n\t\t\t\t\t\t::::::::::::::>>>> A/C Rooms <<<<:::::::::::::\n");
					printf("\n\t\t\t\t\t\t\t01.Single Bed Room\n");
					printf("\n\t\t\t\t\t\t\t02.Double Bed Room\n\n");
					printf("\n\t\t\t\t\t\t\t\tEnter your choice: ");
					scanf("%d",&roomBedSele);

					switch(roomBedSele) {
						case 1:
							system("clear");
							printf("\n\t\t\t\t\t::::::::::::::>>>> You selected A/C-Single Bedroom <<<<:::::::::::::\n");
							cusDetails();
							printf("\n\t\t\t\t\t\tSelected Rooms: A/C-Single Bedroom");
							break;


						case 2:
							system("clear");
							printf("\n\t\t\t\t\t::::::::::::::>>>> You selected A/C-Double Bedroom <<<<:::::::::::::\n");
							cusDetails();
							printf("\n\t\t\t\t\t\tSelelcted Rooms: A/C-Double Bedroom");
							break;

						default:
							printf("\n\t\t\t\t\tEnter the correct choice..!");
					}

					break;


				case 2:
					system("clear");
					printf("\n\t\t\t\t\t\t::::::::::::::>>>> Non A/C Rooms <<<<:::::::::::::\n");
					printf("\n\t\t\t\t\t\t[1].Single Bed Room\n");
					printf("\n\t\t\t\t\t\t[2].Double Bed Room\n\n");
					printf("\n\t\t\t\t\tEnter your choice: ");
					scanf("%d",&roomBedSele);

					switch(roomBedSele) {
						case 1:
							system("clear");
							printf("\n\t\t\t\t\t::::::::::::::>>>> You selected Non A/C-Single Bedroom <<<<:::::::::::::\n");
							cusDetails();
							printf("\n\t\t\t\t\t\tSelected Rooms: Non A/C-Single Bedroom");
							break;


						case 2:
							system("clear");
							printf("\n\t\t\t\t\t::::::::::::::>>>> You selected Non A/C-Double Bedroom <<<<:::::::::::::\n");
							cusDetails();
							printf("\n\t\t\t\t\t\tSelected Rooms : Non A/C-Double Bedroom");
							break;

						default:
							printf("\n\t\t\t\t\t\tEnter the correct choice..!");
					}

					break;

				case 3:
					room_booking();
					break;

				default:
					printf("\n\t\t\t\t\t\tEnter the correct choice..!");
			}

		case 2:
			main_menu();
			break;

		default:
			printf("\n\t\t\t\t\t\tEnter the correct choice..!");
	}


	return 0;

}

void cusDetails() {
	char fName[20];
	char lName[20];
	char nicNo[15];
	int pNo;
	int hManyRooms;  //How many Rooms
	int rooms[10]= {1,2,3,4,5,6,7,8,9,10};
	int stayDay;
	time_t t;
	time(&t);
	printf("\n\t\t\t\t\t\t::::::::::::::>>>> Enter the details <<<<:::::::::::::\n");
	printf("\n\t\t\t\t\t\t>>>Enter your first name: ");
	scanf(" %s",fName);
	printf("\t\t\t\t\t\t>>>Enter your last name: ");
	scanf(" %s",lName);
	printf("\t\t\t\t\t\t>>>Enter your NIC no: ");
	scanf(" %s",nicNo);
	printf("\t\t\t\t\t\t>>>Enter your phone number: ");
	scanf(" %d",&pNo);
	printf("\t\t\t\t\t\t>>>How many rooms do you want? : ");
	scanf("%d",&hManyRooms);
	printf("\t\t\t\t\t\t>>>How many days will you stay? :");
	scanf("%d",&stayDay);


	strcat(fName,lName);

	system("clear");

	printf("\n\n\t\t\t\t\t\t::::::::::::::>>>> Coustomer Details <<<<:::::::::::::\n");
	printf("\n\t\t\t\t\t\tCoustomer Name: %s",fName);
	printf("\n\t\t\t\t\t\tCoustomer NIC: %s",nicNo);
	printf("\n\t\t\t\t\t\tCoustomer Phone Number: %d",pNo);
	printf("\n\t\t\t\t\t\tCoustomer have booked-rooms: ");
	if(hManyRooms>0) {
		int i;
		for(i=0; i<hManyRooms; i++) {
			printf("\n\t\t\t\t\t\t Rooms No:%d",rooms[i]);
		}
	}
	printf("\n\t\t\t\t\t\tStay days : %d",stayDay);
	printf("\n\t\t\t\t\t\tRegistation Date and Time: %s", ctime(&t));




	printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
	printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
	scanf("%d",&w);

	switch(w) {
		case(1):
			main_menu();
			break;
		case(2):
			room_booking();
			break;

	}

}


//********************room booking function end********************


//********************food menu function start********************
int food_menu() {
	float Getfood(float totprice,int qrt);
	float deasert(float total,int qrt);
	float Totprice;
	float totprice,total;
	int qrt;
	char x,Y,N,e;
	int m;

	system("clear");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ******************************  |Food menu|  ***************************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");

	printf("\t\t\t\t\t\t                       TODAY MENU                  \n\n ");
	printf("\t\t\t\t\t\t        Food Items                       Price(LKR)\n");
	printf("\t\t\t\t\t\t      ------------                     ------------\n\n");
	printf("\t\t\t\t\t\t        1.Vegetable Rice & Curry       Rs.400.00\n");
	printf("\t\t\t\t\t\t        2.Rice & Curry with Fish       Rs.450.00\n");
	printf("\t\t\t\t\t\t        3.Rice & Curry with Chiken     Rs.450.00\n");
	printf("\t\t\t\t\t\t        4.Egg Kottu                    Rs.400.00\n");
	printf("\t\t\t\t\t\t        5.Rice & Curry with Prawns     Rs.600.00\n");
	printf("\t\t\t\t\t\t        6.Rice & Curry with Calamari   Rs.600.00\n");
	printf("\t\t\t\t\t\t        7.Vegetable Kotttu             Rs.350.00\n");
	printf("\t\t\t\t\t\t        8.Pasta Bologhese              Rs.800.00\n");
	printf("\t\t\t\t\t\t        9.Chiken Kottu                 Rs.600.00\n");
	printf("\t\t\t\t\t\t        10.Pasta Cabonara              Rs.800.00\n\n");

	Totprice=Getfood(totprice,qrt);
	printf("\t\t\t\t\t\tToal price  your Foods:%.2f              \n",Totprice);
	printf("\n\t\t\t\t\t\tIf you want to Deseasert or not please enter Y/N: ");
	scanf("%s",&x);
	switch(x) {
		case 'Y':
		case 'y':
			printf("\t\t\t\t\t\t                       Deasert                   \n\n\n");
			printf("\t\t\t\t\t\t        11.Creme brulee                 Rs.475.00\n");
			printf("\t\t\t\t\t\t        12.Double chocolate Mouses      Rs.450.00\n");
			printf("\t\t\t\t\t\t        13.Gulab Jamun                  Rs.220.00\n");
			printf("\t\t\t\t\t\t        14.Banana Gondola               Rs.480.00\n");
			printf("\t\t\t\t\t\t        15.Wattalappan                  Rs.350.00\n");
			total=deasert(total,qrt);
			printf("\t\t\t\t\t\tTotal price your Desert:%.2f                \n",total);

			printf("\n\n\t\t\t\t\t\t\t\tYour total Bill is:%.2f",Totprice+ total);
			printf("\n\n\t\t\t\t\t\t\tWe will deliver your order soon.Thank You !\n\n");

			break;

		default:
			printf("\n\n\t\t\t\t\t\t\t\tYour total Bill is:%.2f",Totprice+ total);
			printf("\n\n\t\t\t\t\t\t\tWe will deliver your order soon.Thank You !\n\n");

	}

	printf("\n\n\t\t\t\t\t\t\tDo you want another food item Y/N: ");
	scanf("%s",&x);
	if( x=='y' || x=='Y') {
		main();
		Totprice=Getfood(totprice,qrt);
		deasert(total,qrt);
	} else {
		printf("\n\n\t\t\t\t\t\t\t\t\tThank You  !!!");
	}

	/*printf("\n\t\t\t\t\t\t\tDo you want to Exit please enter -1: ");
	scanf("%d",&m);
	if(e==-1) {
		exit(1);
	} else {
		main();
		Totprice=Getfood(totprice,qrt);
		deasert(total,qrt);
	}*/


	printf("\n\n\t\t\t\t\t\t\t01.Home\n\t\t\t\t\t\t\t02.back");
	printf("\n\n\t\t\t\t\t\t\tEnter choice : ");
	scanf("%d",&w);

	switch(w) {
		case(1):
			main_menu();
			break;
		case(2):
			food_menu();
			break;

	}

	return 0;

}

float Getfood(float totprice,int qrt) {
	int n;
	printf("\t\t\t\t\t\tEnter number of you choose Food Item: ");
	scanf("%d",&n);

	if(n<=10) {
		switch(n) {
			case 1:
				printf("\t\t\t\t\t\tInput the Quantity: ");
				scanf("%d",&qrt);
				printf("\t\t\t\t\t\tVegetable Rice & Curry\n");
				totprice=400.00*qrt;
				break;
			case 2:
				printf("\t\t\t\t\t\tInput the Quantity: ");
				scanf("%d",&qrt);
				printf("\t\t\t\t\t\tRice & Curry with Fish\n");
				totprice=450.00*qrt;
				break;
			case 3:
				printf("\t\t\t\t\t\tInput the Quantity: ");
				scanf("%d",&qrt);
				printf("\t\t\t\t\t\tRice & Curry with Chiken\n");
				totprice=450.00*qrt;
				break;
			case 4:
				printf("\t\t\t\t\t\tInput the Quantity: ");
				scanf("%d",&qrt);
				printf("\t\t\t\t\t\tEgg Kottu\n");
				totprice=400.00*qrt;
				break;
			case 5:
				printf("\t\t\t\t\t\tInput the Quantity: ");
				scanf("%d",&qrt);
				printf("\t\t\t\t\t\tRice & Curry with Prawns\n");
				totprice=600.00*qrt;
				break;
			case 6:
				printf("\t\t\t\t\t\tInput the Quantity: ");
				scanf("%d",&qrt);
				printf("\t\t\t\t\t\tRice & Curry with Calamari\n");
				totprice=600.00*qrt;
				break;
			case 7:
				printf("\t\t\t\t\t\tInput the Quantity: ");
				scanf("%d",&qrt);
				printf("\t\t\t\t\t\tVegetable Kotttu\n");
				totprice=350.00*qrt;
				break;
			case 8:
				printf("\t\t\t\t\t\tInput the Quantity: ");
				scanf("%d",&qrt);
				printf("\t\t\t\t\t\tPasta Bologhese\n");
				totprice=800.00*qrt;
				break;
			case 9:
				printf("\t\t\t\t\t\tInput the Quantity: ");
				scanf("%d",&qrt);
				printf("\t\t\t\t\t\tChiken Kottu\n");
				totprice=600.00*qrt;
				break;
			case 10:
				printf("\t\t\t\t\t\tInput the Quantity: ");
				scanf("%d",&qrt);
				printf("\t\t\t\t\t\tPasta Cabonara\n");
				totprice=800.00*qrt;
				break;

		}
	} else {
		printf("\t\t\t\t\t\tPlease enter number between 1 to 10\n\n ");
	}
	return totprice;
}

float deasert(float total,int qrt) {
	int n;
	printf("\n\t\t\t\t\t\tEnter number of you choose  Deasert: ");
	scanf("%d",&n);

	switch(n) {
		case 11:
			printf("\t\t\t\t\t\tInput the Quantity: ");
			scanf("%d",&qrt);
			printf("\t\t\t\t\t\tCreme brulee\n");
			total =475*qrt;
			break;
		case 12:
			printf("\t\t\t\t\t\tInput the Quantity: ");
			scanf("%d",&qrt);
			printf("\t\t\t\t\t\tDouble chocolate Mouses\n");
			total=450*qrt;
			break;
		case 13:
			printf("\t\t\t\t\t\tInput the Quantity: ");
			scanf("%d",&qrt);
			printf("\t\t\t\t\t\tGulab Jamun\n");
			total=220*qrt;
			break;
		case 14:
			printf("\t\t\t\t\t\tInput the Quantity: ");
			scanf("%d",&qrt);
			printf("\t\t\t\t\t\tBanana Gondola\n");
			total=480*qrt;
			break;
		case 15:
			printf("\t\t\t\t\t\tInput the Quantity: ");
			scanf("%d",&qrt);
			printf("\t\t\t\t\t\tWattalappan\n");
			total=350*qrt;
			break;
		default:
			printf("\t\t\t\t\t\tPlease enter number between 11 to 15\n");

	}
	return total;
}


//********************food menu function end********************


//********************payment function start********************


int payment() {

	int tot=0,p_m=0,nw_amnt=0,card,nic,card_no,card_no2,cvc;
	char ch='n';
	char name[30]=" ";
	int confirmpayment,pkg;
	char ch2='y';


	system("clear");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ******************************  |Payment|  ***************************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");

	printf("\n\t\t\t\t    <<<<<<<---------:::\t Select Your Payment Method\t:::--------->>>>>>>	\n\n\t\t\t\t\t\t\t1.CASH\n\t\t\t\t\t\t\t2.CARD\n\n\t\t\t\t\t\t Enter Your choice:  ");
	scanf("%d",&p_m);

	system("clear");
	printf("\n\t\t\t\t<<<<<<<-----------:::::::---------------------:::::::----------->>>>>>>\n\n");
	tot=100000;
	nw_amnt=tot-wedding_amount(tot);	//finding the DISCOUNT

	switch(p_m) {	//Selecting PAYMENT METHOD
		case 1:
			printf("\n\t\t\t\t\t\t>> Your Discount is: %d\n",wedding_amount(tot));
			printf("\n\t\t\t\t\t\t>> New Payable Amount is: %d\n",nw_amnt);
			printf("\n\t\t\t\t\t\t>> Have you paid the bill amount (y/n): ");
			scanf(" %c",&ch);
			if(ch=='y') {
				sleep(3);
				system("clear");
				printf("\n\n\t\t\t\t\t\t\t\t!!!Thank You!!!");
				printf("\n\t\t\t\t\t\t\t  ---Payment Successfull----\n");
				printf("\n\t\t\t\t\t\t\t\tHave A Nice Day\n");
			} else {
				while(ch=='n') {
					printf("\n\t\t\t\t\t\t\t\t\t>> Please pay the New Payable Amount <<\n");
					printf("\n\t\t\t\t\t\t\t\t\t>> Have you paid the bill amount (y/n): ");
					scanf(" %c",&ch);
				}
			}
			break;

		case 2:
			printf("\t\t\t\t\t\t\t>> Please Select Card Type:   \n\t\t\t\t\t\t\t\t1.Visa\n\t\t\t\t\t\t\t\t2.Credit\n\t\t\t\t\t\t\t\t3.Debit\n\t\t\t\t\t\t\t\t4.Master\n\t\t\t\t\t\t\t\t\t ->");
			scanf("%d",&card);

			printf("\t\t\t\t\t<<<<<<<-----------:::::::--------:::::::----------->>>>>>>\n\n");

			printf("\t\t\t\t\t\t>> 1. Enter Cardholder's Name: Mr. ");
			scanf("%s",name);
			printf("\t\t\t\t\t\t>> 2. Enter Your NIC No:   ");
			scanf("%d",&nic);
			printf("\t\t\t\t\t\t>> 3. Enter Card No:       ");
			scanf("%d",&card_no);
			printf("\t\t\t\t\t\t>> 4. Enter Card No Again: ");
			scanf("%d",&card_no2);

			while(card_no!=card_no2) {
				printf("\t\t\t\t\t\t---Card Numbers Are not Matching---\n");

				printf("\t\t\t\t\t\t\t\t>> 3. Enter Card No:       ");
				scanf("%d",&card_no);
				printf("\t\t\t\t\t\t\t\t>> 4. Enter Card No Again: ");
				scanf("%d",&card_no2);
			}

			printf("\t\t\t\t\t\t>> 5. Enter CVC No:        ");
			scanf("%d",&cvc);

			printf("\n\t\t\t\t\t\t\t>> Your Discount is: %d\n",wedding_amount(tot));
			printf("\t\t\t\t\t\t\t>> New Payable Amount is: %d\n",nw_amnt);

			printf("\n\n\t\t\t\t\t\t\t Enter 1 To Proceed Payment: ");
			scanf("%d",&confirmpayment);

			sleep(3);
			system("clear");
			printf("\n\t\t\t\t\t\t\tThank You Mr/Ms/Mrs. %s",name);
			printf("\n\n\t\t\t\t\t\t\t  ----Payment Successfull----\n\t\t\t\t\t\t\t\tHave A Nice Day\n\n\n");
			/*if(confirmpayment=='n'){

				while(confirmpayment=='n'){
					printf("\n\t\t>> Please Pay The New Payable Amount <<\n");
					printf("\n\t\t>> Have You Paid The Bill Amount (y/n): ");
					scanf(" %c",&confirmpayment);
				}*/

			printf("\t\t\t\t\t<<<<<<<-----------:::::::--------:::::::----------->>>>>>>\n\n");

			break;

		default:
			printf("\t\t\t\t\t\t\t!!!----Please select 1 or 2----!!!\n");
	}

	printf("\n\t\t\t\t\t\tDo you want to do a another payment (y/n): ");
	scanf(" %c",&ch2);
	printf("\n\n");

	if(ch2=='y' || ch2 == 'Y') {
		payment();
	} else if(ch2=='n' || ch2 == 'N') {
		main_menu();
	} else {
		printf("Invalid Input..!");
	}


	return 0;
}


int wedding_amount(int tot) {
	int w_d=0;

	if(tot <= 15000) {
		w_d=tot-350;
	} else if(tot >= 15000 && tot <= 25000) {
		w_d=(tot*.5)/100;
	} else if(tot >= 25000 && tot <= 35000) {
		w_d=(tot*.8)/100;
	} else if(tot >= 35000 && tot <= 50000) {
		w_d=(tot*1)/100;
	} else if(tot >= 50000) {
		w_d=(tot*1.3)/100;
	} else {
		w_d=0;
	}
	return w_d;
}


//********************payment function end********************


//********************salary function start********************


int count_salary() {

	char x,d;


	int s,g;

	char u;

	system("clear");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   *******************************  |Salary|  ****************************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");

	printf("\n\t\t\t\t\t\t\t------------------------------\n\n\t\t\t\t\t\t\t\ta -Chef\n\n\t\t\t\t\t\t\t\tb -Maneger\n\n\t\t\t\t\t\t\t\tc -Water\n\n\t\t\t\t\t\t\t\td -Room boy\n\n\t\t\t\t\t\t\t\te -Clener\n\n\t\t\t\t\t\t\t\tf -Rescption counter\n\n\t\t\t\t\t\t\t\t1 -Exit\n\n\t\t\t\t\t\t\t-------------------------------");



	while(1) {



		printf("\n\n\n\t\t\t\t\t\tEnter your id:");
		scanf(" %d",&s);
		if (s ==1) {
			main_menu();
		}

		else {
			printf("\n\t\t\t\t\t\tEnter your post:");
			scanf(" %c",&x);


			salary (x,s);
		}



	}
}

int salary(int x,int s) {

	int c,d,q,z,f;
	char h;

	int g;

	FILE *ptr;
	switch (x) {

			int g;


		case 'a':
			ptr=fopen("salary_hottel.txt","a+");
			printf("\n\t\t\t\t\t\t**Enter worked days:");
			scanf("%d",&q);
			z=5000*q;
			printf("\n\n\n\t\t\t\t\t\t**your salary:%d",z);
			printf("\n\t\t\t\t\t\t**Are you got a loan..?:(y/n)");
			scanf(" %c",&h);
			if(h =='Y'||h=='y') {
				printf("\n\t\t\t\t\t\t**Enter your loan balance:");
				scanf("%d",&f);
				z=z-f;
				printf("%d",z);

				fprintf(ptr,"%d\t%d\t%d\n",s,f,z);
				fclose(ptr);
			} else {
				printf("\n\n\t\t\t\t\t\t**your salary is:%d\n",z);
				fprintf(ptr,"%d\t\t\t%d\n",s,z);
				fclose(ptr);


			}

			break;

		case 'b':
			printf("\n\t\t\t\t\t\t**Enter worked days:");
			scanf("%d",&q);
			z=4000*q;
			printf("\n\n\t\t\t\t\t\t**your salary is:%d\n",z);
			printf("\n\t\t\t\t\t\t**Are you got a loan..?:(y/n)");
			scanf(" %c",&h);
			if(h =='Y'||h=='y') {
				printf("\n\t\t\t\t\t\t**Enter your loan balance:");
				scanf(" %d",&f);
				z=z-f;
				printf("\n\n\t\t\t\t\t\t**your salary is:%d\n",z);
				fprintf(ptr,"%d\t%d\t%d\n",s,f,z);
				fclose(ptr);
			} else {
				printf("\n\t\t\t\t\t\t**your salary is:%d",z);
				fprintf(ptr,"%d\t\t\t%d\n",s,z);
				fclose(ptr);

			}
			break;

		case 'c':

			printf("\n\t\t\t\t\t\t**Enter worked days:");
			scanf("%d",&q);
			z=3000*q;
			printf("\n\n\t\t\t\t\t\t**your salary is:%d\n",z);
			printf("\n\t\t\t\t\t\t**Are you got a loan..?:(y/n)");
			scanf(" %c",&h);
			if(h =='Y'||h=='y') {
				printf("\n\t\t\t\t\t\t**Enter your loan balance:");
				scanf(" %d",&f);
				z=z-f;
				printf("\n\n\t\t\t\t\t\t**your salary is:%d\n",z);
				fprintf(ptr,"%d\t\%d\t%d\n",s,f,z);
				fclose(ptr);
			} else {
				printf("\n\n\t\t\t\t\t\t**your salary is:%d\n",z);
				fprintf(ptr,"%d\t\t\t%d\n",s,z);
				fclose(ptr);

			}
			break;

		case 'd':

			printf("\n\t\t\t\t\t\t**Enter worked days:");
			scanf("%d",&q);
			z=2500*q;
			printf("\n\t\t\t\t\t\t**your salary is:%d",z);
			printf("\n\t\t\t\t\t\t**Are you got a loan..?:(y/n)");
			scanf(" %c",&h);
			if(h =='Y'||h=='y') {
				printf("\n\t\t\t\t\t\t**Enter your loan balance:");
				scanf(" %d",&f);
				z=z-f;
				printf("\n\t\t\t\t\t\t**your salary is:%d\n",z);
				fprintf(ptr,"%d\t%d\t%d\n",s,f,z);
				fclose(ptr);
			} else {
				printf("\n\n\t\t\t\t\t\t**your salary is:%d\n",z);
				fprintf(ptr,"%d\t\t\t%d\n",s,z);
				fclose(ptr);

			}
			break;

		case 'e':

			printf("\n\t\t\t\t\t\t**Enter worked days:");
			scanf("%d",&q);
			z=2000*q;
			printf("\n\t\t\t\t\t\t**your salary is:%d",z);
			printf("\n\t\t\t\t\t\t**Are you got a loan..?:(y/n)");
			scanf(" %c",&h);
			if(h =='Y'||h=='y') {
				printf("\n\t\t\t\t\t\t**Enter your loan balance:");
				scanf(" %d",&f);
				z=z-f;
				printf("\n\t\t\t\t\t\t**your salary is:%d\n",z);

				fprintf(ptr,"%d\t%d\t%d\n",s,f,z);
				fclose(ptr);
			} else {
				printf("\n\t\t\t\t\t\t**your salary is:%d\n",z);
				fprintf(ptr,"%d\t\t\t%d\n",s,z);
				fclose(ptr);

			}
			break;

		case 'f':

			printf("\n\t\t\t\t\t\t**Enter worked days:");
			scanf("%d",&q);
			z=1500*q;
			printf("**your salary:%d",z);
			printf("\n\t\t\t\t\t\t**Are you got a loan..?:(y/n)");
			scanf(" %c",&h);
			if(h =='Y'||h=='y') {
				printf("\n\t\t\t\t\t\t**Enter your loan balance:");
				scanf(" %d",&f);
				z=z-f;
				printf("\n\t\t\t\t\t\t**your salary is:%d\n",z);
				fprintf(ptr,"%d\t%d\t%d\n",s,f,z);
				fclose(ptr);
			} else {
				printf("\n\t\t\t\t\t\t**your salary is:%d\n",z);
				fprintf(ptr,"%d\t\t\t%d\n",s,z);
				fclose(ptr);

			}
			break;

		case 1:
			main_menu();
			break;

		default:
			main_menu();

	}





}

//********************salary function end********************

//********************feedback function start********************

int feedback() {

	char x[1000];
	char fb[1000];
	char a[50];
	FILE *fp;
	fp=fopen("feedback.txt","a+");

	system("clear");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   *******************************  |Feedback|  ****************************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");

	printf("\n\n\t\t\t\t\t\t\tEnter your name :");
	scanf("%s",x);

	printf("\n\t\t\t\t\t\t\tEnter your Feedback :");
	scanf("%s",fb);

	printf("\n\t\t\t\t\t\t\tEnter your email address :");
	scanf("%s",a);

	fprintf(fp,"%s\t\t\t%s\n",x,fb);
	printf("\n\n\n\t\t\t\t\t\t\t\t\tTHANKS\n\n\t\t\t\t\t\t\tYour Feedback is recorded!\n\n");

	sleep(5);

	main_menu();

}

//********************feedback function end********************