#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("COLOR B");
  char firma[100][100] = {
    {"#######  #######  #######  #######  #     #     #######  #######   \n"},
    {"#        #     #  #           #      #   #      #           #      \n"},
    {"#        #     #  #           #       # #       #           #      \n"},
    {"#   ###  #######  #######     #        #        #######     #      \n"},
    {"#     #  #     #        #     #        #        #           #      \n"},
    {"#     #  #     #        #     #        #        #           #      \n"},
    {"#######  #     #  #######     #        #        #           #      \n"}
  };

  // Imprimir la firma digital en grande
  for (int i = 0; i < 7; i++) {
    printf("%s", firma[i]);
  }


    return 0;
}









