#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
union REGS i,o;
void login_window();
void password_input();
void draw_screen();
void initialize_mouse();
void show_mouse();
void get_mouse();
void add_window();
void add_student_record();
void display_data();
void delete_student_record();
void search_student_record();
void modify_student_record();
void list_records();
void backup_database();
void progress();
void exit_system();
struct ADDRESS{
char STREET[25];
char IM[25];
char CITY[15];
char COUNTRY[15];
char PIN[10];
};
struct STUDENT{
int ROLL_NO;
float MARKS;
char MOBILE_NUMBER[12];
char F_NAME[20];
char L_NAME[20];
char COURSE_NAME[10];
char GENDER[7];
char FEES[5];
int DAY;
int MONTH;
int YEAR;
struct ADDRESS A;
};

void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
login_window();
password_input();
start:
cleardevice();
draw_screen();
setcolor(3);
setfillstyle(1,8);
rectangle(390,55,200,88);
rectangle(390,50,195,94);
floodfill(393,52,3);
gotoxy(27,5);
printf("1.Add student record\n");
setcolor(3);
setfillstyle(1,8);
rectangle(390,55,200,88);
rectangle(390,50,195,94);
floodfill(393,52,3);
gotoxy(27,8);
printf("2.Search record\n");
setcolor(3);
setfillstyle(1,8);
rectangle(390,55,200,88);
rectangle(390,50,195,94);
floodfill(393,52,3);
gotoxy(27,11);
printf("3.Delete record\n");
setcolor(3);
setfillstyle(1,8);
rectangle(390,55,200,88);
rectangle(390,50,195,94);
floodfill(393,52,3);
gotoxy(27,14);
printf("4.Modify record\n");
setcolor(3);
setfillstyle(1,8);
rectangle(390,55,200,88);
rectangle(390,50,195,94);
floodfill(393,52,3);
gotoxy(27,17);
printf("5.List records\n");
setcolor(3);
setfillstyle(1,8);
rectangle(390,55,200,88);
rectangle(390,50,195,94);
floodfill(393,52,3);
gotoxy(27,20);
printf("6.Backup database\n");
setcolor(3);
setfillstyle(1,8);
rectangle(390,55,200,88);
rectangle(390,50,195,94);
floodfill(393,52,3);
gotoxy(27,23);
printf("7.Exit program\n");
show_mouse();
while(!kbhit()){
draw_screen();
show_mouse();
get_mouse();
if(o.x.bx==1&&o.x.cx<395&&o.x.cx>195&&o.x.dx<94&&o.x.dx>50){
add_student_record();
delay(500);
goto start;
}
if(o.x.bx==1&&o.x.cx<395&&o.x.cx>195&&o.x.dx<94&&o.x.dx>50){
search_student_record();
delay(500);
goto start;
}
if(o.x.bx==1&&o.x.cx<395&&o.x.cx>195&&o.x.dx<94&&o.x.dx>50){
delete_student_record();
delay(500);
goto start;
}
if(o.x.bx==1&&o.x.cx<395&&o.x.cx>195&&o.x.dx<94&&o.x.dx>50){
modify_student_record();
delay(500);
goto start;
}
if(o.x.bx==1&&o.x.cx<395&&o.x.cx>195&&o.x.dx<94&&o.x.dx>50){
list_records();
delay(500);
goto start;
}
if(o.x.bx==1&&o.x.cx<395&&o.x.cx>195&&o.x.dx<94&&o.x.dx>50){
backup_database();
delay(500);
goto start;
}
if(o.x.bx==1&&o.x.cx<395&&o.x.cx>195&&o.x.dx<94&&o.x.dx>50){
exit_system();
delay(500);
goto start;
}
}
getch();
}
void login_window(){
setcolor(3);
setfillstyle(1,WHITE);
rectangle(426,288,201,259);
rectangle(425,287,202,260);
floodfill(419,262,3);
setcolor(WHITE);
setfillstyle(10,4);
rectangle(402,142,224,222);
rectangle(403,141,223,223);
rectangle(404,140,222,224);
floodfill(400,218,WHITE);
setcolor(WHITE);
setfillstyle(1,2);
ellipse(270,190,0,360,100,18);
ellipse(270,190,0,360,11,19);
floodfill(271,191,WHITE);
setfillstyle(1,2);
ellipse(300,195,0,360,10,18);
ellipse(300,195,0,360,9,17);
floodfill(301,196,WHITE);
setfillstyle(1,2);
ellipse(320,199,0,360,8,12);
ellipse(320,199,0,360,7,11);
floodfill(321,200,WHITE);
setfillstyle(1,2);
ellipse(340,190,0,360,11,25);
ellipse(340,190,0,360,10,24);
floodfill(341,191,WHITE);
setcolor(WHITE);
setfillstyle(1,2);
circle(270,152,9);
circle(270,152,8);
floodfill(271,153,WHITE);
setcolor(WHITE);
setfillstyle(1,2);
circle(300,160,9);
circle(300,160,8);
floodfill(301,161,WHITE);
setcolor(WHITE);
setfillstyle(1,2);
circle(320,180,4);
circle(320,180,3);
floodfill(321,181,WHITE);
setcolor(WHITE);
setfillstyle(1,2);
circle(340,152,9);
circle(340,152,8);
floodfill(341,153,WHITE);
gotoxy(23,16);
printf("Student database management system");
setcolor(WHITE);
setfillstyle(1,4);
circle(442,272,12);
circle(442,272,11);
circle(442,272,10);
floodfill(442,272,WHITE);
outtextxy(435,269,"->");
setcolor(WHITE);
circle(442,272,9);
setbkcolor(0);
gotoxy(15,15);
setcolor(WHITE);
settextstyle(1,0,1);
outtextxy(512,98,"x");
setcolor(WHITE);
rectangle(510,120,130,300);
setcolor(WHITE);
setfillstyle(1,3);
rectangle(531,100,112,321);
floodfill(530,111,WHITE);
setcolor(8);
setfillstyle(7,8);
rectangle(532,99,111,322);
rectangle(533,98,110,323);
rectangle(534,97,109,324);
rectangle(535,96,108,325);
rectangle(536,95,107,326);
rectangle(537,94,106,327);
rectangle(538,93,105,328);
rectangle(539,92,104,329);
rectangle(540,91,103,328);
floodfill(0,0,8);
}
void password_input(){
int X=206;
int Y=262;
char password[10];
char pass[12]="prashant";
int i;
char ch;
for(i=0;i<12;i++){
ch=getch();
password[i]=ch;
if(ch==13){
password[i]='\0';
delay(50);
for(i=0;i<10;i++){
sound(99*i);
setcolor(WHITE);
setfillstyle(1,12);
circle(442,272,12);
circle(442,272,11);
circle(442,272,10);
floodfill(442,272,WHITE);
nosound();
}
delay(1000);
if(strcmp(pass,password)==0){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
draw_screen();
delay(1900);
setcolor(15);
setfillstyle(1,3);
rectangle(460,249,140,180);
rectangle(450,240,148,189);
floodfill(451,241,15);
for(i=0;i<10;i++){
sound(999);
setcolor(0);
outtextxy(220,210,"Access granted");
delay(50);
setcolor(15);
outtextxy(220,210,"Access granted");
nosound();
}
delay(1500);
break;
}else{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
draw_screen();
delay(1400);
setcolor(15);
setfillstyle(1,3);
rectangle(460,249,140,180);
rectangle(450,240,148,189);
floodfill(451,241,15);
for(i=0;i<10;i++){
sound(999);
setcolor(0);
outtextxy(220,210,"Access denied");
delay(99);
setcolor(15);
outtextxy(220,210,"Access denied");
nosound();
}
delay(2000);
exit(1);
}
if(ch==8){
i--;
i--;
X=X-15;
fflush(stdin);
if(X<206){
X=206;
}
setcolor(15);
settextstyle(2,0,7);
outtextxy(X,Y,"*");
X=X-15;
nosound();
}
if(ch==27){
exit();
}
if(i>10){
sound(9999);
}
sound(800);
setcolor(0);
settextstyle(2,0,7);
outtextxy(X,Y,"*");
X=X+15;
delay(100);
nosound();
}
}
}
void draw_screen(){
setcolor(15);
line(0,30,640,31);
line(0,31,640,32);
line(0,32,640,33);
line(0,33,640,34);
line(0,34,640,35);
setfillstyle(1,3);
floodfill(0,0,15);
setcolor(15);
line(0,450,640,450);
line(0,451,640,451);
line(0,452,640,452);
line(0,453,640,453);
line(0,453,640,454);
setfillstyle(1,3);
floodfill(0,460,15);
}
void initialize_mouse(){
i.x.ax=0;
int86(0x33,&i,&o);
}
void show_mouse(){
i.x.ax=1;
int86(0x33,&i,&o);
}
void get_mouse(){
i.x.ax=3;
int86(0x33,&i,&o);
}
void add_student_record(){
char INPUT;
struct STUDENT S;
int gd=DETECT,gm;
FILE *fp;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
cleardevice();
draw_screen();
add_window();
fp=fopen("Database.dat","a");
if(fp==NULL){
clrscr();
printf("File opening error\n");
delay(1000);
exit(1);
}
fseek(fp,0,SEEK_END);
fflush(stdin);
INPUT='Y';
while(INPUT=='Y'||INPUT=='y'){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
cleardevice();
draw_screen();
add_window();
fflush(stdin);
gotoxy(10,8);
printf("Enter roll number of student:");
scanf(" %d",&S.ROLL_NO);
gotoxy(10,9);
printf("Enter first name");
scanf(" %s",&S.F_NAME);
gotoxy(10,10);
printf("Enter last name");
scanf(" %s",&S.L_NAME);
gotoxy(10,11);
printf("Enter gender male or female");
scanf(" %s",&S.GENDER);
gotoxy(10,12);
printf("Enter course name");
scanf(" %s",&S.COURSE_NAME);
gotoxy(10,13);
printf("Enter admission date in dd/mm/yy format");
gotoxy(49,13);
scanf(" %d",&S.DAY);
gotoxy(51,13);
printf("/");
gotoxy(53,13);
scanf(" %d",&S.MONTH);
gotoxy(55,13);
printf("/");
gotoxy(56,13);
scanf(" %d",&S.YEAR);
gotoxy(10,14);
printf("Enter fees status(Paid or due)");
scanf(" %s",&S.FEES);
gotoxy(10,15);
printf("Marks of student");
scanf(" %f",&S.MARKS);
gotoxy(10,16);
printf("Enter mobile number");
scanf(" %s",&S.MOBILE_NUMBER);
printf("Enter address(Street)");
scanf(" %s",S.A.STREET);
gotoxu(10,18);
printf("Enter landmark");
scanf(" %s",S.A.IM);
gotoxy(10,19);
printf("Enter city");
scanf(" %s",S.A.CITY);
gotoxy(10,20);
printf("Enter pin");
scanf(" %s",S.A.PIN);
gotoxy(10,21);
printf("Enter country");
scanf(" %s",S.A.COUNTRY);
fwrite(&S,sizeof(S),1,fp);
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
cleardevice();
draw_screen();
gotoxy(20,14);
setcolor(3);
setfillstyle(1,8);
rectangle(460,249,140,180);
rectangle(450,240,148,189);
floodfill(451,241,3);
printf("Do you want to add another record(Yes/No)");
fflush(stdin);
INPUT=getch();
}
fclose(fp);
}
void display_data(){
setcolor(3);
settextstyle(12,0,1);
outtextxy(145,50,"|||***** _DETAILS OF STUDENT_ *****|||");
setcolor(3);
setfillstyle(1,8);
rectangle(570,400,60,100);
rectangle(571,401,59,99);
setcolor(3);
rectangle(590,420,40,80);
rectangle(591,421,39,79);
floodfill(579,418,3);
}
void search_student_record(){
struct STUDENT S;
int gd=DETECT,gm,RNO;
FILE *fp;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
cleardevice();
draw_screen();
setcolor(3);
setfillstyle(1,8);
rectangle(460,249,140,180);
rectangle(450,240,148,189);
floodfill(451,241,3);
gotoxy(20,14);
printf("Enter roll number");
scanf(" %d",&S.ROLL_NO);
fp=fopen("C:\Database.dat","rb+");
if(fp==NULL){
cleardevice();
gotoxy(25,10);
printf("File opening error");
delay(1500);
}
while(fread(&S,sizeof(S),1,fp)==1){
if(strcmp(&S.ROLL_NO,&RNO)==0){
cleardevice();
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
draw_screen();
display_data();
gotoxy(10,8);
printf("Name %s",S.L_NAME);
delay(5000);
break;
}
}
}
void delete_student_record(){
int RNO;
FILE *fp,*fp1;
struct STUDENT S;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
cleardevice();
draw_screen();
setcolor(3);
setfillstyle(1,8);
rectangle(460,249,140,180);
rectangle(450,240,148,189);
floodfill(451,242,3);
gotoxy(20,14);
printf("Enter roll number");
scanf("%s",&RNO);
fp=fopen("C:\\Database.dat","rb+");
fp=fopen("C:\\Temp.dat","wb+");
rewind(fp);
while(fread(&S,sizeof(S),1,fp)==1){
if(strcmp(&S.ROLL_NO,&RNO)!=0){
fwrite(&S,sizeof(S),1,fp1);
}
}
fclose(fp);
fclose(fp1);
remove("C:\\Database.dat");
rename("C:\\Temp.dat","C:\\Database.dat");
}
void modify_student_record(){
struct STUDENT S;
FILE *fp;
long int size=sizeof(S);
char NAME[15];
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
cleardevice();
draw_screen();
setcolor(3);
setfillstyle(1,8);
rectangle(570,400,60,100);
rectangle(571,401,59,99);
floodfill(451,241,3);
gotoxy(20,14);
printf("Enter first name");
scanf(" %s",NAME);
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
cleardevice();
draw_screen();
add_window();
fp=fopen("C:\\database.dat","rb+");
rewind(fp);
while(fread(&S,sizeof(S),1,fp)==1){
if(strcmp(S.F_NAME,NAME)==0){
gotoxy(10,8);
printf("Roll number");
scanf(" %d",&S.ROLL_NO);
gotoxy(10,9);
printf("First name");
scanf(" %s",S.F_NAME);
gotoxy(10,10);
printf("Last name");
scanf(" %s",S.L_NAME);
gotoxy(10,11);
printf("Gender male or female");
scanf(" %s",S.GENDER);
gotoxy(10,12);
printf("Course name");
scanf(" %s",S.COURSE_NAME);
gotoxy(49,13);
printf("Admission date dd/mm/yy format");
gotoxy(49,13);
scanf(" %d",&S.DAY);
gotoxy(51,13);
printf("/");
gotoxy(53,13);
scanf(" %d",&S.MONTH);
gotoxy(55,13);
printf("/");
scanf(" %d",&S.YEAR);
gotoxy(10,14);
printf("Fees status paid or due");
scanf(" %d",S.FEES);
gotoxy(10,15);
printf("Marks of student");
scanf("%f",&S.MARKS);
gotoxy(10,16);
printf("Mobile number");
scanf("%s",S.MOBILE_NUMBER);
gotoxy(10,17);
printf("Address[Street]");
scanf("%s",S.A.STREET);
gotoxy(10,18);
printf("Landmark");
scanf("%s",S.A.IM);
gotoxy(10,19);
printf("City");
scanf("%s",S.A.CITY);
gotoxy(10,20);
printf("Pin");
scanf("%s",S.A.PIN);
gotoxy(10,21);
printf("Country");
scanf("%s",S.A.COUNTRY);
fseek(fp,-size,SEEK_CUR);
fwrite(&S,size,1,fp);
fclose(fp);
}
}
}
void list_records(){
struct STUDENT S;
FILE *fp;
int Y=6;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
cleardevice();
draw_screen();
setcolor(3);
rectangle(610,448,21,40);
rectangle(611,449,20,39);
line(20,65,610,65);
line(21,66,611,66);
line(50,40,50,449);
gotoxy(4,4);
printf("No.");
gotoxy(8,4);
printf("Name of student");
line(292,40,292,449);
gotoxy(38,4);
printf("Admission date");
line(380,40,380,449);
gotoxy(49,4);
printf("Course");
line(440,40,440,449);
gotoxy(57,4);
printf("Fees");
line(500,40,500,449);
gotoxy(65,4);
printf("Mobile no.");
fp=fopen("C:\\Database.dat","rb+");
rewind(fp);
while(fread(&S,sizeof(S),1,fp)==1)
{
gotoxy(4,Y);
printf("%d",S.ROLL_NO);
gotoxy(8,Y);
printf("%s",S.F_NAME);
gotoxy(19,Y);
printf("%s",S.L_NAME);
gotoxy(38,Y);
printf("%d/%d/%d",S.DAY,S.MONTH,S.YEAR);
gotoxy(50,Y);
printf("%s",S.COURSE_NAME);
gotoxy(58,Y);
printf("%s",S.FEES);
gotoxy(66,Y);
printf("%s",S.MOBILE_NUMBER);
Y++;
}

delay(10000);
fclose(fp);
}
void backup_database(){
struct STUDENT S;
FILE *fp,*backup;
fp=fopen("C:\\Database.dat","rb+");
if(fp==NULL)
{
cleardevice();
draw_screen();
gotoxy(25,10);
printf("File opening error");
delay(2000);
exit(1);
}
backup=fopen("E:\\Backup.dat","wb+");
if(backup==NULL)
{
cleardevice();
draw_screen();
gotoxy(25,10);
printf("File opening error");
delay(2500);
exit(1);
}
progress();
rewind(fp);
while(fread(&S,sizeof(S),1,fp)==1)
fwrite(&S,sizeof(S),1,backup);
fclose(backup);
fclose(fp);
}

void progress()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
for( i=130;i<=495;i++)
{
draw_screen();
setfillstyle(1,3);
bar(i,255,150,265);
sound(2*i);
delay(9);
}
nosound();
setcolor(15);
gotoxy(12,12);
outtextxy(200,240,"Data backup successful");
delay(5000);
}
void exit_system(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
cleardevice();
draw_screen();
gotoxy(12,10);
printf("Exiting the system please wait");
delay(1000);
exit(0);
}
