#include <stdio.h>
#include "genpat.h"

    char  *inttostr(entier)
    int entier;
{
char *str;
str = (char *) mbkalloc (32 * sizeof (char));
sprintf (str, "%d", entier);
return(str);
}

#define ATRASO 40000


int S (int a, int b, int c){
return (a+b+c) & 0xF;
}

int cout(int a, int b, int c){
if (a+b+c>15){
return 1;
}
else return 0;
}

main(){
  int cur_vect = 0;

  DEF_GENPAT("somador_4bit_genpat_com_atraso_40000");
  DECLAR("a", ":2", "B", IN, "3 down to 0","");
  DECLAR("b", ":2", "B", IN, "3 down to 0","");
  DECLAR("c_in", ":2", "B", IN, "","");
  
  DECLAR("s", ":2", "B", OUT, "3 down to 0","");
  DECLAR("c_out", ":2", "B", OUT, "","");

  DECLAR("vdd", ":2", "B", IN, "","");
  DECLAR("vss", ":2", "B", IN, "","");
 
  LABEL ("somador");
  AFFECT ("0","vdd","0b1");
  AFFECT ("0","vss","0b0");


  int i=0, j=0, k=0;

  for(i=0;i<16;i++){
     for(j=0;j<16;j++){
        for (k=0;k<2;k++){
           AFFECT (inttostr(cur_vect), "a", inttostr(i));
           AFFECT (inttostr(cur_vect), "b", inttostr(j));
           AFFECT (inttostr(cur_vect), "c_in", inttostr(k));

cur_vect+=ATRASO;



           AFFECT (inttostr(cur_vect), "c_out", inttostr(cout(i,j,k)));
           AFFECT (inttostr(cur_vect), "s", inttostr(S(i,j,k)));

cur_vect+=ATRASO;
           
        }
     }
  }

     SAV_GENPAT();

}

