#include<stdio.h>
#include<ctype.h>

void ejercicio_1();
void ejercicio_2();
void ejercicio_3(); //revisar
void ejercicio_4();
void ejercicio_5();
void ejercicio_6();
void ejercicio_7();
void ejercicio_8();
void ejercicio_9();
void ejercicio_10();
void ejercicio_11();
void ejercicio_12();
void ejercicio_13();

int main()
{
    ejercicio_13();
    return 0;
}

void ejercicio_1()
{
    int horas_trabajadas, valorxhora, sueldo; 
    printf("Ingrese la cantidad de horas trabajadas: \n");
    scanf("%d", &horas_trabajadas);
    printf("Ingrese el valor por hora del empleado; \n");
    scanf("%d", &valorxhora);
    sueldo=horas_trabajadas*valorxhora;
    printf("El sueldo del empeleado es: %d\n", sueldo);
}

void ejercicio_2()
{
    float nota1, nota2, promedio;
    printf("Ingrese nota de evaluación: \n");
    scanf("%f", &nota1);
    printf("Ingrese nota de evaluación: \n");
    scanf("%f", &nota2);
    promedio=(nota1+nota2)/2;
    printf("El promedio de las dos evaluaciones es: %f\n", promedio);

}

void ejercicio_3()
{
    int n1, n2, suma, producto, resto;
    float cociente;
    printf("Ingrese un número entero: \n");
    scanf("%d", &n1);
    printf("Ingrese un número entero: \n");
    scanf("%d", &n2);

    suma=n1+n2;
    producto=n1*n2;
    resto=n1%n2;
    cociente=(float)n1/n2;

    printf("Suma de los números ingresados: %d\n", suma);
    printf("Producto de los números ingresados: %d\n", producto);
    printf("Cociente de los números ingresados: %f\n", cociente);
    printf("Resto de los números ingresados: %d\n", resto);
}

void ejercicio_4()
{
    float medida, pulgada, yarda, cm;
    
    printf("Ingrese la medida en pies: \n");
    scanf("%f", &medida);
    pulgada=medida*12;
    yarda=medida/3;
    cm=medida*(30.48); 
    printf("La medida ingresada en pies es de %f pulgadas\n", pulgada);
    printf("La medida ingresada en pies es de %f yarda\n", yarda);
    printf("La medida ingresada en pies es de %f cms\n", cm);
}

void ejercicio_5()
{
    int tarros, lt1, lt4, lt20;
    printf("Ingrese la cantidad de tarros: \n");
    scanf("%d", &tarros);
    lt1=tarros*0.5;
    lt4=tarros*0.3;
    lt20=tarros*0.2;
    printf("La cantidad de tarros de 1 litro es de: %d\n", lt1);
    printf("La cantidad de tarros de 4 litros es de: %d\n", lt4);
    printf("La cantidad de tarros de 20 litros es de: %d\n", lt20);
}

void ejercicio_6()
{
    int precio_turista, precio_1clase, pasajes_turista, pasajes_1clase, total;
    printf("Ingrese la cantidad de pasajes vendidos en clase turista: \n");
    scanf("%d", &pasajes_turista);
    printf("Ingrese la cantidad de pasajes vendidos en primera clase: \n");
    scanf("%d", &pasajes_1clase);
    precio_turista=pasajes_turista*8800;
    precio_1clase=pasajes_1clase*(8800+(8800*0.3));
    total=precio_turista+precio_1clase;
    printf("La recaudación total del vuelo fue de: $%d\n", total);
}

void ejercicio_7()
{
   int num, unidad, decena, centena;
   printf("Ingresar un número de 3 cifras: \n");
   scanf("%d", &num);
   centena=num/100;
   decena=(num/10)%10;
   unidad=num%10;
   printf("La centena del número ingresado es: %d\n", centena);
   printf("La decena del número ingresado es: %d\n", decena);
   printf("La unidad del número ingresado es: %d\n", unidad);
}

void ejercicio_8()
{
    int fecha, day, month, year;
    printf("Ingrese una fecha con formato ddmmaa\n");
    scanf("%d", &fecha);

    day=fecha/10000;
    month=(fecha/100)%100;
    year=fecha%100;

    printf("%d%d%d\n", year, month, day); 
/*aca esto habria que preguntar, porque podria hacerse con
fecha_aammdd = anio * 10000 + mes * 100 + dia;*/
}

void ejercicio_9()
{
    int kib;
    float tib, gib, mib;
    printf("Ingrese un valor expresado en kibibyte: \n");
    scanf("%d",&kib);
    mib=(float)kib/1024;
    gib=mib/1024;
    tib=gib/1024;
    printf("El valor ingresado en KiB son: %f MiB\n",mib);
    printf("El valor ingresado en KiB son: %f GiB\n",gib);
    printf("El valor ingresado en KiB son: %f TiB\n",tib);
}

void ejercicio_10()
{
    float radio, superficie, perimetro, volumen, pi;
    printf("Ingrese el valor del radio:  \n");
    scanf("%f", &radio);
    pi=3.14;
    superficie=pi*radio*radio;
    perimetro=2*pi*radio;
    volumen=(4/3)*pi*radio*radio*radio;
    printf("La superficie del circulo es: %f\n", superficie);
    printf("El perimetro del circulo es: %f\n", perimetro);
    printf("El volumen del circulo es: %f\n", volumen);
}

void ejercicio_11()
{
    int empanadas, unidad, docena, total;
    printf("Ingrese la cantidad de empanas vendidas: \n");
    scanf("%d", &empanadas);
    unidad=30;
    docena=300;
    total=((empanadas%12)*30)+300;
    printf("El total es de: %d\n", total);
}

void ejercicio_12()
{
    int articulo, descuento, total;
    printf("Ingrese el precio del articulo:\n");
    scanf("%d", &articulo);
    printf("Indique si el articulo tiene desuento (0 no aplica el descuento y 1 aplica el descuento): \n");
    scanf("%d", &descuento);
    total=articulo-(descuento*(articulo*0.2));
    printf("El total es de: %d\n", total);
}

void  ejercicio_13()
{
    int num, suma, unidades, decenas, centenas, millares;
    printf("Ingrese un número positivo de 4 cifras:\n");
    scanf("%d", &num);
    millares=num/1000;
    centenas=(num%1000)/100;
    decenas=(num%100)/10;
    unidades=num%10;
    suma=millares+centenas+decenas+unidades;
    printf("La suma los numeros es: %d\n", suma);
}