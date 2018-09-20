#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   // <<<<<<< EJERCICIOS EULER >>>>>>

   /* Ejercicio 1
   Si enumeramos todos los números naturales por debajo de 10
   que son múltiplos de 3 o 5, obtenemos 3, 5, 6 y 9. La suma de
   estos múltiplos es 23.

    Encuentra la suma de todos los múltiplos de 3 o 5 debajo de 1000.
   */

    /*
   int suma =0,num=1000;
   for (int i=2;i<num ;i++){
        if(i%3==0 || i%5==0)
            suma=suma+i;

            }
    cout << " La suma de los muit.3 o mult.5 es: "<< suma<<endl;

    */
   /* Ejercicio 2
   Cada nuevo término en la secuencia de Fibonacci se genera al agregar
    los dos términos anteriores. Al comenzar con 1 y 2, los primeros 10
    términos serán:

    1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

    Al considerar los términos en la secuencia de Fibonacci cuyos valores
     no exceden los cuatro millones, encuentre la suma de los términos pares.
   */
/*
   int a=0,b=1,f=0,suma=0;
   while(f<4000000){
        f = a + b;
        if (f%2==0){

            suma=suma+f;
        }

        a=b;
        b=f;

    }
    cout << " La suma de los pares fibonacci es: " << suma<< endl;

*/

   /* Ejercicio 3
   Los factores primos de 13195 son 5, 7, 13 y 29.

    ¿Cuál es el factor primo más grande del número
    600851475143?
   */

   /*
   int may=0, f,c;
    long long int n=600851475143;
    for (int i=2;i<=n;i++){
        if (n%i==0){
            n=n/i;
            f=i;
            cout << f<< endl;
            for (int n=1; n<=f; n++){
                for (int i=1; i<=n;i++){
                    if(n%i==0)
                        c++;
                        }
                if (c==2){
                    may=f;
                    c=0;}
                else
                    c=0;}}


        if (may<f)
            may=f;
    }
    cout << "El factor primo mayor es: "<< may <<endl;

    */

   /* Ejercicio 4
    Un número palindrómico dice lo mismo en ambos sentidos. El palíndromo
    más grande hecho a partir del producto de dos números de 2 dígitos
     es 9009 = 91 × 99.

    Encuentra el palíndromo más grande hecho con el producto de dos
    números de 3 dígitos.
   */

/*
   int num,r1,r2,y1,y2,z,a,n1,n3,n2,m1,m2,m3,l1,l2,p,may;
   for (int i=100;i<999;i++){
        may=0;
        for (int j=100;j<999;j++){
            a=((i+1)*j);
            n1=a/100000;
            n2=a%10;
            if(n1!=n2)
                j+=1;
            else{
                n3=a%100000;
                y1=n3/10000;
                y2=n3%10;
                if (y1!=y2)
                    j+=1;
                else{
                    a=n3%10000;
                    m1=n3/1000;
                    m2=n3%10;
                    if (m1!=m2)
                        j+=1;
                    else{
                        r1=a%100;
                        r2=a/100;
                        z=a%10;
                        if(l2==z)
                            p=a;
                        else
                            j=+1;
                        }}}
            if (p>may)
                may=p;
            }


}
   cout << "El palindrome mayor es: "<< may;
*/

   /* Ejercicio 5
   2520 es el número más pequeño que se puede dividir por cada uno de
    los números del 1 al 10 sin ningún resto.


    ¿Cuál es el número positivo más pequeño que es uniformemente divisible
    por todos los números del 1 al 20?
   */
