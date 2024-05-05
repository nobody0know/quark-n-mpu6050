#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    short resive_data[6];
    printf("led_tiny test\n");

    /*打开文件*/
    int fd = open("/dev/I2C0_mpu6050", O_RDWR);
    if(fd < 0)
    {
            printf("open file : %s failed !\n", argv[0]);
            return -1;
    }
		int error;
		while (1)
		{
			
    /*读取数据*/
    error = read(fd,resive_data,12);
    if(error < 0)
    {
        printf("write file error! \n");
        close(fd);
        /*判断是否关闭成功*/
    }

    printf("AX=%d, AY=%d, AZ=%d ",(int)resive_data[0],(int)resive_data[1],(int)resive_data[2]);
    printf("GX=%d, GY=%d, GZ=%d \n \n",(int)resive_data[3],(int)resive_data[4],(int)resive_data[5]);

		}

    error = close(fd);
    if(error < 0)
    {
        printf("close file error! \n");
    }

    return 0;
}