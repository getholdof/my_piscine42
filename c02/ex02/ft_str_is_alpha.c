#include <stdio.h>
int     ft_str_is_alpha(char* str)
{
    int is_alpha;

    is_alpha = 1;
    while(*str != '\0')
    {
        if (!(*str >= 'a' && *str <= 'z') 
            || (*str >= 'A' && *str <= 'Z'))
        {
            is_alpha = 0;
            break;
        }
        str++;
    }
    return (is_alpha);
}

int main(void)
{
    char str1[]="gho";
    char str2[]="gHo";
    char str3[]="getholdof";
    char str4[]="gEthoLdOf";
    char str5[]="get hol dof";
    char str6[]="getholdof83";
    char str7[]="mammsskoleiienldlkieghfesdlkj.";
    char str8[]="1234567890";
    char str9[]="#$#&/(%)";
    char str10[]="";


    printf("srt1:\n%s\nis alpha: %d\n\n", str1, ft_str_is_alpha(str1));

    printf("str2:\n%s\nis alpha: %d\n\n", str2, ft_str_is_alpha(str2));

    printf("str3:\n%s\nis alpha: %d\n\n", str3, ft_str_is_alpha(str3));

    printf("str4:\n%s\nis alpha: %d\n\n", str4, ft_str_is_alpha(str4));

    printf("str5:\n%s\nis alpha: %d\n\n", str5, ft_str_is_alpha(str5));

    printf("str6:\n%s\nis alpha: %d\n\n", str6, ft_str_is_alpha(str6));

    printf("str7:\n%s\nis alpha: %d\n\n", str7, ft_str_is_alpha(str7));

    printf("str8:\n%s\nis alpha: %d\n\n", str8, ft_str_is_alpha(str8));

    printf("str9:\n%s\nis alpha: %d\n\n", str9, ft_str_is_alpha(str9));

    printf("str10:\n%s\nis alpha: %d\n\n", str10, ft_str_is_alpha(str10));

}
