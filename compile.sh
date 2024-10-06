#!/bin/bash

# Verificar si se proporcionó un argumento
if [ $# -eq 0 ]; then
   echo "Usage: $0 <function_number>"
   echo "Available options:"
   echo "First Part (01-23):"
   echo "  01:isalpha   02:isdigit   03:isalnum   04:isascii   05:isprint"
   echo "  06:strlen    07:memset    08:bzero     09:memcpy    10:memmove"
   echo "  11:strlcpy   12:strlcat   13:toupper   14:tolower   15:strchr"
   echo "  16:strrchr   17:strncmp   18:memchr    19:memcmp    20:strnstr"
   echo "  21:atoi      22:calloc    23:strdup"
   echo "Second Part (24-34):"
   echo "  24:substr    25:strjoin   26:strtrim   27:split     28:itoa"
   echo "  29:strmapi   30:striteri  31:putchar_fd 32:putstr_fd 33:putendl_fd"
   echo "  34:putnbr_fd"
   echo "Bonus Part (35-43):"
   echo "  35:lstnew    36:lstadd_front 37:lstsize   38:lstlast   39:lstadd_back"
   echo "  40:lstdelone 41:lstclear     42:lstiter   43:lstmap"
   exit 1
fi

# Formatear el número a dos dígitos
number=$(printf "%02d" "$1" 2>/dev/null || echo "$1")


# Verificar si el número está en el rango válido
if [ $number -lt 1 ] || [ $number -gt 43 ]; then
   echo "Error: Number must be between 1 and 43"
   exit 1
fi

# Verifica si el archivo existe
if [ ! -f "mains/main_$number.c" ]; then
   echo "Error: mains/main_$number.c does not exist"
   exit 1
fi

# Verifica si libft.a existe
if [ ! -f "libft.a" ]; then
   echo "Error: libft.a not found"
   exit 1
fi

# Obtener el nombre de la función basado en el número
#function_name=$(case $number in
#   "01") echo "isalpha";;
#   "02") echo "isdigit";;
#   "03") echo "isalnum";;
#   "04") echo "isascii";;
#   "05") echo "isprint";;
#   "06") echo "strlen";;
#   "07") echo "memset";;
#   "08") echo "bzero";;
#   "09") echo "memcpy";;
#   "10") echo "memmove";;
#   "11") echo "strlcpy";;
#   "12") echo "strlcat";;
#   "13") echo "toupper";;
#   "14") echo "tolower";;
#   "15") echo "strchr";;
#   "16") echo "strrchr";;
#   "17") echo "strncmp";;
#   "18") echo "memchr";;
#   "19") echo "memcmp";;
#   "20") echo "strnstr";;
#   "21") echo "atoi";;
#   "22") echo "calloc";;
#   "23") echo "strdup";;
#   "24") echo "substr";;
#   "25") echo "strjoin";;
#   "26") echo "strtrim";;
#   "27") echo "split";;
#   "28") echo "itoa";;
#   "29") echo "strmapi";;
#   "30") echo "striteri";;
#   "31") echo "putchar_fd";;
#   "32") echo "putstr_fd";;
#   "33") echo "putendl_fd";;
#   "34") echo "putnbr_fd";;
#   "35") echo "lstnew";;
#   "36") echo "lstadd_front";;
#   "37") echo "lstsize";;
#   "38") echo "lstlast";;
#   "39") echo "lstadd_back";;
#   "40") echo "lstdelone";;
#   "41") echo "lstclear";;
#   "42") echo "lstiter";;
#   "43") echo "lstmap";;
#esac)

# Compilar y ejecutar con valgrind
echo "Compiling..."
cc -Wall -Wextra -Werror -o a.out mains/main_$number.c libft.a
if [ $? -eq 0 ]; then
   echo -e "\nRunning valgrind check...\n"
   echo "--------------------------------"
   valgrind --leak-check=full ./a.out
else
   echo "Compilation failed"
   exit 1
fi
