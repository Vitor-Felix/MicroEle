#include <genlib.h>
#define POWER "vdde","vdd","vsse","vss",NULL 
int main(void){
    int i;
    GENLIB_DEF_LOFIG("somador_4bit_chip");


    GENLIB_LOCON("a[3:0]",IN,"a[3:0]");
    GENLIB_LOCON("b[3:0]",IN,"b[3:0]");
    GENLIB_LOCON("c_0",IN,"c_0");
    GENLIB_LOCON("s[3:0]",OUT,"s[3:0]");
    GENLIB_LOCON("c_4",OUT,"c_4");
    GENLIB_LOCON("vdd",IN,"vdd");
    GENLIB_LOCON("vss",IN,"vss");
    GENLIB_LOCON("vdde",IN,"vdde");
    GENLIB_LOCON("vsse",IN,"vsse");
    
    GENLIB_LOINSE("somador_4bit_core_routed","core",

    "vdd => vdd", 
    "vss => vss",
    "c_0 => c_0i",
    "c_4 => c_4i",

    "a[3:0] => ai[3:0]",
    "b[3:0] => bi[3:0]",
    "s[3:0] => si[3:0]",

    NULL);

    for(i=0;i<4;i++){

    GENLIB_LOINS("pi_sp",GENLIB_NAME("p_a%d",i),GENLIB_ELM("a",i),GENLIB_ELM("ai",i),"cki",POWER);
    GENLIB_LOINS("pi_sp",GENLIB_NAME("p_b%d",i),GENLIB_ELM("b",i),GENLIB_ELM("bi",i),"cki",POWER);
    GENLIB_LOINS("po_sp",GENLIB_NAME("p_s%d",i),GENLIB_ELM("si",i),GENLIB_ELM("s",i),"cki",POWER);
}
    GENLIB_LOINS("pi_sp","p_c_0","c_0","c_0i","cki", POWER);
    GENLIB_LOINS("po_sp","p_c_4","c_4","c_4i","cki", POWER);

    GENLIB_LOINS("pvddick_sp","p_vddi","ckc","cki", POWER);
    GENLIB_LOINS("pvssick_sp","p_vssi","ckc","cki", POWER);

    GENLIB_LOINS("pvddeck_sp","p_vdde","ckc","cki", POWER);
    GENLIB_LOINS("pvsseck_sp","p_vsse","ckc","cki", POWER);


GENLIB_SAVE_LOFIG();
return 0;
}

