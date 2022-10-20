#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <tgmath.h>
int main()


{


float x1,y1,x2,y2,dlat,dlong,d2r;

printf("DIGITE SUA LATITUDE: ");
scanf("%f",&x1);
printf("DIGITE SUA LONGITUE: ");
scanf("%f",&y1);
printf("DIGITE A LATITUDE DO SEU PET: ");
scanf("%f",&x2);
printf("DIGITE A LONGITUDE DO SEU PET: ");
scanf("%f",&y2);

d2r = 0.01745;
dlat = (x2-x1)*d2r; //PARA CONSEGUIR CALCULAR CORRETAMENTE A DISTANCIA DEVE TRANSFORMAR GRAUS DECIMAIS EM RADIANOS
dlong =(y2-y1)*d2r;

float temp_sin = sin(dlat/2.0); //DEFININDO O SENO UTILIZANDO DIFERENÇA DE LATITUDE
float temp_cos = (x1*d2r);      // COSENO UTILIZANDO LATITUDE INICIAL TAMBEM EM RADIANOS
float temp_sin2 = sin(dlong/2.0);

//CALCULANDO DISTANCIA ENTRE 2 PONTOS UTILIZANDO RADIANOS
float a = (temp_sin * temp_sin) + (temp_cos * temp_cos) * (temp_sin2 * temp_sin2);
float c = 2.0 * atan2(sqrt(a), sqrt(1.0 - a));
float distf = c*6371000; //calculo de radianos para metros usando o raio da terra em metros

printf("A DISTANCIA ENTRE VOCE E SEU PET EM METROS E DE = %.2f",distf);

if (distf >=25)
{
	printf("\n SEU PET ESTA EM PERIGO!");
}
else
{
	printf("\n SEU PET ESTA SEGURO!");
}

return 0;
}
