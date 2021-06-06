#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

main()

{

float pg,P,Ag,fcc,fs,b,Ast,dia,as,N,space2,space1,space3,spacing;







printf("\n\n\t\tU have taken fixed Pg value\n\tand the height is not given system!!\n\n\t\t");

printf("as far we know,\n\twe don need to calculate the reduction factor\tso\n\n\tenter the value of Pg\n\n\t\t");

scanf("%f",&pg);

printf("\n\n\t\tenter value of safety load=?\n\n\t\t");

scanf("%f",&P);

printf("\n\n\t\tenter fcc=? & fs=?\n\n\t\t");

scanf("%f%f",&fcc,&fs);


Ag=P/(.85*(.25*fcc+fs*pg));

printf("\n\n\t\tthe coloumn section area is %f",Ag);

b=sqrt(Ag);

printf("\n\n\t\tcoloumn size is %f",b);

printf("\n\n\t\tcalculation of vertical reinforcement:");

Ast=Ag*pg;

printf("\n\n\t\tarea of vertical main bar is %f",Ast);

printf("\n\n\t\tenter the dia pf main bar U want to use\n\n\t\t");

scanf("%f",&dia);



as=(3.1416*dia*dia)/4;

N=Ast/as;

printf("\bcm\n\n\t\tUSE %f-%fcm DIA VERTICAL BAR",N,dia);








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

}
printf("\n\n\n\n\t\t\t\tspacing of tie bar is %f\n\n\t\t",spacing);


scanf("%f",&spacing);
return(0);
}






































































































