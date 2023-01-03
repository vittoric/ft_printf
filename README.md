 # ft_printf
ft_printf es un proyecto que imita la función printf real
<hr>
## [ft_print](/ft_printf.c) es una función que formatea e imprime la salida en stdout (típicamente la terminal). Toma una cadena de formato, que especifica cómo se debe formatear la salida, y un número variable de argumentos que contienen los valores que se imprimirán.

La función comienza inicializando una lista de argumentos variables usando va_start. Luego itera a través de la cadena de formato, carácter por carácter. Cuando encuentra un carácter '%', llama a la función de conversión con el siguiente carácter en la cadena de formato y el argumento actual de la lista de argumentos. La función de conversión procesa el argumento y lo formatea de acuerdo con el especificador de conversión correspondiente (el carácter después del '%'). Si el carácter no es un '%', se llama a ft_putchar para imprimir el carácter. Finalmente, la función devuelve el número total de caracteres impresos.

### va-list
En C, `va_list` es un tipo que contiene una lista de argumentos de distintos tipos, junto con un estado actual que apunta al siguiente argumento de la lista. Se utiliza para pasar un número variable de argumentos a una función.

Para usar `va_list` en una función, primero debe declararla e inicializarla usando `va_start`. Luego puede usar `va_arg` para recuperar el siguiente argumento de la lista y `va_end` para limpiar y restablecer la lista cuando haya terminado de procesar los argumentos.

### va_arg
`va_arg` es una macro en C que recupera el siguiente argumento en una `va_list`. Toma una variable `va_list` y el tipo del argumento como argumentos, y devuelve el argumento como el tipo especificado.

La macro `va_arg` generalmente se usa dentro de un ciclo para iterar a través de todos los argumentos en una `va_list`. La primera vez que se llama a `va_arg` en una `va_list`, devuelve el primer argumento; la segunda vez que se llama, devuelve el segundo argumento; etcétera.

### va_start
`va_start` es una macro en C que inicializa una variable `va_list` para usar con `va_arg` y `va_end`. Toma como argumentos una variable `va_list` y el nombre del último parámetro fijo en la función.

La variable `va_list` se usa para contener una lista de argumentos de diferentes tipos pasados a una función. Se debe llamar a `va_start` antes de que se pueda usar `va_arg` para recuperar los argumentos de la lista.

### va_end
`va_end` es una macro en C que limpia y restablece una variable `va_list` después de haberla usado con `va_arg`. Toma una variable `va_list` como argumento.

La variable `va_list` se usa para contener una lista de argumentos de diferentes tipos pasados a una función. Una vez que haya terminado de procesar los argumentos, debe llamar a `va_end` para limpiar y restablecer la variable `va_list`. Esto normalmente se hace antes de regresar de la función.

### converter

El convertidor es una función que procesa un solo argumento en una va_list y lo formatea de acuerdo con el especificador de formato dado. Toma un char que representa el especificador de formato y una va_list como argumentos, y devuelve un int que indica el número de caracteres impresos.

La función primero verifica el valor del parámetro de formato y llama a la función adecuada para procesar el argumento. Por ejemplo, si el formato es 'c', la función llama a ft_putchar para imprimir un solo carácter de va_list. Si el formato es 's', la función llama a ft_putstr para imprimir una cadena terminada en nulo. Si el formato es 'p', la función llama a ft_print_ptr para imprimir un valor de puntero.

Cada una de las funciones llamadas por el convertidor toma un solo argumento de va_list usando la macro va_arg. El tipo de argumento pasado a va_arg debe coincidir con el tipo de argumento esperado por la función. Por ejemplo, si el especificador de formato es 'd' o 'i', la función llama a ft_putnbr para imprimir un valor int, por lo que se llama a va_arg con int como segundo argumento.

Una vez que el argumento ha sido procesado e impreso, el convertidor devuelve el número de caracteres impresos. Si no se reconoce el parámetro de formato, la función devuelve 1.


### ¿Que es uintptr_t?
uintptr_t es un tipo entero sin signo definido en el encabezado stdint.h. Está diseñado específicamente para contener un valor de puntero y se garantiza que sea lo suficientemente grande como para contener cualquier puntero válido en el sistema host.

El tipo uintptr_t se define como un tipo entero sin signo con el mismo tamaño que un puntero. En un sistema de 32 bits, normalmente se define como un alias para unsigned int, mientras que en un sistema de 64 bits normalmente se define como un alias para unsigned long long.

### ¿Por que pasamos como argumento la cadena "0123456789abcdef"?
`0123456789abcdef` es una cadena que especifica el orden en que se deben imprimir los dígitos de un número hexadecimal.
Cuando llame a ft_print_hex con esta cadena como segundo argumento, la función imprimirá el valor entero sin signo dado como un número hexadecimal usando los dígitos '0' a 'f' en el orden especificado por la cadena.

Por ejemplo, si el valor pasado a ft_print_hex es 10 (decimal), la función imprimirá 'a' porque 'a' es el sexto carácter de la cadena y 10 (decimal) es el sexto dígito en el sistema numérico hexadecimal.

Esta cadena se utiliza para especificar que los dígitos hexadecimales deben imprimirse en minúsculas. Si quisiera imprimir los dígitos hexadecimales en mayúsculas, podría usar la cadena "0123456789ABCDEF" en su lugar.

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

### ft_print_ptr

Función para imprimir un puntero (uintptr_t) en formato hexadecimal. 
`ft_print_ptr` es la función principal para imprimir un puntero. Escribe la cadena "0x" en stdout para indicar que el siguiente valor es un número hexadecimal. Si el valor del puntero es cero, escribe un único carácter '0' en la salida estándar. De lo contrario, llama a ft_put_ptr para imprimir la representación hexadecimal del puntero y devuelve la cantidad de caracteres escritos, que es igual a la cantidad de dígitos en la representación hexadecimal más 2 para el prefijo "0x".

`ft_ptr_len` calcula el número de dígitos necesarios para representar el puntero en hexadecimal. Lo hace dividiendo el valor del puntero por 16 (que es la base del sistema numérico hexadecimal) repetidamente hasta que el cociente sea cero.

`ft_put_ptr` imprime recursivamente la representación hexadecimal del valor del puntero. Lo hace dividiendo el valor del puntero por 16 e imprimiendo el resto, luego continúa con el cociente hasta que alcanza un valor inferior a 16. Para valores inferiores a 10, imprime el carácter ASCII correspondiente al dígito (por ejemplo, '0' para 0, '1' por 1, etc.), y para valores superiores a 9 imprime el carácter ASCII correspondiente al dígito hexadecimal (ej. 'a' por 10, 'b' por 11, etc.).

## ft_print_unsigned


### Links utiles
[Funciones variádicas](https://trucosinformaticos.wordpress.com/2018/11/25/funciones-variadicas/) <br>
[Variadic arguments](https://en.cppreference.com/w/c/language/variadic) <br>
[Variadic functions](https://en.cppreference.com/w/c/variadic) <br>

