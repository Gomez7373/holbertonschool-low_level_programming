#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

/** 
* create_file - Creates or truncates a file and writes content to it.
* filename: Name of the file to create or truncate.
* text_content: NULL-terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*         -1 if filename is NULL or if the file can't be created/written.
*/
int create_file(const char *filename, char *text_content)
{
int file_descriptor;

if (filename == NULL)
return (-1);

/* Open the file with read and write permissions,
* create if not exists, truncate if exists
*/
file_descriptor =
open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

if (file_descriptor == -1)
return (-1);  /* File couldn't be opened/created */

if (text_content != NULL)
{

/* Write text_content to the file */

ssize_t write_result =
write(file_descriptor, text_content, strlen(text_content));

if (write_result == -1)
{
close(file_descriptor);
return (-1);  /* Write operation failed */
}
}

/* Close the file */
close(file_descriptor);

return (1);  /* Success */
}

