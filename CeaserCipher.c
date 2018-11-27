#include <stdio.h>


int main(int argc, const char* argv[] )
{
  int i;
  int key;
  char choice;
  char word[200] = {0};
  
  printf("Press e to encrypt a message, or d to decrypt a message : \n");
  scanf("%c", &choice);
  getchar();
  
  printf("Enter a messsage: ");
  scanf("%[^\n]%*c", word);
  
  printf("Now enter a key: \n");
  scanf("%d", &key);
  

  

  switch(choice)
  {
  
  case 'e':
  
  
  for (i = 0; i < word[i]; i++)
    word[i] = word[i] + key;
    printf("The encrypted word is: %s", word);
    break;



  case 'd':
  

  for (i = 0; i < word[i]; i++)
    word[i] = word [i] - key;
    printf("The decrypted word is %s", word);
    break;

  }

    return 0;
}
