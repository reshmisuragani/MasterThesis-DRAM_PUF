# Procedure
1.The main code for generating DRAM PUF is stored in: 

   ```shell
   rpi-open-firmware-master/getpuf
   ```

   And the code for Mailbox communication is stored in:

   ```shell
   rpi-open-firmware-master/arm_monitor.c
   rpi-open-firmware-master/trap.c
   ```

3. Re-built the firmware:

   ```shell
   cd rpi-open-firmware-master/
   ./buildall.sh
   ```

4. Copy the generated `bootcode.bin` file to the boot partition of the Rpi's SD Card.

   Rename device tree file `*.dtb` to `rpi.dtb` to ensure that the device starts normally.

## Compilation procedure of kernel

1. Re-built the kernel:

   ```shell
   cd kernel/
   make all
   ```

2. Copy the generated `kernel.img` file to the boot partition of the Rpi's SD Card
 
3. Insert the SD Card into the Raspberry Pi B+ and boot it. You can connect the Rpi to your computer via serial cable. 
   Use a terminal software (e.g. minicom,putty) to transfer parameters or receive data.
   Use GPIO Pins 14 and 15 for communication via PuTTy or minicom or any other serial communication software.<br>
The Baud Rate is at 115200<br>

## File structure of the SD Card

├── bootcode.bin<br>
├── cmdline.txt<br>
├── config.txt<br>
├── fixup_cd.dat<br>
├── fixup.dat<br>
├── fixup_x.dat<br>
├── issue.txt<br>
├── kernel.img<br>
├── rpi.dtb<br>
├── start_cd.elf<br>
├── start.elf<br>
└── start_x.elf<br>
<br>
You can find most of these files in the original Raspbian image.<br>
Just be sure to rename the corresponding *.dtb file to rpi.dtb