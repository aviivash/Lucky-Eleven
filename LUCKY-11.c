#include<stdio.h>
#include <Windows.h>
#include<time.h>
int m,n,v,j=0,i=0,key,run=0,wkt=0,RUN=0;

battingOrder()
{
DIce();
key = v;
switch(key)
{
 case 1:
     printf("\n\t\t\t\t\t\tRED TEAM WON THE TOSS AND ELECTED TO BAT FIRST");
printf("\n\n\n\n\t\t\t\t\t\t  PLAYER\t\t BATTING ORDER");

printf("\n\t\t\t\t\t\t______________________________________\n");

printf("\n\t\t\t\t\t\t  BATSMAN1\t\tAT STRIKE");
printf("\n\t\t\t\t\t\t  BATSMAN2\t\tAT NON STRIKE");
printf("\n\t\t\t\t\t\t  BATSMAN4\t\tAT 3");
printf("\n\t\t\t\t\t\t  BATSMAN3\t\tAT 4");
printf("\n\t\t\t\t\t\t  WICKETKEEPER\t\tAT 5");
printf("\n\t\t\t\t\t\t  ALLROUNDER1\t\tAT 6");
printf("\n\t\t\t\t\t\t  ALLROUNDER2\t\tAT 7");
printf("\n\t\t\t\t\t\t  ALLROUNDER3\t\tAT 8");
printf("\n\t\t\t\t\t\t  BOWLER3\t\tAT 9");
printf("\n\t\t\t\t\t\t  BOWLER2\t\tAT 10");
printf("\n\t\t\t\t\t\t  BOWLER1\t\tAT 11");

printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");
   break;

 case 2:
     printf("\n\t\t\t\t\t\tGREEN TEAM WON THE TOSS AND ELECTED TO BAT FIRST");
     printf("\n\n\n\n\t\t\t\t\t\t  PLAYER\t\t BATTING ORDER");

printf("\n\t\t\t\t\t\t______________________________________\n");

printf("\n\t\t\t\t\t\t  BATSMAN1\t\tAT STRIKE");
printf("\n\t\t\t\t\t\t  BATSMAN4\t\tAT NON STRIKE");
printf("\n\t\t\t\t\t\t  BATSMAN2\t\tAT 3");
printf("\n\t\t\t\t\t\t  BATSMAN3\t\tAT 4");
printf("\n\t\t\t\t\t\t  WICKETKEEPER\t\tAT 5");
printf("\n\t\t\t\t\t\t  ALLROUNDER1\t\tAT 6");
printf("\n\t\t\t\t\t\t  ALLROUNDER3\t\tAT 7");
printf("\n\t\t\t\t\t\t  ALLROUNDER2\t\tAT 8");
printf("\n\t\t\t\t\t\t  BOWLER3\t\tAT 9");
printf("\n\t\t\t\t\t\t  BOWLER1\t\tAT 10");
printf("\n\t\t\t\t\t\t  BOWLER2\t\tAT 11");

printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");

    break;

 case 3:

    printf("\n\t\t\t\t\t\tRED TEAM WON THE TOSS AND ELECTED TO FIELD FIRST");
     printf("\n\n\n\n\t\t\t\t\t\t  PLAYER\t\t BATTING ORDER");

printf("\n\t\t\t\t\t\t______________________________________\n");

printf("\n\t\t\t\t\t\t  BATSMAN4\t\tAT STRIKE");
printf("\n\t\t\t\t\t\t  BATSMAN2\t\tAT NON STRIKE");
printf("\n\t\t\t\t\t\t  BATSMAN1\t\tAT 3");
printf("\n\t\t\t\t\t\t  BATSMAN3\t\tAT 4");
printf("\n\t\t\t\t\t\t  WICKETKEEPER\t\tAT 5");
printf("\n\t\t\t\t\t\t  ALLROUNDER2\t\tAT 6");
printf("\n\t\t\t\t\t\t  ALLROUNDER1\t\tAT 7");
printf("\n\t\t\t\t\t\t  ALLROUNDER3\t\tAT 8");
printf("\n\t\t\t\t\t\t  BOWLER2\t\tAT 9");
printf("\n\t\t\t\t\t\t  BOWLER3\t\tAT 10");
printf("\n\t\t\t\t\t\t  BOWLER1\t\tAT 11");

printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");

    break;
    case 4:
        printf("\n\t\t\t\t\t\tGREEN TEAM WON THE TOSS AND ELECTED TO FIELD FIRST");
     printf("\n\n\n\n\t\t\t\t\t\t  PLAYER\t\t BATTING ORDER");

printf("\n\t\t\t\t\t\t______________________________________\n");

printf("\n\t\t\t\t\t\t  BATSMAN4\t\tAT STRIKE");
printf("\n\t\t\t\t\t\t  BATSMAN1\t\tAT NON STRIKE");
printf("\n\t\t\t\t\t\t  BATSMAN2\t\tAT 3");
printf("\n\t\t\t\t\t\t  BATSMAN3\t\tAT 4");
printf("\n\t\t\t\t\t\t  WICKETKEEPER\t\tAT 5");
printf("\n\t\t\t\t\t\t  ALLROUNDER2\t\tAT 6");
printf("\n\t\t\t\t\t\t  ALLROUNDER3\t\tAT 7");
printf("\n\t\t\t\t\t\t  ALLROUNDER1\t\tAT 8");
printf("\n\t\t\t\t\t\t  BOWLER2\t\tAT 9");
printf("\n\t\t\t\t\t\t  BOWLER1\t\tAT 10");
printf("\n\t\t\t\t\t\t  BOWLER3\t\tAT 11");

printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");

    break;
    case 5:
        printf("\n\t\t\t\t\t\tGREEN TEAM WON THE TOSS AND ELECTED TO BAT FIRST");
     printf("\n\n\n\n\t\t\t\t\t\t  PLAYER\t\t BATTING ORDER");

printf("\n\t\t\t\t\t\t______________________________________\n");

printf("\n\t\t\t\t\t\t  BATSMAN2\t\tAT STRIKE");
printf("\n\t\t\t\t\t\t  BATSMAN4\t\tAT NON STRIKE");
printf("\n\t\t\t\t\t\t  BATSMAN1\t\tAT 3");
printf("\n\t\t\t\t\t\t  BATSMAN3\t\tAT 4");
printf("\n\t\t\t\t\t\t  WICKETKEEPER\t\tAT 5");
printf("\n\t\t\t\t\t\t  ALLROUNDER3\t\tAT 6");
printf("\n\t\t\t\t\t\t  ALLROUNDER1\t\tAT 7");
printf("\n\t\t\t\t\t\t  ALLROUNDER2\t\tAT 8");
printf("\n\t\t\t\t\t\t  BOWLER1\t\tAT 9");
printf("\n\t\t\t\t\t\t  BOWLER3\t\tAT 10");
printf("\n\t\t\t\t\t\t  BOWLER2\t\tAT 11");

printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");

    break;
case 6:
        printf("\n\t\t\t\t\t\tRED TEAM WON THE TOSS AND ELECTED TO BAT FIRST");
     printf("\n\n\n\n\t\t\t\t\t\t  PLAYER\t\t BATTING ORDER");

printf("\n\t\t\t\t\t\t______________________________________\n");

printf("\n\t\t\t\t\t\t  BATSMAN2\t\tAT STRIKE");
printf("\n\t\t\t\t\t\t  BATSMAN1\t\tAT NON STRIKE");
printf("\n\t\t\t\t\t\t  BATSMAN4\t\tAT 3");
printf("\n\t\t\t\t\t\t  BATSMAN3\t\tAT 4");
printf("\n\t\t\t\t\t\t  WICKETKEEPER\t\tAT 5");
printf("\n\t\t\t\t\t\t  ALLROUNDER3\t\tAT 6");
printf("\n\t\t\t\t\t\t  ALLROUNDER2\t\tAT 7");
printf("\n\t\t\t\t\t\t  ALLROUNDER1\t\tAT 8");
printf("\n\t\t\t\t\t\t  BOWLER1\t\tAT 9");
printf("\n\t\t\t\t\t\t  BOWLER2\t\tAT 10");
printf("\n\t\t\t\t\t\t  BOWLER3\t\tAT 11");

printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");

    break;
 default :
    printf("invalid");
}

}

