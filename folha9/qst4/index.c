#include <stdio.h>
#include <math.h>

typedef struct data{
    int dia, mes, ano;
} Data;

int comparar(Data d1, Data d2){
    if((d1.dia == d2.dia) && (d1.mes == d2.mes) && (d1.ano == d2.ano)){
        return 1;
    }else{
        return 0;
    }
}

Data diff(Data d1, Data d2){
    int resultado;
    Data final;
    int dias1 = (d1.dia) + (d1.mes * 30) + (d1.ano * 365);
    int dias2 = (d2.dia) + (d2.mes * 30) + (d2.ano * 365);
    if(dias1 > dias2){
        resultado = dias1 - dias2;
    }else{
        resultado = dias2 - dias1;
    }
    final.dia = resultado % 30;
    final.ano = resultado / 365;
    final.mes = (resultado - (final.ano * 365)) / 30;
    return final;
}

int main(){
    Data d1 = {21,12,2012};
    Data d2 = {26,6,2023};
    printf("%d", diff(d1,d2).mes);
    return 0;
}