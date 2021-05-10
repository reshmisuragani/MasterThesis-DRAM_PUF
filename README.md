# MasterThesis-DRAM_PUF
This code is modified for Raspberry Pi to access DRAM as PUF and covert channel
Copyright (C) 2019
Authors: Shuai Chen, Wenjie Xiong, Yehan Xu, Bing Li

Link for the code :https://caslab.csl.yale.edu/code/popchannels/

# Requirements

In order to build the firmware and kernel to use the DRAM PUF, a 32 bit Linux-based operating system is highly recommended. Otherwise, you need to install the following packages to be compatible with 32-bit applications:
```shell
sudo apt-get install lib32z1
sudo apt-get install lib32ncurses5
```
Next, install the following packages required to build the firmware and kernel
```shell
sudo apt-get install gcc
sudo apt-get install git
sudo apt-get install gcc-arm-none-eabi
sudo apt-get install libssl-dev
```
To building the firmware and kernel, the gcc ARM toolchain in the specific version is needed. You can obtain the toolchain from:
```shell
http://releases.linaro.org/components/toolchain/binaries/4.9-2016.02/arm-linux-gnueabihf/gcc-linaro-4.9-2016.02-x86_64_arm-linux-gnueabihf.tar.xz
```
Extract the toolchain, and add it to the environment variable:
```shell
sudo gedit /etc/environment
# add 'gcc-linaro-4.9-2016.02-x86_64_arm-linux-gnueabihf/bin:' to the PATH
```
Extract Install vc4-toolchain to build the firmware, you can download the source code from:

   ```
    git clone --recursive https://github.com/itszor/vc4-toolchain.git
   ```
  Then build the compiler with:
   ```
 ./build-all.sh 2>&1 | tee build.log
   ```
   ```shell
   sudo gedit /etc/environment
   # add 'vc4-toolchain/prefix/bin:' to the PATH