BtOrder()
{
switch(key)
{
    case 1:
    printf("\n\tBATTING ORDER : BATSMAN1 BATSMAN2 BATSMAN4 BATSMAN3 , WICKETKEEPER , ALLROUNDER1 ALLROUNDER2 ALLROUNDER3 , BOWLER3 BOWLER2 BOWLER1");

    break;
    case 2:
    printf("\n\tBATTING ORDER : BATSMAN1 BATSMAN4 BATSMAN2 BATSMAN3 , WICKETKEEPER , ALLROUNDER1 ALLROUNDER3 ALLROUNDER2 , BOWLER3 BOWLER1 BOWLER2");

    break;
    case 3:
    printf("\n\tBATTING ORDER : BATSMAN4 BATSMAN2 BATSMAN1 BATSMAN3 , WICKETKEEPER , ALLROUNDER2 ALLROUNDER1 ALLROUNDER3 , BOWLER2 BOWLER3 BOWLER1");

    break;
    case 4:
    printf("\n\tBATTING ORDER : BATSMAN4 BATSMAN1 BATSMAN2 BATSMAN3 , WICKETKEEPER , ALLROUNDER2 ALLROUNDER3 ALLROUNDER1 , BOWLER2 BOWLER1 BOWLER3");

    break;
    case 5:
    printf("\n\tBATTING ORDER : BATSMAN2 BATSMAN4 BATSMAN1 BATSMAN3 , WICKETKEEPER , ALLROUNDER3 ALLROUNDER1 ALLROUNDER2 , BOWLER1 BOWLER3 BOWLER2");

    break;
    case 6:
    printf("\n\tBATTING ORDER : BATSMAN2 BATSMAN1 BATSMAN4 BATSMAN3 , WICKETKEEPER , ALLROUNDER3 ALLROUNDER2 ALLROUNDER1 , BOWLER1 BOWLER2 BOWLER3");

    break;
}
}

jercy()
{
system("cls");
printf("\n__________________________________________________________ L U C K Y  - 11 ___________________________________________________________________________________________\n");

  printf("\n       ___________________________________________________  JERCY NUMBER  _______________________________________________________\n");

printf("\n\n\n\n\t\t\t\t\t\t  PLAYER\t\t   JERCY NUMBER");

printf("\n\t\t\t\t\t\t______________________________________");

printf("\n\n\t\t\t\t\t\tRED WICKETKEEPER\t\t100");
printf("\n\t\t\t\t\t\tRED BATSMAN1\t\t\t111");
printf("\n\t\t\t\t\t\tRED BATSMAN2\t\t\t112");
printf("\n\t\t\t\t\t\tRED BATSMAN3\t\t\t113");
printf("\n\t\t\t\t\t\tRED BATSMAN4\t\t\t114");
printf("\n\t\t\t\t\t\tRED ALLROUNDER1\t\t\t121");
printf("\n\t\t\t\t\t\tRED ALLROUNDER2\t\t\t122");
printf("\n\t\t\t\t\t\tRED ALLROUNDER3\t\t\t123");
printf("\n\t\t\t\t\t\tRED BOWLER1\t\t\t131");
printf("\n\t\t\t\t\t\tRED BOWLER2\t\t\t132");
printf("\n\t\t\t\t\t\tRED BOWLER3\t\t\t133");

printf("\n\n\t\t\t\t\t\tGREEN WICKETKEEPER\t\t200");
printf("\n\t\t\t\t\t\tGREEN BATSMAN1\t\t\t211");
printf("\n\t\t\t\t\t\tGREEN BATSMAN2\t\t\t212");
printf("\n\t\t\t\t\t\tGREEN BATSMAN3\t\t\t213");
printf("\n\t\t\t\t\t\tGREEN BATSMAN4\t\t\t214");
printf("\n\t\t\t\t\t\tGREEN ALLROUNDER1\t\t221");
printf("\n\t\t\t\t\t\tGREEN ALLROUNDER2\t\t222");
printf("\n\t\t\t\t\t\tGREEN ALLROUNDER3\t\t223");
printf("\n\t\t\t\t\t\tGREEN BOWLER1\t\t\t231");
printf("\n\t\t\t\t\t\tGREEN BOWLER2\t\t\t232");
printf("\n\t\t\t\t\t\tGREEN BOWLER3\t\t\t233");
printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");

}
//_____________________________________________________________________________________________________________________________//

	pointsystem()

	{
system("cls");
printf("\n__________________________________________________________ L U C K Y  - 11 ___________________________________________________________________________________________\n");

printf("\n\n\n\t\t\t\t\t_______________POINT SYSTEM__________________\n\n\t\t\t\t\t\tSINGLE = 2\n\n\t\t\t\t\t\tDOUBLE =4\n\n\t\t\t\t\t\tFOUR = 8\n\n\t\t\t\t\t\tSIX = 10\n\n\t\t\t\t\t\tCAUGHT = 10\n\n\t\t\t\t\t\tBOWLED = 30\n\n\t\t\t\t\t\tRUNOUT = 10\n\n\t\t\t\t\t\tSTUMPING = 10\n\n\t\t\t\t\t\tDUCK = -2       (dissmissed on zero)\n\n\t\t\t\t\t\tLBW = 30\n\n\n\t\t\t\t\t______________________________________________\n");
printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");
	}

//____________________________________________________________________________________________________________________________//

