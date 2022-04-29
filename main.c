#include<stdio.h>
int main()
{
int  date,ch;
printf("ENTER DATE OF BIRTH AND THEN MONTH NO.");
scanf("%d %d",&date,&ch);
if (((date>=21)  && (ch==3)) || ((date<=20 ) && (ch==4 )))
printf("YOU ARE A ARIES AND YOUR BIRTHSTONE IS BLOODSTONE");
if (((date>=21)  && (ch==4)) || ((date<=21 ) && (ch==5 )))
printf("YOU ARE A TAURUS AND YOUR BIRTHSTONE IS SAPPHIRE");
if (((date>=22)  && (ch==5)) || ((date<=21 ) && (ch==6 )))
printf("YOU ARE A GEMINI AND YOUR BIRTHSTONE IS AGATE");
if (((date>=22)  && (ch==6)) || ((date<=22 ) && (ch==7 )))
printf("YOU ARE A CANCER AND YOUR BIRTHSTONE IS EMERALD");
if (((date>=23)  && (ch==7)) || ((date<=22 ) && (ch==8 )))
printf("YOU ARE A LEO AND YOUR BIRTHSTONE IS ONYX");
return 0;
}
