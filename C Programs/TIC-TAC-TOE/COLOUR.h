//COLOUR FUNCTIONS

void yellow();
void red();
void green();
void blue();
void magenta();
void cyan();
void reset();

void reset()
	{
	printf("\033[0m");
	}
	
void blue()
	{
		printf("\033[1;34m");
	}
	
void red()
	{
		printf("\033[1;31m");
	}
	
void cyan()
	{
		printf("\033[1;36m");
	}
	
void yellow()
	{
		printf("\033[1;33m");
	}
	
void magenta()
	{
		printf("\033[1;35m");
	}
	
void green()
	{
		printf("\033[1;32m");
	}
