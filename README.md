# ft_printf
ft_printf es un proyecto que imita la función printf real


### ft_print_hex

ft_print_hex es una función que imprime un valor entero sin signo como un número hexadecimal. Toma un valor int sin signo y una cadena de dígitos hexadecimales como argumentos y devuelve un int que indica el número de caracteres impresos.

La función funciona convirtiendo primero el valor entero sin signo a su representación hexadecimal. Para hacer esto, usa el operador de módulo (%) y la división de enteros (/) para aislar el dígito menos significativo del valor, lo agrega a una matriz de dígitos y luego divide el valor por 16. Este proceso se repite hasta que el el valor se convierte en 0.

Por ejemplo, si el valor pasado a la función es 10 (decimal), la matriz nr_base contendrá los dígitos [10] (decimal) después de la primera iteración del bucle.

Una vez que el valor se ha convertido a su representación hexadecimal, la función itera sobre la matriz de dígitos en orden inverso e imprime cada dígito usando la función ft_putchar. El parámetro base se utiliza para especificar el orden en que se deben imprimir los dígitos hexadecimales.

Si el valor pasado a la función es 0, la función imprime un solo carácter '0' y devuelve 1. De lo contrario, devuelve el número de caracteres impresos.

La función itera sobre la matriz de dígitos en orden inverso porque la representación hexadecimal de un número entero se imprime con el dígito más significativo primero y el dígito menos significativo al final.

Por ejemplo, el entero decimal 123 se representa como 0x7b en hexadecimal. Para imprimir este valor, la función necesita imprimir los dígitos '7' y 'b' en ese orden.

Para lograr esto, la función primero convierte el número entero a su representación hexadecimal aislando el dígito menos significativo y agregándolo a la matriz nr_base. Este proceso se repite hasta que el valor se convierte en 0.

Una vez que el valor se ha convertido a su representación hexadecimal, la función itera sobre la matriz nr_base en orden inverso e imprime cada dígito usando la función ft_putchar. Esto asegura que los dígitos se impriman en el orden correcto, con el dígito más significativo primero y el dígito menos significativo al final.

### Links utiles
https://trucosinformaticos.wordpress.com/2018/11/25/funciones-variadicas/ <br>
https://en.cppreference.com/w/c/language/variadic
https://en.cppreference.com/w/c/variadic
