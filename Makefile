KERNEL_DIR=/home/lxj/quark-n/linux/
ARCH=arm
CROSS_COMPILE=arm-linux-
export  ARCH  CROSS_COMPILE

obj-m := mpu6050_drv.o
mpu6050_drv-y := driver_mpu6050_dmp.o driver_mpu6050.o


all:
		$(MAKE) -C $(KERNEL_DIR) M=$(CURDIR) modules

.PHONE:clean

clean:
		$(MAKE) -C $(KERNEL_DIR) M=$(CURDIR) clean
