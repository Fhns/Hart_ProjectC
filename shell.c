// Shane's Operating System Shell
// shell.c

void main() {

	// ProjectC
    // Step 5 - Shell Command "type"
	char type[5];
	char buffer[13312];
	int typeI;
	int i;
    // Step 6 - Shell Command "exec"
	char exec[5];
	char* chars;
	int execI;
	// Step 4 - The Shell - making your own user program
	syscall(0, "SHELL>", 0, 0);
	syscall(5, 0, 0, 0);
	type[0] = 't';
	type[1] = 'y';
	type[2] = 'p';
	type[3] = 'e';
	type[4] = '\0';
	for (i = 0; i < 4; i += 1)
	{
		if (chars[i] == type[i])
		{
			typeI = 0;
			break;
		}
	}
	typeI = 1;
	if (typeI == 1)
	{
		syscall(3, "type messag", buffer, 0);
		syscall(0, buffer, 0, 0);
	}
	if (typeI == 0)
	{
// Commented out for easy compiling
//		printString("file not found");
//		break;
	}
	buffer[0] = '\0';
	exec[0] = 'e';
	exec[1] = 'x';
	exec[2] = 'e';
	exec[3] = 'c';
	exec[4] = '\0';
	syscall(1, chars, 0, 0);
	for (i = 0; i < 4; i += 1)
	{
		if (chars[i] == exec[i])
		{
			execI = 0;
			break;
		}
	}
	execI = 1;
	if (execI == 1)
	{
		syscall(4, "exec tstpr2", 0x2000, 0);
	}
	if (execI == 0)
	{
// Commented out for easy compiling
//		printString("file not found");
//		break;
	}
	chars[0] = '\0';
}
