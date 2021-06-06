#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>



float pa,D,he,r,R,p,Ag,pg,fcc,fs,Ast,dia,N,ps,corearea,core,as,spacing;



main()

{

printf("\n\n\t\tenter safe load on coloumn:\n\n\t\t");

scanf("%f",&pa);

printf("\n\n\n\t\tenter the dia of coloumn:");

scanf("%f",&D);

printf("\n\n\t\tenter effective height he=?\n\n\t\t");

scanf("%f",&he);

r=.25*D;

printf("\n\n\t\tradious of giration r=%f",r);

R=1.07-.008*((he*100)/r);

printf("\n\n\t\treduction factor is %f",R);


p=pa/R;

printf("\n\n\t\tdesign load is %f",p);


Ag=(3.1416*D*D)/4;



printf("\n\n\t\tcoloumn cross section Ag is %f",Ag);

fcc=210;

fs=1400;


pg=(p-Ag*.25*fcc)/(Ag*fs);

if(pg>.08)

{
    printf("\n\n\t\tdue to the access reinforcement increase the coloumn size & try again\n\n\t\t");
}


else if(pg<.08)
{

printf("\n\n\t\tcoloumn steel ratio pg is %f",pg);

Ast=Ag*pg;


printf("\n\n\t\tarea of vertical reinforcement Ast=%f",Ast);

printf("\n\n\t\tenter dia of vertical main bar=??\n\n\t\t");




 scanf("%f",&dia);

N=Ast/((3.1416*dia*dia)/4);
printf("\n\n\t\tUse %f-%fmm dia vertical main bar\n\n\t\t");



printf("\n\n\t\tspiral coloumn reinforcement:");


core=D-8;


corearea=3.1416*core*core*.25;


ps=((Ag/corearea-1)*45*(fcc/fs));


printf("\n\n\t\tspiral reinforcement ratio ps=%f",ps);



printf("\n\n\t\tif covering is 4cm and so\n\n\t\tthe core dia is %f",core);

as=.5026;

spacing=(4*as)/(ps*core);

printf("\n\n\t\tspiral rod spacing or spiral pitch is %f\n\n\t\t",spacing);


scanf("%f",&ps);
return 0;

}




}















































































































