rule()
{
system("cls");
printf("\n__________________________________________________________ L U C K Y  - 11 ___________________________________________________________________________________________\n");

printf("\n\n\n\t\t\t\t\t_______________R U L E S__________________\n");
printf("\n\n\t\t\t\t\t(1) MATCH IS TO BE PLAYED IN BETWEEN THE RED TEAM & GREEN TEAM of SIX OVER FROM EACH SIDE");
printf("\n\n\t\t\t\t\t(2) BATTING ORDER WILL PROVIDED AFTER SELECTION OF TEAM");
printf("\n\n\t\t\t\t\t    [BOWLING ORDER FOLLOWED AS]");
printf("\n\n\t\t\t\t\t\t  BOWLER3 to First Over");
printf("\n\t\t\t\t\t\t  BOWLER2 to Second Over");
printf("\n\t\t\t\t\t\t  BOWLER1 to Third Over");
printf("\n\t\t\t\t\t\t  ALLROUNDER3 to Fourth  Over");
printf("\n\t\t\t\t\t\t  ALLROUNDER2 to Fifth  Over");
printf("\n\t\t\t\t\t\t  ALLROUNDER1 to Sixth  Over");

printf("\n\n\t\t\t\t\t(3)SELECT ANY ONE OUT OF THE FOUR PROVIDED TEAM .");

printf("\n\t_________________________________________________________________________________________________________________");

printf("\n\t\tTEAM-1\t\t\tTEAM-2\t\t\t\tTEAM-3\t\t\tTEAM-4\n");
printf("\n\tRed wicketkeeper(vc)\t  Green wicketkeeper (vc)\t  Green wicketkeeper   \t  Red wicketkeeper\n");
printf("\n\tRed Batsman-1   \t  Green Batsman-1       \t  Red Batsman-1  (vc)\t  Green Batsman-3 \n");
printf("\n\tGreen Batsman-1     \t  Red Batsman-3         \t  Green Batsman-1    \t  Red Batsman-4 \n");
printf("\n\tGreen Batsman-2     \t  Red Batsman-2         \t  Red Batsman-2      \t  Green Batsman-4 (vc)\n");
printf("\n\tRed Batsman-4       \t  Green Batsman-2       \t  Green Allrounder-3 \t  Red Batsman-1 \n");
printf("\n\tRed Allrounder-2 (c)   \t  Green Allrounder-3    \t  Red Allrounder-1(c)\t  Red Allrounder-3 \n");
printf("\n\tGreen Allrounder-1  \t  Green Allrounder-1       \t  Green Allrounder-1 \t  Green Allrounder-2(c) \n");
printf("\n\tGreen Allrounder-3  \t  Red Allrounder-3 (c)  \t  Green Bowler-1 \t  Green Allrounder-3 \n");
printf("\n\tRed Bowler-3        \t  Red Bowler-1          \t  Red Bowler-3       \t  Red Bowler-3 \n");
printf("\n\tGreen Bowler-3      \t  Green Bowler-1        \t  Green Bowler-3     \t  Green Bowler-2 \n");
printf("\n\tRed Bowler-2        \t  Red Bowler-2          \t  Red Bowler-2       \t  Red Bowler-1 \n");



printf("\n\t_________________________________________________________________________________________________________________");

printf("\n\n\t\t\t\t\t(4) CAPTAIN PROVIDE YOU THE [DOUBLE] Of that POINTS does he SCORE\n");
printf("\n\t\t\t\t\t(5) VICE-CAPTAIN PROVIDE YOU THE [multiple of ONE AND HALF] Of that POINTS does he SCORE");
printf("\n\n\n\t\t\t\t\t(6) _______________POINT SYSTEM__________________\n\n\t\t\t\t\t\tSINGLE = 2\n\n\t\t\t\t\t\tDOUBLE =4\n\n\t\t\t\t\t\tFOUR = 8\n\n\t\t\t\t\t\tSIX = 10\n\n\t\t\t\t\t\tCAUGHT = 10\n\n\t\t\t\t\t\tBOWLED = 30\n\n\t\t\t\t\t\tRUNOUT = 10\n\n\t\t\t\t\t\tSTUMPING = 10\n\n\t\t\t\t\t\tDUCK = -2       (dissmissed on zero)\n\n\t\t\t\t\t\tLBW = 30\n\n\n\t\t\t\t\t    ______________________________________________\n");

printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");

}


//____________________________________________________________________________________________________________________________//


runout_direct()

{

int p,o,z;

printf("\nTo know the player who runout the batsman \n\n");

DIce();
n=v;

if(n<=3)

{

printf("\nRUNOUT done by either WICKETKEEPER or BATSMAN\n\n\n\n");

Dice();
p=m;

if(p<=3)
{
printf("\nThat's OUT \t RUNOUT by  WICKETKEEPER");

    goto xn;
}

else

if(p>3)

printf("\nRUNOUT done by any one of the four  BATSMANS \n\n\t");

    DIce();
z=v;

  switch(z)

  {

case 1:

printf("That's OUT \tRUNOUT  by BATSMAN-1\n");

      	break;

	case 2:

printf("That's OUT \tRUNOUT  by BATSMAN-2\n");

     	break;

  	case 3:
    case 5:
printf("That's OUT \tRUNOUT  by BATSMAN-3\n");

  	break;

	case 4:
    case 6:
printf("That's OUT \tRUNOUT  by BATSMAN-4\n");

break;

	default:

	printf("\nThrow dice another time");

break;

   }
goto xn;
}

else

if(n>3)

printf("\nRUNOUT done by either ALLROUNDERS or BOWLERS\n\n\n");

Dice();
o=m;

if(o<=3)

{

printf("\nRUNOUT done by any one of the three  ALLROUNDER\n\n\t");

     DIce();
z=v;

    switch(z)

  {

case 1:
case 4:
printf("That's OUT \tRUNOUT  by ALLROUNDER-1\n");

 	break;

 	case 2:
    case 5:
printf("That's OUT \tRUNOUT  by ALLROUNDER-2\n");

break;

case 3:
case 6:

printf("That's OUT \tRUNOUT  by ALLROUNDER-3\n");

	break;

default:

 	printf("\nThrow dice another time");

	break;

}
goto xn;
}

else

printf("\nRUNOUT done by any one of the three  BOWLER\n\n\t");

DIce();
z=v;

   switch(z)

  {

case 1:
case 4:

	printf("That's OUT \tRUNOUT  by BOWLER-1\n");

  	break;

case 2:
case 5:

printf("That's OUT \tRUNOUT  by BOWLER-2\n");

    	break;

	case 3:
    case 6:

printf("That's OUT \tRUNOUT  by BOWLER-3\n");

  	break;

	default:

printf("\nThrow dice another time");

      	break;
       }

       goto xn;
       xn:
           printf("\n\n\t\tPOINTS = 10");
}

//____________________________________________________________________________________________________________________________//

caught()

