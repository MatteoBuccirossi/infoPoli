#include <stdio.h>


int main() {
  char txt1[100] = "missione compiutbhsahvshv";
  char res [100];
  int i, w = 0;
  for(i = 0; i < 100; i++){
    if(i == 0 && txt1[0] != ' '){
        res[0] = txt1[0];
        w++;
    }
    if(txt1[i] == ' '){
        res[w] = txt1[i -1];
        w++;
        res[w] = txt1[i +1];
        w++;
    }
  }
  res[w] = txt1[strlen(txt1) -1];
  res[w+1] = '\0';
  printf("%s ", res);

}
