#include <stdio.h>

int main(){
int s[6],b[6],i,j,count=0,flag=0;
printf("strike: ");
for(i=0;i<6;i++){
  scanf("%d",&s[i]);
  if(s[i]<1||s[i]>9){
    printf("Invalid! Enter only between 1 to 9\n");
  }
  if(i>=1){
    if(s[i]==s[i-1]){
      printf("Invalid! no back to back repetation\n");
    }
  }
}
for(i=0;i<6;i++){
  count=0;
  for(j=0;j<=i;j++){
    if(s[i]==s[j]){
      count++;
    }
    }
     if(count>=2){
      flag++;
  }
}
if(flag>1){
  printf("Invalid,only 1 digit max of 2 times\n");
} else{
  printf("block: ");
}
count=0;
flag=0;
for(i=0;i<6;i++){
  scanf("%d",&b[i]);
  if(b[i]<1||b[i]>9){
    printf("Invalid! Enter only between 1 to 9\n");
  }
  if(i>=1){
    if(b[i]==b[i-1]){
      printf("Invalid! no back to back repetation\n");
    }
  }
}
for(i=0;i<6;i++){
  count=0;
  for(j=0;j<=i;j++){
    if(b[i]==b[j]){
      count++;
    }
    }
     if(count>=2){
      flag++;
  }
}
if(flag>1){
  printf("Invalid,only 1 digit max of 2 times\n");
}
count=0;
printf("~~~~\n");
for(i=0;i<6;i++){
if(s[i]==b[i]){
  printf("Goal(%d)\n",s[i]);
  count++;
}
else{
  printf("%d-%d\n",s[i],b[i]);
}
}
if(count==0){
  printf("Blocker saved successfully");
}
else{
  printf("Striker scored %d Goals",count);
}
printf("\n~~~~~~");
return 0;
}