{

int n,p,o,z;

printf("\nTo know the player who CAUGHT the BALL \n\n");

DIce();
n=v;

if(n<=3)

{

printf("\nCAUGHT by either WICKETKEEPER or BATSMAN\n\n\n\n");

Dice();
p=m;

if(p<=3)
{
printf("\nThat's OUT \t CAUGHT by  WICKETKEEPER");
goto xo;
}

else

if(p>3)

printf("\nCAUGHT by any one of the four  BATSMANS \n\n\t");

    DIce();
z=v;

  switch(z)

  {

case 1:

printf("That's OUT \tCAUGHT  by BATSMAN-1\n");

      	break;

	case 2:

printf("That's OUT \tCAUGHT  by BATSMAN-2\n");

     	break;

  	case 3:
    case 5:

printf("That's OUT \tCAUGHT  by BATSMAN-3\n");

  	break;

	case 4:
    case 6:

printf("That's OUT \tCAUGHT by BATSMAN-4\n");

break;

	default:

	printf("\nThrow dice another time");

break;

   }
goto xo;
}

else

if(n>3)

printf("\nCAUGHT by either ALLROUNDERS or BOWLERS\n\n\n");

Dice();
o=m;

if(o<=3)

{

printf("\nCAUGHT by any one of the three  ALLROUNDER\n\n\t");

     DIce();
z=v;

    switch(z)

  {

case 1:
case 4:

printf("That's OUT \tCAUGHT  by ALLROUNDER-1\n");

 	break;

 	case 2:
    case 5:
printf("That's OUT \tCAUGHT  by ALLROUNDER-2\n");

break;

case 3:
case 6:

printf("That's OUT \tCAUGHT  by ALLROUNDER-3\n");

	break;

default:

 	printf("\nThrow dice another time");

	break;

}
goto xo;
}

else

printf("\nCAUGHT  by any one of the three  BOWLER\n\n\t");

DIce();
z=v;

   switch(z)

  {

case 1:
case 4:

	printf("That's OUT \tCAUGHT  by BOWLER-1\n");

  	break;

case 2:
case 5:

printf("That's OUT \tCAUGHT  by BOWLER-2\n");

    	break;

	case 3:
    case 6:

printf("That's OUT \tCAUGHT  by BOWLER-3\n");

  	break;

	default:

printf("\nThrow dice another time");

      	break;
       }
goto xo;
       xo:
           printf("\n\n\t\tPOINTS = 10 for catcher\n\t\tPOINTS =30 for BOWLER\n");
}

//____________________________________________________________________________________________________________________________//

//____________________________________________________________________________________________________________________________//


wicket()


{

int cho,reviews;

Dice();
cho=m;
	switch(cho)

{

	case 1:
printf("\n\tBATSMAN IS IN TROUBLE  !  ");
Sleep(1000);
	printf("\nTHAT'S OUT ! DIRECT HIT , RUNOUT ! striker batsman is OUT ! \n");


   runout_direct();

break;

case 2:
printf("\n\tNON STRICKER IS IN TROUBLE  !  ");
Sleep(1000);
printf("\nTHAT'S OUT ! DIRECT HIT ,RUNOUT ! non-striker is OUT\n");


   runout_direct();

break;

case 3:
printf("\tIN THE AIR");
Sleep(500);

printf("\nTHAT'S OUT ! CAUGHT");
Sleep(1000);
printf("\nUMPIRE Shows doubt . Decision referred to TV UMPIRE....");
Sleep(1000);

printf("\nHold on .\n");
DIce();
reviews=v;
if(reviews==5||reviews==3)
{
    Dice();
    reviews=m;

    if(reviews==2||reviews==3)

{
    printf("\nChecking for no ball");
    Sleep(1000);
    printf("\n\n\t\tIts NO BALL ! \n");
    i--;
}
else
    if(reviews==4||reviews==5)

{
    printf("\nChecking for no ball");
    Sleep(1000);
    printf("\nIt is fine there.Hold on\n");
        Sleep(1000);
printf("Ohh , looks like player did't carry safely !");
        Sleep(500);
printf("\n\n\t\tDROPPED !! NOT OUT !\n");

}
else

{
printf("\nChecking for no ball");
    Sleep(1000);
    printf("\nIt is fine there\n");

printf("\n\tTHAT'S OUT !! CAUGHT\n");

    caught();

}

}
else

{
printf("\nChecking for no ball");
    Sleep(1000);
    printf("\nIt is fine there.\n");

printf("\n\tTHAT'S OUT !!  CAUGHT\n");

    caught();

}
break;

case 4:

printf("\nWICKET KEEPER has gone up for a STUMPING appeal.UMPIRE refer to Third umpire\n");
Sleep(1000);
printf("He is so quick. BATSMAN looks not so confident.\n");
Sleep(1000);
printf("Front foot is fine.But LOOKS GONE. It's a Tough call for the third umpire. ");
Sleep(1500);
printf("\nTHAT'S OUT ! STUMPED !! \n\n\t\tPOINTS = 10 FOR WICKETKEEPER\n\t\tPOINTS =30 for BOWLER\n");
break;

case 5:

printf("\nTHAT'S OUT ! BOWLED\n\n\t\tPOINTS =30 for BOWLER\n");
break;

case 6:
    printf("\n\t A very confident APPEAL for LBW !  ");
Sleep(1500);
printf("\nTHAT's OUT ! LBW ,UMPIRE raise the finger .");
Sleep(1000);
printf(" BATSMAN still here .");
Sleep(800);
printf(" Does he go for REVIEW ?");

DIce();
reviews=v;
if(reviews==5||reviews==3)
{

printf("\nYES , He did\n");

Dice();
reviews=m;

if(reviews==2)
{
    printf("NOT OUT , Ball missed the stumps\n");
}

else
    if(reviews==4)
{
    printf("NOT OUT , Ball pitched outside the legs\n");
}

else
if(reviews==6)
{
    printf("NOT OUT ,\n there is an EDGE through Bat\n");
}


else
{
   printf("\n\tTHATS OUT !\tLBW\n\n\t\tPOINTS =30 for BOWLER\n");
}


}
else
{
    printf("\n\tBatsman refuse to take review .");

 printf("\n\tTHATS OUT !\tLBW\n");

}
break;

default:

printf("\n\tTHAT'S OUT \nBOWLED");

break;

}

}


//____________________________________________________________________________________________________________________________//




int Dice()
{


printf("\n\t\t _____________________________________________________");
  printf("\n\t\t   | PRESS ANY KEY TO PLAY THE GAME OR q TO QUIT !  |");
  printf("\n\t\t '''''''''''''''''''''''''''''''''''''''''''''''''''''");
      char ch;
    ch = getch();

    if (ch!='q')
        {
    Call();
    }
    else
    exit (0);

}



    void Call()
    {
        srand (time(NULL));

        int m;
        m= rand();
        m = 1 + m % 6;

        switch (m)
        {
         case 1:
              One();
              m=1;
              break;
         case 2:
              Two();
              m=2;
              break;
         case 3:
              Three();
              m=3;
              break;
         case 4:
              Four();
              m=4;
              break;
         case 5:
              Five();
              m=5;
              break;
         case 6:
              Six();
              m=6;
              break;
         default:
                 printf("INVALID !");

        }
    }


        void One()
        {
        printf ( "\n -----" );
        printf ( "\n|     |" );
        printf ( "\n|  O  |" );
        printf ( "\n|     |" );
        printf ( "\n -----" );
        m=1;

        }
        void Two()
        {
        printf ( "\n -----" );
        printf ( "\n|    O|" );
        printf ( "\n|     |" );
        printf ( "\n|O    |" );
        printf (  "\n -----" );
        m=2;


        }
        void Three()
        {
        printf ( "\n -----" );
        printf ( "\n|    O|" );
        printf ( "\n|  O  |" );
        printf ( "\n|O    |" );
        printf (  "\n -----" );
m=3;
        }
        void Four()
        {
        printf ( "\n -----" );
        printf ( "\n|O   O|" );
        printf ( "\n|     |" );
        printf ( "\n|O   O|" );
        printf (  "\n -----" );

m=4;
        }
        void Five()
        {
        printf ( "\n -----" );
        printf ( "\n|O   O|" );
        printf ( "\n|  O  |" );
        printf ( "\n|O   O|" );
        printf (  "\n -----" );
m=5;
        }
        void Six()
        {
        printf ( "\n -----" );
        printf ( "\n|O   O|" );
        printf ( "\n|O   O|" );
        printf ( "\n|O   O|" );
        printf (  "\n -----" );

m=6;
        }
