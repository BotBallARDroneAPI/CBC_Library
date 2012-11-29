#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int motor, fd, error;
	char *motor_dev;
	short velocity;
	
	if(argc < 3) {
		printf("Usage: %s <motor> <velocity>\n", argv[0]);
		return 1;
	}

	motor = atoi(argv[1]);
	velocity = (short)atoi(argv[2]);

	if(motor < 0 || motor > 3) {
		printf("Invalid motor port: must be 0..3\n");
		return 1;
	}

	/*if(pid < -100 || pid > 100) {
		printf("Invalid pid value: must be from -100..100\n");
		return 1;
	}*/

	switch(motor) {
		case 0:
			motor_dev = "/dev/cbc/pid0";
			break;
		case 1:
			motor_dev = "/dev/cbc/pid1";
			break;
		case 2:
			motor_dev = "/dev/cbc/pid2";
			break;
		case 3:
			motor_dev = "/dev/cbc/pid3";
			break;
	}

	fd = open(motor_dev, O_WRONLY);
	
	if(fd < 0) {
		printf("Error opening motor %d: %s\n", motor, strerror(fd));
		return 1;
	}

	printf("Setting motor %d to velocity: %hd\n", motor, velocity);
	error = write(fd, &velocity, 2);
	
	if(error < 0) {
		printf("Error writing to motor %d: %s\n", motor, strerror(error));
		return 1;
	}

	close(fd);
}
