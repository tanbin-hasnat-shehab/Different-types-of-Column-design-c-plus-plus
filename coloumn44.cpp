#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

main()

{

float pg,P,Ag,fcc,fs,b,Ast,dia,as,N,space2,space1,space3,spacing;







printf("\n\n\t\tU have taken fixed size of coloumn section!!\n\tand the height is not given system!!\n\n\t\t");

printf("as far we know,\n\twe don need to calculate the reduction factor\tso\n\n\tenter the value of b\n\n\t\t");

scanf("%f",&b);


printf("\n\n\t\tenter the load on coloumn=?\n\n\t\t");

scanf("%f",&P);


Ag=b*b;


printf("\n\n\t\tvalue of coloumn section area is %f\n\n\t\t",Ag);



printf("\n\n\t\tsteel ratio calculation:\n\n\t\t");




printf("\n\n\t\tenter fcc=? & fs=?\n\n\t\t");

scanf("%f%f",&fcc,&fs);



pg=(P-.85*Ag*.25*fcc)/(.85*Ag*fs);

printf("\n\n\t\tthe value of steel ratio is=%f\n\n\t\t",pg);

if(pg>.01&&pg<.08)


{
    printf("\n\n\t\tas far pg>.01 & pg<.08 the value of pg is allowable");
}


else
{

    printf("\n\n\t\tpls increase the coloumn size");


}



printf("\n\n\t\tvertical main bar calculation:\n\n\t\t");

Ast=pg*Ag;

printf("\n\n\t\tvertical main bar area is %f\n\n\t\t",Ast);

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






scanf("%f",&fs);


return(0);



}















