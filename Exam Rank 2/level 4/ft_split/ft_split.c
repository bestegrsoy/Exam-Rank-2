#include<stdio.h>
#include<stdlib.h>
char    **ft_split(char *str)
{
    char **tab;
    int index = 0;
    int tab1_i = 0;
    int tab2_i = 0;
    tab = (char**)malloc(sizeof(char *) * 1000);
   	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
		      index++;
    while(str[index] != '\0')
    {
      if(str[index] >32)
      {
        tab[tab1_i] = (char*)malloc(sizeof(char)*1000);
        tab2_i=0;
        while(str[index] >32)
        {
            tab[tab1_i][tab2_i] = str[index];
            index++;
            tab2_i++;
        }
        tab[tab1_i][tab2_i] = '\0';
        tab1_i++;
      }
      else
        index++;
    }
    return tab;
}
// int main()
// {
//     char str[] = "      nurdan  sahinoglu nurdan";
//     char **p = ft_split(str);
//     printf("%s\n",p[0]);
//     printf("%s\n",p[1]);
//     printf("%s",p[2]);
// }