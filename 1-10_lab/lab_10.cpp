# include <iostream>
using namespace std;
int main () 
{


    int i=0,l=0;
    long long sum = 0,cont = 0; 

    for (i = 1; i <= 2000000; i++) 
    {
       
        for (l = 1; l <= i; l++) 
        {
            if (i % l == 0)
            {
                cont+=1;
                if (cont>=2)
                {                     
                    cont=0;
                    if (l==i)
                    {
                        sum+=i;             
                        cont=0;
                        break;
                    }
                    else
                    {
                        break;
                    } 
                }
            

            
            }       
        }
                        
    }
cout<<"La suma de los primos del 1 por debajo de 2000000 es: " << sum <<endl;
return 0;
}



// for (int i = 0; i < 5; ++i) {
//     for (int j = 0; j < 5; ++j) {
//         std::cout << "i = " << i << ", j = " << j << std::endl;
//         if (i == 2 && j == 2) {
//             std::cout << "Salida anticipada del bucle interno (j)." << std::endl;
//             break; // Salir del bucle interno (j) sin afectar el bucle externo (i).
//         }
//     }
// }

// }

