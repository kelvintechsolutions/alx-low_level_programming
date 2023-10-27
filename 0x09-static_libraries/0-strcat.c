/**
 * _strcat -it concatenates two strigs.
 * @dest:it is a  strig to append to.
 * @src:it is a  strig to add.
 * Return: 0(successful).
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
