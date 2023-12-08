#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/*
* append_text_to_file - Appends text at the end of a file.
* @filename: Name of the file.
* @text_content: NULL-terminated string to add at the end of the file.
*
* Return: 1 on success, -1 on failure.
*         -1 if filename is NULL, if the file does not exist,
*         or if permissions are insufficient.
*/
int append_text_to_file(const char *filename, char *text_content)
{
if (filename == NULL)
return (-1);

int file_descriptor = open(filename, O_WRONLY | O_APPEND);

if (file_descriptor == -1)
return (-1);  /* File couldn't be opened or doesn't exist */

if (text_content != NULL)
{
ssize_t write_result =
write(file_descriptor, text_content, strlen(text_content));

if (write_result == -1)
{
close(file_descriptor);
return (-1);  /* Write operation failed */
}
}

close(file_descriptor);

return (1);  /* Success */
}
