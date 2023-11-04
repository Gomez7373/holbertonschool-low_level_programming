cat 2-args.c
#include &lt;stdio.h&gt;
/**
* main - entry point
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
if (argc &gt; 0)
{
int i;
for (i = 0; i &lt; argc; i++)
{
printf(&quot;%s\n&quot;, argv[i]);
}
}
return (0);
}
