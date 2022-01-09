#include <stdio.h>
#define MAXLINE 1000
int  get_line(char line[], int maxline);
void copyline(char from[], char to[]);

/*Imprime la línea de entrada más larga. */
int main()
{
    int  a_len, the_len;
    char a_line[MAXLINE], the_line[MAXLINE];

    the_len = 0;
    while ((a_len = get_line(a_line, MAXLINE)) > 0)
        if (a_len > the_len) {
            copyline(a_line, the_line);
            the_len = a_len;
        }
    
    if (the_len > 0) {
        printf("Longest line:\n");
        printf("%s", the_line);
    }
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c = getchar()) != EOF && c!= '\n'; ++i) {
        s[i] = c;
        ++i;
        c = getchar();
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copyline(char from[], char to[])
{
    int i, c;

    i = 0;
    c = from[i];    
    while (c != '\0') {
        to[i] = from[i];
        ++i;
        c = from[i];
    }
}















