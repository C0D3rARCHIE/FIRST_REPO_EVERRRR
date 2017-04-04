#include <cstdio>

int main()
{
	printf("I personally prefer the proper production of programs. Proper program production pertains to the pertinent use of printf\n");
	printf("C++ is a bad language because it doesnt collect garbage (like itself)\n");
	printf("if you use C then you will be cool");
	printf("Time to halt the program!");

	//this is what is called assembly, u have probably never heard of it
	__asm
	{
	NICE_TRY_NOOBS:
		nop //this means do nothign for 4 cycles, we dot his to do nothing for 4 cycles
			jmp NICE_TRY_NOOBS //this will jump back to the label i made 2 lines ago it jumps back to that label and does not stop so u are trapped
							   //noob
	}

}