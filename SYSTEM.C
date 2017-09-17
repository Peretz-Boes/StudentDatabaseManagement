#include<stdio.h>
#include<stdlib.h>
void login_window();
int main(){
getch();
}
void login_window(){
setcolor(3);
setfillstyle(1,WHITE);
rectangle(426,288,201,259);
rectangle(425,287,202,260);
floodfill(419,262,3);
setcolor(WHITE);
}