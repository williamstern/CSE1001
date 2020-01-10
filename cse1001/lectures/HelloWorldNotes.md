email for participation extra credit jriswickeste2018@my.fit.edu

# Hello World

```c
#include <stdio.h>

int main(void){
    printf("Hello, World!\n");
    return 0;    
}
```

## The Code explained

```c
#include <stdio.h>
```

\# identifies this as a preprocessor directive

`<stdio.h>` loads the dtdio.h library for standard input / output methods

```c
int main(void) {
    //eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
    //monkey
}
```

int means the the method main will return data type int

void is in the fuction parameters. It mains that nothing gooes into the fuction. 

```c
printf("sliiiiiiiiiiiick\n");
return 0;
```

printf prints out to the screen. Theis is also called STDOUT aka standard output.

returning 0 means the function main exited without errors. 

```c
#include <stdio.h>

int main(void) {
    int n_1, n_2;
    printf("Enter an integer: ");
    scanf("%d", &n_1);

    printf("Enter a second number: ");
    scanf("%d", &n_2);

    printf("The sum is %d\n", (n_1 + n_2));

    return 0;
}
```
