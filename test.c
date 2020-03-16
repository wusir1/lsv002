#include <stdio.h>
#include <string.h>



#if 0
void function()
{


}

//int a = 10;

int plus1(int a,int b)
{
	return a + b;	

}

int plus2(int x,int y,int z)
{
	int t;
	int r;
	t = plus1(x,y);
	r = plus1(t,z);

	return r;

}

void string_str(char *s,unsigned int a)
{
	char str[40];

	unsigned int i = 0;
	for(i = 0;i < a;i++)
	{
		if(s[i] & 0x80)
		{
			a++;
			i++;
		}
					
	}

	
	for(i = 0;i < a;i++)
	{
		str[i] = s[i];
	}
	str[i] = '\0';


	printf("%s\n",str);
}


void pointer ()
{
	char *a = "hello";


}


void function17(void)
{
	int a[10] = {3,4,8,9,17,13,18,19,7,9};

	int i = 0;
	int j = 0;
	int temp;

	for(i = 0;i< 9;i++)
	{
		for(j = 0;j < 9 - i;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			
			}		
		
		}
		printf("a[%d] = %d\n",j,a[j]);
	}


}


void function2(void)
{
//	char  a = 1;
//	char b  = 2;


	char a[3]={1,2,3};



}

void function3(void)
{
	int x = 1;
	int y = 2;
	int r;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};


	r = arr[1];
	r = arr[x];
	r = arr[x+y];
	r = arr[x*2+y];

}


int function4(void)
{

	return 1;
}

__int64 function5(void)
{
	__int64 x = 0x1234567890;
	return x;
}


void function6(void)
{
	int arr[8] = {2,4,6,5,3,1,2,7};
	int ret[8] = {0};
	int i = 0;
	int j = 0;


	for(i = 0;i < 8;i++)
	{
		ret[arr[i]]++;	
	}

	for(i = 0;i < 8;i++)
	{ 
		while(ret[i]>0 && j < 8)
		{
			arr[j] = i;
			ret[i]--;
			j++;
		
		}
	
	}

	for(i = 0;i < 8;i++)
	{
		printf("%2d",arr[i]);
	
	}


}



void function7(void)
{
	char a[3][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},	
	};
}


void function8(void)
{
	int arr1[8] = {1,3,8,12,17,19,21,34};
	int arr2[5] = {5,8,11,15,19};


	int i = 0;
	int j = 0;
	int k = 0;
	int dest[13] = {0};

	while(j < 5)
	{
	
		if(arr1[i] > arr2[j])
		{
			dest[k] = arr2[j];
			j++;	
		}
		else
		{
			dest[k] = arr1[i];
			i++;		
		}


		k++;
		
	}

	while(i < 8)
	{
		dest[k] = arr1[i];
		i++;
		k++;	
	}



	for(k = 0;k < 13;k++)
	{
		printf("%3d",dest[k]);
	
	}
	


}
struct st
{
	int a;
	char b;
	short c;


};




void function9(void)
{
//	int a = 1;
//	char b = 2;
//	short c = 3;

	struct st x;
	x.a = 1;
	x.b = 2;
	x.c = 3;

} 

//#pragma pack(8)
struct test
{
	short b;
	int a;
	__int64 c;

	char d;
};


struct s1
{
	char c;
	double i;
};

struct s2
{
	char c1;
	struct s1 s;
	char c2;
	char c3;

};

struct s4
{
	int c1;
	char c2[10];
};
//#pragma pack()
#endif

void function10(int x)
{
	switch(x)
	{
	case 301:
		printf("%d\n",301);
		break;



	case 308:
		printf("%d\n",308);
		break;
	case 309:
		printf("%d\n",309);
		break;

	case 310:
		printf("%d\n",309);
		break;
	
	default:
		printf("err\n");
		break;	
	}


}

void function11(void)
{
	char a = 10;
	short b = 20;
	int c  = 30;


	char *pa = &a;
	short *pb = &b;
	int *pc = &c;

	char **ppa = &pa;
	short **ppb = &pb;
	int **ppc = &pc;


}


void function12(void)
{
	int p = 10;

	int******* p7;
	int****** p6;
	int***** p5;
	int**** p4;
	int*** p3;
	int** p2;
	int* p1;

	p1 = &p;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;

}

void function13(void)
{
	int a[5] = {1,2,3,4,5};

	int *a1 = a;
	int *a2 = &a[4];
	int temp;
	int i;

	while(a1 < a2)
	{
		temp = *a1;
		*a1 = *a2;
		*a2 = temp;
		a1++;
		a2--;	
	}

	a1 = a;
	for(i = 0;i< 5;i++)
	{
		printf("%2d",a1[i]);
	
	}



}

void function14(void)
{
	int i = 5;
	while(i > 0)
	{
		i--;	
	}


	i = 5;
	do
	{
		i--;
	}while(i>0);


	for(i=5;i >0;i--)
	{
	
	
	}
}

enum day
{
	monday,
	sunday,
};

typedef struct student
{
	int a;
	char b;
	short c;
}st;


int main()
{
	enum day dy;
	dy = 100;



}
//f7 build,f5执行 ，f9断点，od按f2下断点
#if 0
int main()
{

//	plus1(1,2);

//	plus2(1,2,3);

//	char *a = "china中国nice万岁hello";    
	
//	string_str(a,14);

//	int i = 0;
//	char  a[10] ={1,2,3,4,5,6,7,8,9,10};



//	function3();
//	int y = 0;
//	y = function4();

//	__int64 x;
//	x = function5();


//	function6();

//	function7();

//	function9();

//	function14();

	
	st a;
	a.a =1;
	a.b =2;
	a.c = 3;

	st *pointer = &a;

	pointer->a = 4;


 	return 0;

}
#endif