#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
  //Bonjour, C'est Alaric qui m'a dit de faire ça.
  //Voici la pull request
  //Voilà la pull request qui fait défaut à toute la planète :)
  my_putchar("Bonjour le FORWARD");
  return (-42); // C'est ici que j'ai ajouté du code Hihihihi :)
}

