#include <stdio.h>
int main(){
	int ary[10] = {54,23,192,9,99,1834,532,456,9383,776};
	for (int i = 0; i < 10; ++i)
	{
		// tim nghich dao cua ary[i]
		int tmp = ary[i],nghich_dao=0;
		for (; tmp !=0; tmp/=10)
		{
			nghich_dao = nghich_dao*10+tmp%10;
		}
		printf("Nghich dao: %d\n",nghich_dao);
	}
	return 0;
}