//____________________________________________________________________________________________________________________________//

int DIce()
{



    printf("\n\t\t _____________________________________________________");
  printf("\n\t\t   | PRESS ANY KEY TO PLAY THE GAME OR q TO QUIT !  |");
  printf("\n\t\t '''''''''''''''''''''''''''''''''''''''''''''''''''''");
  char ch;
    ch = getch();

    if (ch!='q')
        {
    CAll();
    }
    else
    exit (0);

}



    void CAll()
    {
        srand (time(NULL));

        int v;
        v= rand();
        v = 1 + v % 6;

        switch (v)
        {
         case 1:
              ONe();
              v=1;
              break;
         case 2:
              TWo();
              v=2;
              break;
         case 3:
              THree();
              v=3;
              break;
         case 4:
              FOur();
              v=4;
              break;
         case 5:
              FIve();
              v=5;
              break;
         case 6:
              SIx();
              v=6;
              break;
         default:
                 printf("INVALID !");

        }
    }


        void ONe()
        {
        printf ( "\n -----" );
        printf ( "\n|     |" );
        printf ( "\n|  O  |" );
        printf ( "\n|     |" );
        printf ( "\n -----" );
        v=1;

        }
        void TWo()
        {
        printf ( "\n -----" );
        printf ( "\n|    O|" );
        printf ( "\n|     |" );
        printf ( "\n|O    |" );
        printf (  "\n -----" );
        v=2;


        }
        void THree()
        {
        printf ( "\n -----" );
        printf ( "\n|    O|" );
        printf ( "\n|  O  |" );
        printf ( "\n|O    |" );
        printf (  "\n -----" );
 v=3;
        }
        void FOur()
        {
        printf ( "\n -----" );
        printf ( "\n|O   O|" );
        printf ( "\n|     |" );
        printf ( "\n|O   O|" );
        printf (  "\n -----" );

 v=4;
        }
        void FIve()
        {
        printf ( "\n -----" );
        printf ( "\n|O   O|" );
        printf ( "\n|  O  |" );
        printf ( "\n|O   O|" );
        printf (  "\n -----" );
 m=5;
        }
        void SIx()
        {
        printf ( "\n -----" );
        printf ( "\n|O   O|" );
        printf ( "\n|O   O|" );
        printf ( "\n|O   O|" );
        printf (  "\n -----" );

 v=6;
        }

 //_________________________________________________________________________________________________________________________//


//____________________________________________________________________________________________________________________________//




