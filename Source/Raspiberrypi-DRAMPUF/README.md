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

## Communication

Use GPIO Pins 14 and 15 for communication via PuTTy or minicom or any other serial communication software.<br>
The Baud Rate is at 115200<br>

## Input parameters to get DRAM PUF

1. Insert the SD Card into the Raspberry Pi B+ and boot it. You can connect the Rpi to your computer via serial cable. Use a terminal software (e.g. minicom) to transfer parameters or receive data.

2. Wait for the kernel to finish loading, choose test mode in the following menu, option 3 indicates extracting PUF at intervals. (Note : we need to choose  testhe mode 0:t all address(bit))

   ```
   PUF test (bare-metal-code)
   Choose mode:
    0: test all address(bit)
    1: test all address(cell)
    2: test all address(bitflip summary)
    3: Etract at Interval:3
   Extract PUF at Intervals
   ```

3. Set the DRAM address mode and the location of running functions

   ```
   Choose address mode: 0:brc 1:rbc: 0
   Address Mode = BRC
   
   Choose function running location: 0:CPU 1:GPU :1
   Function run on GPU
   ```

4. Set memory location and the initial value:

   ```
   Input 8-digit puf start address:0xC3000000
   PUF start address = 0xC3000000
   
   Input 8-digit puf end address:0xDFFFFFFF
   PUF end address = 0xDFFFFFFF
   
   Input Init value(0/1):0x0
   PUF init value = 0x00000000
   ```

5. Choose the function you want to run during the decay time

   ```
   Select the function to run in the delay time:
    0: no operation
    1: add
    2: div
   ```

6. Set the function run interval and decay duration

   ```
   Input 4-digit function execution interval (freq=n*50us): 0000
   Function execution interval = 0 us
   
   Input 4-digit decay time(s): 0060
   decaytime = 60 s
   ```

7. DRAM PUF will generate after you set the parameters above. Uart will print the following message, you can save it in the log:

   ```
   function_count = 264
   function time = 76001 us
   log= 0, 30C4, 0E9, 02000000
