void main(){
int a,b;
printf("enter two numbers\n");
scanf("%d %d",&a,&b);

printf("numbers before swaping %d %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;

printf("numbers after swaping %d %d\n",a,b);
getch();
}
