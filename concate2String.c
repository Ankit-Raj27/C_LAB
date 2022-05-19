/* WAP to concatenate string s2 to string s1, use function to find length */
#include<stdio.h>
int length(char *s)
{
	int len=0;
	while(s[++len]);
	return len;
}
int main()
{
	char s1[100],s2[100],ch;
	int i,j;
	printf("Enter first string: ");
	scanf("%s",s1);
	scanf("%c",&ch);
	printf("Enter second string: ");
	scanf("%s",s2);
	i=0;
	j=length(s1);
	while(s1[j++]=s2[i++]);
    {
	    printf("After concatenation: %s",s1);
    }

	return 0;
}