dice()
{

float p[4],P[4],temporary,k;
 float point =0;
float rw=2,rbt1=2,rbt2=2,rbt3=2,rbt4=2,ral1=2,ral2=2,ral3=2,rbl1=2,rbl2=2,rbl3=2;
float gw=2,gbt1=2,gbt2=2,gbt3=2,gbt4=2,gal1=2,gal2=2,gal3=2,gbl1=2,gbl2=2,gbl3=2,out=0;
int team1,team2,team3,team4,choice,modify,sort,sorty,counter,WKT=0,fir,fi=0;

char striker[]={"striker"},name[4]={"ABCD"},A[25]={"PLAYER-A"},B[25]={"PLAYER-B"},C[25]={"PLAYER-C"},D[25]={"PLAYER-D"},ranksort;
printf("\n\t    THERE MUST BE EXACTLY FOUR PLAYER TO PLAY THIS GAME\n");
printf("\n\t    EACH PLAYER HAVE TO CHOOSE ANY ONE TEAM OUT OF FOUR AVAILABLE TEAM\n");

printf("\n\t___________________________________________________________________________________________________________");

printf("\n\t\tTEAM-1\t\t\tTEAM-2\t\t\t\tTEAM-3\t\t\tTEAM-4\n");
printf("\n\tRed wicketkeeper(vc)\t  Green wicketkeeper (vc)\t  Green wicketkeeper   \t  Red wicketkeeper\n");
printf("\n\tRed Batsman-1   \t  Green Batsman-1       \t  Red Batsman-1  (vc)\t  Green Batsman-3 \n");
printf("\n\tGreen Batsman-1     \t  Red Batsman-3         \t  Green Batsman-1    \t  Red Batsman-4 \n");
printf("\n\tGreen Batsman-2     \t  Red Batsman-2         \t  Red Batsman-2      \t  Green Batsman-4 (vc)\n");
printf("\n\tRed Batsman-4       \t  Green Batsman-2       \t  Green Allrounder-3 \t  Red Batsman-1 \n");
printf("\n\tRed Allrounder-2 (c)   \t  Green Allrounder-3    \t  Red Allrounder-1(c)\t  Red Allrounder-3 \n");
printf("\n\tGreen Allrounder-1  \t  Green Allrounder-1       \t  Green Allrounder-1 \t  Green Allrounder-2(c) \n");
printf("\n\tGreen Allrounder-3  \t  Red Allrounder-3 (c)  \t  Green Bowler-1 \t  Green Allrounder-3 \n");
printf("\n\tRed Bowler-3        \t  Red Bowler-1          \t  Red Bowler-3       \t  Red Bowler-3 \n");
printf("\n\tGreen Bowler-3      \t  Green Bowler-1        \t  Green Bowler-3     \t  Green Bowler-2 \n");
printf("\n\tRed Bowler-2        \t  Red Bowler-2          \t  Red Bowler-2       \t  Red Bowler-1 \n");




printf("\n\t___________________________________________________________________________________________________________");


team1=1;
team2=2;
team3=3;
team4=4;

     printf("\n\n\n\t\tNAME the PLAYER who want to take TEAM-1 \t: ");
     //scanf("%s",&A);
     scanf(" %[^\t\n]s",&A);

     printf("\t\tNAME the PLAYER who want to take TEAM-2 \t: ");
     //scanf("%s",&B);
     scanf(" %[^\t\n]s",&B);

     printf("\t\tNAME the PLAYER who want to take TEAM-3 \t: ");
     //scanf("%s",&C);
     scanf(" %[^\t\n]s",&C);

     printf("\t\tNAME the PLAYER who want to take TEAM-4 \t: ");
     //scanf("%s",&D);
     scanf(" %[^\t\n]s",&D);

battingOrder();
     printf("\n\n\tAVINASH VERMA SAYS : GOOD LUCK !! YOU MUST HAVE TO FOLLOW THE ABOVE BATTING RULE\n\tLet's play... \n",A,B,C,D);
printf("\n\t\t\t\tBOWLER-3 will open the attack\n");

 xm:
for(i=0;i<6;i++)
 {
BtOrder();
     printf("\n\t\t\t\t\t\tSTRIKER BATSMAN : ");
     scanf(" %[^\t\n]s",&striker);

  printf("\n\t\t _____________________________________________________");
  printf("\n\t\t   | PRESS ANY KEY TO PLAY THE GAME OR q TO QUIT !  |");
  printf("\n\t\t '''''''''''''''''''''''''''''''''''''''''''''''''''''");
  char ch;
    ch = getch();

    if (ch!='q')
    {

        printf("\n\n\t\t\t\t\t\t\t\t______________");

        printf("\n\t\t\t\t\t\t\t\t| BALL :  %d  |",i+1);
printf("\n\t\t\t\t\t\t\t\t--------------\n\t\t\t");

        switch(j)
        {
        case 0:
            printf("\n\t\t\t\t\t\t\t[ BOWLER-%d to ",j+3);
        break;
        case 1:
            printf("\n\t\t\t\t\t\t\t[ BOWLER-%d to ",j+1);
        break;
        case 2:
        printf("\n\t\t\t\t\t\t\t[ BOWLER-%d to ",j-1);
        break;
        case 3:
            printf("\n\t\t\t\t\t\t\t[ ALLROUNDER-%d to ",j);
        break;
            case 4:
                printf("\n\t\t\t\t\t\t\t[ ALLROUNDER-%d to ",j-2);
        break;
                case 5:
        printf("\n\t\t\t\t\t\t\t[ ALLROUNDER-%d to",j-4);
        break;
                default :
                    printf(".");
        }
printf("%s ]\n\n",striker);



   c();
        }
    else
    {
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tTHANKS\n\n\n\n\n\n");
        exit (0);
    }


do
{
printf("\nEnter the RUNS\t");
 scanf("%d",&run);
 printf("\nIs there any wicket fall ? If YES press 1 otherwise press 0\t");
 scanf("%d",&wkt);
 printf("\nEnter the points\t");
 scanf("%f",&point);
 printf("\nEnter the jercy no. of that CRICKETER , who deserve this point\t");
 scanf("%d",&choice);
 switch(choice)
 {
    case 100 :
    rw=rw+point;
    break;
    case 111 :
    rbt1=rbt1+point;
    break;
    case 112 :
    rbt2=rbt2+point;
    break;
    case 113 :
    rbt3=rbt3+point;
    break;
    case 114 :
    rbt4=rbt4+point;
    break;
    case 121 :
    ral1=ral1+point;
    break;
    case 122 :
    ral2=ral2+point;
    break;
    case 123 :
    ral3=ral3+point;
    break;
    case 131 :
    rbl1=rbl1+point;
    break;
    case 132 :
    rbl2=rbl2+point;
    break;
    case 133 :
    rbl3=rbl3+point;
    break;


    case 200 :
    gw=gw+point;
    break;
    case 211 :
    gbt1=gbt1+point;
    break;
    case 212 :
    gbt2=gbt2+point;
    break;
    case 213 :
    gbt3=gbt3+point;
    break;
    case 214 :
    gbt4=gbt4+point;
    break;
    case 221 :
    gal1=gal1+point;
    break;
    case 222 :
    gal2=gal2+point;
    break;
    case 223 :
    gal3=gal3+point;
    break;
    case 231 :
    gbl1=gbl1+point;
    break;
    case 232 :
    gbl2=gbl2+point;
    break;
    case 233 :
    gbl3=gbl3+point;
    break;

 default :
    printf("");
break;
 }
RUN=RUN + run;
WKT=WKT +wkt;


                                //SELECT YOUR TEAM

switch(team1)
{
    case 1:
          p[0]= 0 + (1.5*rw) + rbt1 + gbt1 + gbt2 + rbt4 + (2*ral2) + gal1 + gal3 + rbl3 + gbl3 + rbl2;

    break;
    default :
        printf("\n\n WRONG CHOICE !! Select any one team out of four\n\n");

}
switch(team2)
{
       case 2:
         p[1]= 0 + (1.5*gw) + gbt1 + rbt3 +rbt2 + gbt2 + gal3 +(2*ral3) + gal1 + rbl1 + gbl1 + rbl2;

    break;
    default :
        printf("\n\n WRONG CHOICE !! Select any one team out of four\n\n");

}
switch(team3)
{
       case 3:
         p[2]= 0 +  gw + (1.5*rbt1) + gbt1 +rbt2 +(2*ral1) + gal1 + gal3 + gbl1 + rbl3 + gbl3 + rbl2;

    break;
    default :
        printf("\n\n WRONG CHOICE !! Select any one team out of four\n\n");

}
switch(team4)
{
    case 4:
        p[3]= 0 +rw + gbt3 + rbt4 + (1.5*gbt4) + rbt1 + ral3 + (2*gal2) + gal3 + rbl3 + gbl2 + rbl1;
 break;

    default :
        printf("\n\n WRONG CHOICE !! Select any one team out of four\n\n");

}



printf("\n\n\t\tJERCY NO.\t\t\tPLAYER\t\t\tPOINTS");

printf("\n\t____________________________________________________________________________");

printf("\n\n\t\t100\t\t\tRED WICKETKEEPER\t\t%2.2f",rw);

printf("\n\t\t111\t\t\tRED BATSMAN1\t\t\t%2.2f",rbt1);

printf("\n\t\t112\t\t\tRED BATSMAN2\t\t\t%2.2f",rbt2);

printf("\n\t\t113\t\t\tRED BATSMAN3\t\t\t%2.2f",rbt3);

printf("\n\t\t114\t\t\tRED BATSMAN4\t\t\t%2.2f",rbt4);

printf("\n\t\t121\t\t\tRED ALLROUNDER1\t\t\t%2.2f",ral1);

printf("\n\t\t122\t\t\tRED ALLROUNDER2\t\t\t%2.2f",ral2);

printf("\n\t\t123\t\t\tRED ALLROUNDER3\t\t\t%2.2f",ral3);

printf("\n\t\t131\t\t\tRED BOWLER1\t\t\t%2.2f",rbl1);

printf("\n\t\t132\t\t\tRED BOWLER2\t\t\t%2.2f",rbl2);

printf("\n\t\t133\t\t\tRED BOWLER3\t\t\t%2.2f",rbl3);


    printf("\n\n\t\t200\t\t\tGREEN WICKETKEEPER\t\t%2.2f",gw);

	printf("\n\t\t211\t\t\tGREEN BATSMAN1\t\t\t%2.2f",gbt1);

	printf("\n\t\t212\t\t\tGREEN BATSMAN2\t\t\t%2.2f",gbt2);

	printf("\n\t\t213\t\t\tGREEN BATSMAN3\t\t\t%2.2f",gbt3);

	printf("\n\t\t214\t\t\tGREEN BATSMAN4\t\t\t%2.2f",gbt4);

	printf("\n\t\t221\t\t\tGREEN ALLROUNDER1\t\t%2.2f",gal1);

    printf("\n\t\t222\t\t\tGREEN ALLROUNDER2\t\t%2.2f",gal2);

	printf("\n\t\t223\t\t\tGREEN ALLROUNDER3\t\t%2.2f",gal3);

    printf("\n\t\t231\t\t\tGREEN BOWLER1\t\t\t%2.2f",gbl1);

	printf("\n\t\t232\t\t\tGREEN BOWLER2\t\t\t%2.2f",gbl2);

	printf("\n\t\t233\t\t\tGREEN BOWLER3\t\t\t%2.2f",gbl3);
printf("\n\t____________________________________________________________________________");
//SORLING ALGORITHM....
printf("\n\t\t\t_____________________________________________");
printf("\n\t\t\t\tRANK\t  NAME\t\t POINTS");
printf("\n\t\t\t---------------------------------------------");
for(sort = 0;sort < 4;sort++)
{
    P[sort]=p[sort];
}

for(sort = 0;sort < 4;sort++)
{
    for(sorty = sort+1;sorty < 4;sorty++)
    {

        if(P[sort]<P[sorty])
        {
    temporary = P[sort];
    P[sort]=P[sorty];
    P[sorty]=temporary;
        }
    }
}
counter=0;
for(sort = 0;sort < 4;sort++)
{
 k=P[sort];
    for(sorty = 0;sorty <4;sorty++)
    {


            if(p[sorty]==k)
            {



        ranksort=name[sorty];



          switch(ranksort)
                {
                case 'A':
                    printf("\n\t\t\t\t %d\t %s\t\t%2.2f",sort+1,A,P[sort]);
                    counter++;
                    break;
                case 'B':
                    printf("\n\t\t\t\t %d\t %s\t\t%2.2f",sort+1,B,P[sort]);
                    counter++;
                    break;
                case 'C':
                    printf("\n\t\t\t\t %d\t %s\t\t%2.2f",sort+1,C,P[sort]);
                    counter++;
                    break;
                case 'D':
                    printf("\n\t\t\t\t %d\t %s\t\t%2.2f",sort+1,D,P[sort]);
                    counter++;
                    break;

                default :
                    printf("");

                }

            }

    }

        if(counter==1)
            {
                counter--;
            }
        else
            if(counter==2)
                {
                    sort=sort+1;
                    counter=counter-2;
                }
                else
            if(counter==3)
                {
                    sort=sort+2;
                    counter=counter-3;
                }
                else
            if(counter==4)
                {
                    sort=sort+3;
                    counter=counter-4;
                }


}
printf("\n\t\t\t---------------------------------------------");
printf("\n______________________________________________________________________________________________________________________________________________________________________________________");

printf("\n\tRW\tRBT1\tRBT2\tRBT3\tRBT4\tRAL1\tRAL2\tRAL3\tRBL1\tRBL2\tRBL3\tGW\tGBT1\tGBT2\tGBT3\tGBT4\tGAL1\tGAL2\tGAL3\tGBL1\tGBL2\tGBL3");
printf("\n______________________________________________________________________________________________________________________________________________________________________________________");
printf("\nTEAM-1  VC\t  @ \t\t\t  @ \t\t  C \t\t\t  @ \t  @\t\t  @ \t  @ \t\t\t  @ \t\t  @ \t\t\t  @");
printf("\nTEAM-2  \t\t @ \t  @ \t\t\t\t  C \t  @ \t  @ \t\t VC \t  @ \t  @ \t\t\t  @ \t\t  @ \t  @");
printf("\nTEAM-3  \t VC \t @ \t\t\t  C \t\t\t\t  @ \t  @ \t  @ \t  @ \t\t\t\t  @ \t\t  @ \t  @ \t\t  @");
printf("\nTEAM-4  @ \t  @ \t\t\t  @ \t\t\t  @ \t  @ \t\t  @ \t\t\t\t  @ \t VC \t\t  C \t  @ \t\t  @");


printf("\n______________________________________________________________________________________________________________________________________________________________________________________");


if(i<5)
{

printf("\n\t\t\t\t\t\t\t_______________________________________");
printf("\n\t\t\t\t\t\t\t| OVER : %d.%d |\tRUN  : %d | WICKET : %d |",j,i+1,RUN,WKT);
printf("\n\t\t\t\t\t\t\t---------------------------------------");

}
else
{
    printf("\n\t\t\t\t\t\t\t_______________________________________");
printf("\n\t\t\t\t\t\t\t| OVER : %d.0 |\tRUN  : %d | WICKET : %d |",j+1,RUN,WKT);
printf("\n\t\t\t\t\t\t\t---------------------------------------");

}

  if(WKT>=10)
{

printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");
printf("\n\t\t\t\t_________________\t\t\t_________________\t\t\t_________________");
printf("\n\t\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |");
printf("\n\t\t\t\t-----------------\t\t\t-----------------\t\t\t-----------------");

if(fi==0)
{
    fir=RUN;
    RUN=0;
    WKT=0;
    i=-1;
    j=0;
}
else{}
    fi=fi+1;
    printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");

}

if(RUN>=fir+1)
{
printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");

printf("\n\t\t\t\t\t\t\t\tTeam Won by %d Wicket",(10-WKT));

printf("\n\t\t\t\t_________________\t\t\t_________________\t\t\t_________________");
printf("\n\t\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |");
printf("\n\t\t\t\t-----------------\t\t\t-----------------\t\t\t-----------------");

}


if(fi>0)
{

    if(WKT<10&&RUN<=fir)
    {
        printf("\n\t\t\t\t\t\t\t\t%d Runs need to win",(fir+1-RUN));
    }
    if(WKT>=10&&RUN<fir)
    {
        printf("\n\t\t\t\t\t\t\t\tTeam Lost by %d Runs",(fir-RUN));
        printf("\n\t\t\t\t_________________\t\t\t_________________\t\t\t_________________");
        printf("\n\t\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |");
        printf("\n\t\t\t\t-----------------\t\t\t-----------------\t\t\t-----------------");


    }
    if(WKT>=10&&RUN==fir)
    {
        printf("\n\t\t\t\t\t\t\t\tMatch Tied");
        printf("\n\t\t\t\t_________________\t\t\t_________________\t\t\t_________________");
        printf("\n\t\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |");
        printf("\n\t\t\t\t-----------------\t\t\t-----------------\t\t\t-----------------");


    }


}




printf("\n_______________________________________________________________________________________________________________________________________________________________________");


  printf("\n\t\tPRESS 1 TO ENTER THE MAKE CHANGE IN POINTSYSTEM\t\t\t\tPRESS 2 TO LEAVE THE POINTSYSTEM AS IT IS\n\t\t\t");
  scanf("%d",&modify);

 }
 while(modify!=2);

 }
printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");
printf("\n\t\t\t\t_________________\t\t\t_________________\t\t\t_________________");
printf("\n\t\t\t\t| OVER COMPLETE |\t\t\t| OVER COMPLETE |\t\t\t| OVER COMPLETE |");
printf("\n\t\t\t\t-----------------\t\t\t-----------------\t\t\t-----------------");

 printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");


 j=j+1;
if(j==6)
{
printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");
printf("\n\t\t\t\t_________________\t\t\t_________________\t\t\t_________________");
printf("\n\t\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |");
printf("\n\t\t\t\t-----------------\t\t\t-----------------\t\t\t-----------------");


    if(fi==0)
    {
        fir=RUN;
        RUN=0;
        WKT=0;
    }
    else if(fi>0)
{


    if(WKT>=10||RUN<fir)
    {
        printf("\n\t\t\t\t\t\t\t\tTeam Lost by %d Runs",(fir-RUN));
        printf("\n\t\t\t\t_________________\t\t\t_________________\t\t\t_________________");
        printf("\n\t\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |");
        printf("\n\t\t\t\t-----------------\t\t\t-----------------\t\t\t-----------------");


    }
    if(WKT>=10||RUN==fir)
    {
        printf("\n\t\t\t\t\t\t\t\tMatch Tied");
        printf("\n\t\t\t\t_________________\t\t\t_________________\t\t\t_________________");
        printf("\n\t\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |\t\t\t| INNINGS BREAK |");
        printf("\n\t\t\t\t-----------------\t\t\t-----------------\t\t\t-----------------");


    }


}


fi=fi+1;
    printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");
i=0;
    j=0;
}
else
    {
        printf("\n");
    }
    goto xm;


}



    void c()
        {
        srand (time(NULL));

        int n;
        n= rand();
        n = 1 + n % 6;

        switch (n)
        {
         case 1:
              one();
              n=1;
              printf("\t1 Run\nPOINTS = 2\n");
              break;
         case 2:
              two();
              n=2;
              printf("\t2 Run\nPOINTS = 4\n");
              break;
         case 3:
              three();
              n=3;
              printf("\nNo Run\nPOINTS = 0\n");
              break;
         case 4:
              four();
              n=4;
              printf("\tFOUR RUN ! WHAT A SHOT\nPOINTS = 8\n");
                  break;
         case 5:
              five();
              printf("\n\tThere might be a chance of  WICKET ");
              n=5;
              wicket();

              break;
         case 6:
             n=6;
              	printf("\n\n\tIN THE AIR ");
                six();

             printf("\n SIX ! wow  \nPOINTS = 10\n");
              break;
         default:
                 printf("\n\tPLEASE Enter valid outcome of dice\n");


        }

    }


        void one()
        {
        printf ( "\n -----" );
        printf ( "\n|     |" );
        printf ( "\n|  O  |" );
        printf ( "\n|     |" );
        printf ( "\n -----" );
        }
        void two()
        {
        printf ( "\n -----" );
        printf ( "\n|    O|" );
        printf ( "\n|     |" );
        printf ( "\n|O    |" );
        printf (  "\n -----" );
        }
        void three()
        {
        printf ( "\n -----" );
        printf ( "\n|    O|" );
        printf ( "\n|  O  |" );
        printf ( "\n|O    |" );
        printf (  "\n -----" );
        }
        void four()
        {
        printf ( "\n -----" );
        printf ( "\n|O   O|" );
        printf ( "\n|     |" );
        printf ( "\n|O   O|" );
        printf (  "\n -----" );
        }
        void five()
        {
        printf ( "\n -----" );
        printf ( "\n|O   O|" );
        printf ( "\n|  O  |" );
        printf ( "\n|O   O|" );
        printf (  "\n -----" );
        }
        void six()
        {
        printf ( "\n -----" );
        printf ( "\n|O   O|" );
        printf ( "\n|O   O|" );
        printf ( "\n|O   O|" );
        printf (  "\n -----" );
        }

