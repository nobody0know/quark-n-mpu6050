KERNEL_DIR=/home/lxj/kernel/quark-kernel/linux/
ARCH=arm
CROSS_COMPILE=arm-linux-
export  ARCH  CROSS_COMPILE

ccflags-y := -std=gnu99

obj-m := mpu6050_drv.o


all:
		$(MAKE) -C  $(KERNEL_DIR) M=$(CURDIR) modules

.PHONE:clean

clean:
		$(MAKE) -C $(KERNEL_DIR) M=$(CURDIR) clean
