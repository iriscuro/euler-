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
    cout << " La suma de los mult.3 o mult.5 es: "<< suma<<endl;

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
    int p=1,m,l=0;
    int num=m,a,b=100000,c;
    int n=100;
    m=100*100;
    for(int i=101;i<999;i++){
        p=i*n;
        if(p>m){
            m=p;
            a=m/b;
            c=m%10;
            if(a!=c)
                break;
            else {
                m=m-a*b;
                b/=10;
            }

            n++;
        }
        else
            n++;

}
   cout << "El palindrome mayor es: "<<m ;

   /* Ejercicio 5
   2520 es el número más pequeño que se puede dividir por cada uno de
    los números del 1 al 10 sin ningún resto.


    ¿Cuál es el número positivo más pequeño que es uniformemente divisible
    por todos los números del 1 al 20?

   */
   /*

    int d,e,n=30,c=0;
    d=1;
    while(d){
        for (int i=2;i<=20;i++){
            e=n%i;
            c++;}
            cout << e<< " ";
            if (c==18){
                cout<<n<< " ";
                d=0;}
            else{
                n=n+1;
                c=0;}
    }
    */
    /*
    int d=1,num=100,i=0;
    int div[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    while(i<20){
        d=num%div[i];
        if(d==0){
            i++;
        }
        else {
            num++;
            i=0;
        }}

    cout << num;// 232792560*/




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
   int sumc,csum,dif;
   int  n=100;
   sumc=n*(n+1)*(2*n+1)/6;
   csum=(n*(n+1)/2)*(n*(n+1)/2);
   dif=csum-sumc;
   cout << " La diferncia de la suma de los cuadrados y el cuadrado de la suma  es: " << dif<< endl;

*/
   /* Ejercicio 7
   Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13,
    podemos ver que el sexto primo es 13.

    ¿Cuál es el 10 001 primer número primo?
   */
/*
   int num=10001,div=2,p=2,a=0,cont =0;
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
   /*
    int a=0,ma,p=1,i=-1;
    int numM[]={73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450};
    while(l!=z){
        for (int j=0;j<13;j++){
            p=p*numM[i+1]
            if(ma<p){
                ma=p;
        }
        }
    }

    c out << "El mayor producto es: "<<ma <<endl;
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
   while(suma==1000){
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
            cout << suma<< " ";}
        else{
            a=0;
            i++;}}
            //cout << suma <<"\t";
    if (suma==1000){
        prod=a*b*c;
            r=1;}

    cout << "El producto es: " << prod;
*/

   /* Ejercicio 10
   La suma de los números primos por debajo de 10 es 2 + 3 + 5 + 7 = 17.

    Encuentra la suma de todos los primos por debajo de dos millones.
   */

   long int num=2000000,suma=0;
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
   cout << " La suma de los primos menores: "<< suma;//1777






    return 0;
}