/*
    int a,c,d,e,n=10;
    d=1;
    while(d){
        for (int i=1;i<=20;i++){
            if (n%i==0){
                cout << n;
                d=0;}
            else
                n=n+1;
                }}

*/

   /* Ejercicio 6
   La suma de los cuadrados de los primeros diez números naturales es,

    1 2 + 2 2 + ... + 10 2 = 385
    El cuadrado de la suma de los primeros diez números naturales es,

    (1 + 2 + ... + 10) 2 = 55 2 = 3025
    Por lo tanto, la diferencia entre la suma de los cuadrados de los
    primeros diez números naturales y el cuadrado de la suma es 3025 - 385 = 2640.

    Encuentra la diferencia entre la suma de los cuadrados de los
    primeros cien números naturales y el cuadrado de la suma.
   */
   /*
   int sumc,csum,dif,n=100;
   sumc=(n*(n+1)*(2n+1))/6;
   csum=(n*(n+1)/2)*(n*(n+1)/2)
   dif=csum-sumc;
   cout << " La diferncia de la suma de los cuadrados y el cuadrado de la suma  es: " << dif<< endl;

*/

   /* Ejercicio 7
   Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13,
    podemos ver que el sexto primo es 13.

    ¿Cuál es el 10 001 primer número primo?
   */
   /*
   int num=6,div=2,p=2,a=0,cont =0;
   while (cont <num){
    if (p%div==0){
        if (p==div){
            a=p;
            cont+=1;
        }
        div=2;
        p=p+1;
    }
    else{
        div=div+1;}
   }


    cout << " El primo de la posicion "<< cont<<" es: "<< a;

*/
   /* Ejercicio 8
   Los cuatro dígitos adyacentes en el número de 1000 dígitos que tienen
   el mayor producto son 9 × 9 × 8 × 9 = 5832.
   Encuentra los trece dígitos adyacentes en el número de 1000 dígitos que
    tienen el mejor producto. ¿Cuál es el valor de este producto?
   */


   /* Ejercicio 9
   Un triplete pitagórico es un conjunto de tres números naturales,
    a < b < c , para lo cual,

    a 2 + b 2 = c 2
    Por ejemplo, 3 2 + 4 2 = 9 + 16 = 25 = 5 2 .

    Existe exactamente un triplete pitagórico para el cual
    a + b + c = 1000.
    Encuentre el producto abc .

   */

   /*
   int prod;
   int i=1,a,b,c,suma,d,f,r;
   r=0;
   while(r){
        a=i;
        b=a+1;
        c=a+2;
        d= a*a+b*b;
        f= c*c;
        //cout << a <<" "<<b <<" "<<c <<" ";
        //cout << d<< " ";
        //cout << f<<" ";
        if(d==f){
            suma=a+b+c;
            cout << suma <<"\t";
            if (suma==1000){
                prod=a*b*c;
                r=1;}}

        else{
            prod=1;
            i++;}}

    cout << "El producto es: " << prod;

*/
   /* Ejercicio 10
   La suma de los números primos por debajo de 10 es 2 + 3 + 5 + 7 = 17.

    Encuentra la suma de todos los primos por debajo de dos millones.
   */
   /*
   long int num=10,suma=0;
   int div=2,p=2,a=0,cont =0;
   while (p<num){
    if (p%div==0){
        if (p==div){
            a=p;
            suma+=a;
            cont+=1;
        }
        div=2;
        p=p+1;
    }
    else{
        div=div+1;}
   }
   cout << " La suma de los primos menores: "<< suma;
   */

   /* Ejercicio 11
   En la cuadrícula de 20 × 20 a continuación, cuatro números a lo largo
    de una línea diagonal se han marcado en rojo.

    El producto de estos números es 26 × 63 × 78 × 14 = 1788696.

    ¿Cuál es el mayor producto de cuatro números adyacentes en la misma dirección
    (arriba, abajo, izquierda, derecha o diagonal) en la cuadrícula de 20 × 20?

   */

   /* Ejercicio 12
   La secuencia de números de triángulo se genera sumando los números naturales.
    Entonces el 7º número del triángulo sería 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28.
    Los primeros diez términos serían:

    1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

    Vamos a enumerar los factores de los primeros siete números de triángulo:

    1 : 1
    3 : 1,3
    6 : 1,2,3,6
    10 : 1,2,5,10
    15 : 1,3,5,15
    21 : 1,3,7,21
    28 : 1,2, 4,7,14,28
    Podemos ver que 28 es el primer número de triángulo que tiene más de cinco divisores.

    ¿Cuál es el valor del primer número de triángulo para tener más de quinientos divisores?
   */

   /* Ejercicio 13

   */

   /* Ejercicio 14

   */

   /* Ejercicio 15

   */

   /* Ejercicio 16

   */

   /* Ejercicio 17

   */

   /* Ejercicio 18
   */

   /* Ejercicio 19

   */

    /* Ejercicio 20

   */



    return 0;
}
