#include<stdio.h>
#include <stdlib.h>
#include<math.h>





float FCC,b,pg,pa,he,r,R,Ag,p,fcc,fs,Ast,dia,N,space1,space2,space3,spacing,Pg,ag,B,ast,Dia,n,Space1,Space2,Space3,Spacing;

char re,y,no,ch,s;



main()





{



printf("\n\n\t\tyou have selected coloumn size which equals to wall size at the corner\n\n\t\t");


printf("\n\n\t\tenter the thickness of wall=?  inch\n\n\n\t\t\t");


scanf("%f",&b);

printf("\n\n\n\n\t\t\tenter the allowable load bearing capacity:\n\n\t\tpa=?\n\n\n\n\t\t\t\t");

scanf("%f",&pa);

printf("effective height of coloumn=?\n\n\n\n\t\t\t\t\t");

scanf("%f",&he);

r=.3*b;

R=(1.07-.008*(he*12/r));

printf("\n\n\n\n\n\t\tthe strength reduction factor is %f",R);

p=pa*1000/R;

printf("\n\n\n\n\n\t\tvalue of design load is %f",p);
Ag=b*b*2.54*2.54;
printf("\n\n\nenter the capacity of concrete=psi??");
scanf("%f",&FCC);
fcc=FCC*0.0703;

printf("\n\n\nenter the strength of steel=ksi??");
scanf("%f",&FS);

fs=(FS*1000*0.0703);

printf("you want to play two way slab??(y/n)\n\n\n\n\n");




   scanf("%c",&ch);

   if (ch == 'y' || ch == 'Y')
      system("D:\\c5\\myplaylist\\1.mp3");


printf("\n\n\n\n\n\t\tarea of coloumn section is %f",Ag);
pg=(p-.2125*Ag*fcc)/(.85*Ag*fs);
printf("\n\n\n\n\t\tSTEEL RATIO IS %f",pg);


Ast=pg*Ag;
printf("\n\n\n\n\t\tarea of vertical steel is %f cm square",Ast);
printf("\n\n\n\n\n\t\t\t\tenter Dia of vertical main bar:\n\n\t\t");
scanf("%f",&dia);
DIA=dia/10;
N=Ast/((DIA*DIA*3.1416)/4);
printf("\n\n\n\n\t\t\t\tUse %f-%fmmøvertical bar",N,dia);
printf("\n\n\n\n\t\t\t\ttie bar design:\n\n\t\t\tif we use 8mmø bar\n\n\t\t");
space1=16*dia;
space2=48*.8;
space3=b;
if(space1<space2&&space2<space3)

{
    spacing=space1;
}
else if(space2<space1&&space1<space3)
{
    spacing=space2;
    }
else
{
spacing=space3;
printf("\n\n\n\n\t\t\t\tspacing of tie bar is %f\n\n\n\t\t",spacing);

}







   scanf("%c",&ch);

   if (ch == 'y' || ch == 'Y')
      system("D:\\c5\\myplaylist\\baby.jpg");



printf("\n\nwant to play again?");

scanf("%c",&re);
if(re=y)
   {

       main();
   }
else
    {

       main();
   }

   return 0;

}
































































































































































