//_____________________________________________________________________________________________________________________________//

void main()
{

int d;
char choice;

    system("cls");
printf("\n__________________________________________________________ L U C K Y  - 11 ___________________________________________________________________________________________\n");


printf("\n\n\n\n\t\t\t\t\t\tA");


    Sleep(200);
printf("V");
    Sleep(200);
printf("I");
    Sleep(200);
printf("N");
    Sleep(200);
    printf("A");
    Sleep(200);

printf("S");
    Sleep(200);
printf("H");
    Sleep(600);
printf("  V");
    Sleep(200);
printf("E");
    Sleep(200);
printf("R");
    Sleep(200);
printf("M");
    Sleep(200);
printf("A");
    Sleep(600);
printf("\n\t\t\t\t\t\tEMAIL : aviivash@gmail.com\n\t\t\t\t\t\tPROJECT NAME : LUCKY 11\n\t\t\t\t\t\tDESCRIPTION : DICE ROLE & CRICKET RULE ALGORITHM\n\t\t\t\t\t\tAPPLICATION TYPE : CONSOLE APPLICATION \n" );

Sleep(400);

printf("\n_______________________________________________________________________________________________________________________________________________________________________\n");



printf("\n\t\t\t\t\t\tLOADING");
Sleep(500);
printf(" .");
Sleep(500);
printf(" .");
Sleep(500);
printf(" .");
Sleep(500);
printf(" .");
Sleep(300);
printf(" .");
Sleep(300);

system("cls");


do
{
    avin:
d=2;
printf("\n__________________________________________________________ L U C K Y  - 11 ___________________________________________________________________________________________\n");
printf("\n\n\n   _______________________________________________________________________________________________________________________________________________________________\n");

printf("   |\t\t\t\t|\t\t\t\t\t|\t\t\t\t\t\t|\t\t\t\t\t  |");
printf("\n   |\tENTER 1 to PLAY \t|\tENTER 2 to know the POINTSYSTEM\t|\tENTER 3 to know the RULES\t\t| ENTER 4 to know JERCY NUMBER of player  |\n");
printf("   |\t\t\t\t|\t\t\t\t\t|\t\t\t\t\t\t|\t\t\t\t\t  |");
printf("\n   _______________________________________________________________________________________________________________________________________________________________\n\n\t\t");
scanf("%d",&d);
if(d==1||d==2||d==3||d==4)
{
  switch(d)
{
case 1:
    system("cls");
printf("\n__________________________________________________________ L U C K Y  - 11 ___________________________________________________________________________________________\n");

dice();
break;
case 2:
pointsystem();
break;
case 3:

rule();
break;
case 4:

jercy();
break;
default:
printf("\nENTER 1 or 2 or 3 or 4\n");
}

}
else
{
  printf("\nENTER 1 or 2 or 3 or 4\n");
  goto avin;
}
printf("\n\n\t\tPRESS 'ENTER' TO CONTINUE or PRESS 'n' TO EXIT\n");
scanf("%ch",&choice);
system("cls");
goto avin;
}
while(choice !='n');
}
