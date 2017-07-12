#include <genlib.h>

int main(){
    GENLIB_DEF_LOFIG("somador_4bit_genlib");
    GENLIB_LOCON("a[3:0]",IN,"a[3:0]");
    GENLIB_LOCON("b[3:0]",IN,"b[3:0]");
    GENLIB_LOCON("s[3:0]",OUT,"s[3:0]");
    GENLIB_LOCON("c_0",IN,"c_0");
    GENLIB_LOCON("c_4",OUT,"c_4");
    GENLIB_LOCON("vdd",IN,"vdd");
    GENLIB_LOCON("vss",IN,"vss");
    
    int i;
    for (i=0; i<4; i++){
    GENLIB_LOINS("somador_1bit_genlib",GENLIB_NAME("somador_%d",i),GENLIB_ELM("a",i),GENLIB_ELM("b",i),GENLIB_NAME("c_%d",i), GENLIB_ELM("s",i),GENLIB_NAME("c_%d",i+1),"vdd","vss",NULL);
    
    }
GENLIB_SAVE_LOFIG();
return 0;
}

