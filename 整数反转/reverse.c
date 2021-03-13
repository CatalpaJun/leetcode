#include <stdio.h>
int reverse(int x){
     long ans = 0;
        while(x!=0){
            ans = ans * 10 + x % 10;
            x = x / 10;
        }
        return (int)ans==ans?(int)ans:0;
}
int int main(int argc, char const *argv[])
{
	int a = 321;
	int num = reverse(a);
	printf("%d\n",num );
	return 0;
}