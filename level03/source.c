void decrypt(int n1) {
	//canary

	int tmp;
	int i;
	int len;
	char str[] = "Q}|u`sfg~sf{}|a3";

	len = strlen(str);
	i = 0;
	while (i < len) {
		str[i] = n1 ^ str[i];
		i++;
	}
	if (strncmp(str, "Congratulations!", 17) == 0) {
		system("/bin/sh");
	} else {
		puts("\nInvalid Password");
	}
	//canary.
}

void test(int i, int constante) { //constante = 0x1337d00d
	int n1;

	n1 = constante - i;
	if (n1 <= 21) {
 		if ((n1 >= 1 && n1 <= 9) || (n1 >= 16 && n1 <= 21)) {
			decrypt(n1);
		}
	}
	decrypt(rand());
}

int main() {
	int	i;

	srand(time(0));
	puts("***********************************");
	puts("*\t\tlevel03\t\t**");
	puts("***********************************");
	printf("Password:");

	scanf("%d", &i)
	test (i, 0x1337d00d);
}
