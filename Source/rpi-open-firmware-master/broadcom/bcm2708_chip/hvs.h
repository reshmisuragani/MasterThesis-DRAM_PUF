// This file was generated by the create_regs script
#define SCALER_BASE                                              0x7e400000
#define SCALER_APB_ID                                            0x64647276
#define SCALER_DISPCTRL                                          HW_REGISTER_RW( 0x7e400000 ) 
   #define SCALER_DISPCTRL_MASK                                  0xffffffff
   #define SCALER_DISPCTRL_WIDTH                                 32
      #define SCALER_DISPCTRL_HVS_EN_BITS                        31:31
      #define SCALER_DISPCTRL_HVS_EN_SET                         0x80000000
      #define SCALER_DISPCTRL_HVS_EN_CLR                         0x7fffffff
      #define SCALER_DISPCTRL_HVS_EN_MSB                         31
      #define SCALER_DISPCTRL_HVS_EN_LSB                         31
      #define SCALER_DISPCTRL_VSCL_DIS_BITS                      31:30
      #define SCALER_DISPCTRL_VSCL_DIS_SET                       0xc0000000
      #define SCALER_DISPCTRL_VSCL_DIS_CLR                       0x3fffffff
      #define SCALER_DISPCTRL_VSCL_DIS_MSB                       31
      #define SCALER_DISPCTRL_VSCL_DIS_LSB                       30
      #define SCALER_DISPCTRL_DSP2_PANIC_BITS                    29:28
      #define SCALER_DISPCTRL_DSP2_PANIC_SET                     0x30000000
      #define SCALER_DISPCTRL_DSP2_PANIC_CLR                     0xcfffffff
      #define SCALER_DISPCTRL_DSP2_PANIC_MSB                     29
      #define SCALER_DISPCTRL_DSP2_PANIC_LSB                     28
      #define SCALER_DISPCTRL_DSP1_PANIC_BITS                    27:26
      #define SCALER_DISPCTRL_DSP1_PANIC_SET                     0x0c000000
      #define SCALER_DISPCTRL_DSP1_PANIC_CLR                     0xf3ffffff
      #define SCALER_DISPCTRL_DSP1_PANIC_MSB                     27
      #define SCALER_DISPCTRL_DSP1_PANIC_LSB                     26
      #define SCALER_DISPCTRL_DSP0_PANIC_BITS                    25:24
      #define SCALER_DISPCTRL_DSP0_PANIC_SET                     0x03000000
      #define SCALER_DISPCTRL_DSP0_PANIC_CLR                     0xfcffffff
      #define SCALER_DISPCTRL_DSP0_PANIC_MSB                     25
      #define SCALER_DISPCTRL_DSP0_PANIC_LSB                     24
      #define SCALER_DISPCTRL_DSP3_MUX_BITS                      19:18
      #define SCALER_DISPCTRL_DSP3_MUX_SET                       0x000c0000
      #define SCALER_DISPCTRL_DSP3_MUX_CLR                       0xfff3ffff
      #define SCALER_DISPCTRL_DSP3_MUX_MSB                       19
      #define SCALER_DISPCTRL_DSP3_MUX_LSB                       18
      #define SCALER_DISPCTRL_TILE_WID_BITS                      17:16
      #define SCALER_DISPCTRL_TILE_WID_SET                       0x00030000
      #define SCALER_DISPCTRL_TILE_WID_CLR                       0xfffcffff
      #define SCALER_DISPCTRL_TILE_WID_MSB                       17
      #define SCALER_DISPCTRL_TILE_WID_LSB                       16
      #define SCALER_DISPCTRL_DSP2_IRQ_CTRL_BITS                 12:11
      #define SCALER_DISPCTRL_DSP2_IRQ_CTRL_SET                  0x00001800
      #define SCALER_DISPCTRL_DSP2_IRQ_CTRL_CLR                  0xffffe7ff
      #define SCALER_DISPCTRL_DSP2_IRQ_CTRL_MSB                  12
      #define SCALER_DISPCTRL_DSP2_IRQ_CTRL_LSB                  11
      #define SCALER_DISPCTRL_DSP1_IRQ_CTRL_BITS                 10:9
      #define SCALER_DISPCTRL_DSP1_IRQ_CTRL_SET                  0x00000600
      #define SCALER_DISPCTRL_DSP1_IRQ_CTRL_CLR                  0xfffff9ff
      #define SCALER_DISPCTRL_DSP1_IRQ_CTRL_MSB                  10
      #define SCALER_DISPCTRL_DSP1_IRQ_CTRL_LSB                  9
      #define SCALER_DISPCTRL_IRQ_EN_BITS                        6:0
      #define SCALER_DISPCTRL_IRQ_EN_SET                         0x0000007f
      #define SCALER_DISPCTRL_IRQ_EN_CLR                         0xffffff80
      #define SCALER_DISPCTRL_IRQ_EN_MSB                         6
      #define SCALER_DISPCTRL_IRQ_EN_LSB                         0
#define SCALER_DISPSTAT                                          HW_REGISTER_RW( 0x7e400004 ) 
   #define SCALER_DISPSTAT_MASK                                  0xffffffff
   #define SCALER_DISPSTAT_WIDTH                                 32
      #define SCALER_DISPSTAT_PROF_IRQ_BITS                      31:0
      #define SCALER_DISPSTAT_PROF_IRQ_SET                       0xffffffff
      #define SCALER_DISPSTAT_PROF_IRQ_CLR                       0x00000000
      #define SCALER_DISPSTAT_PROF_IRQ_MSB                       31
      #define SCALER_DISPSTAT_PROF_IRQ_LSB                       0
      #define SCALER_DISPSTAT_DSP0_IRQ_BITS                      31:1
      #define SCALER_DISPSTAT_DSP0_IRQ_SET                       0xfffffffe
      #define SCALER_DISPSTAT_DSP0_IRQ_CLR                       0x00000001
      #define SCALER_DISPSTAT_DSP0_IRQ_MSB                       31
      #define SCALER_DISPSTAT_DSP0_IRQ_LSB                       1
      #define SCALER_DISPSTAT_DSP1_IRQ_BITS                      31:2
      #define SCALER_DISPSTAT_DSP1_IRQ_SET                       0xfffffffc
      #define SCALER_DISPSTAT_DSP1_IRQ_CLR                       0x00000003
      #define SCALER_DISPSTAT_DSP1_IRQ_MSB                       31
      #define SCALER_DISPSTAT_DSP1_IRQ_LSB                       2
      #define SCALER_DISPSTAT_DSP2_IRQ_BITS                      31:3
      #define SCALER_DISPSTAT_DSP2_IRQ_SET                       0xfffffff8
      #define SCALER_DISPSTAT_DSP2_IRQ_CLR                       0x00000007
      #define SCALER_DISPSTAT_DSP2_IRQ_MSB                       31
      #define SCALER_DISPSTAT_DSP2_IRQ_LSB                       3
      #define SCALER_DISPSTAT_DMA_IRQ_BITS                       31:4
      #define SCALER_DISPSTAT_DMA_IRQ_SET                        0xfffffff0
      #define SCALER_DISPSTAT_DMA_IRQ_CLR                        0x0000000f
      #define SCALER_DISPSTAT_DMA_IRQ_MSB                        31
      #define SCALER_DISPSTAT_DMA_IRQ_LSB                        4
      #define SCALER_DISPSTAT_WR_IRQ_BITS                        31:5
      #define SCALER_DISPSTAT_WR_IRQ_SET                         0xffffffe0
      #define SCALER_DISPSTAT_WR_IRQ_CLR                         0x0000001f
      #define SCALER_DISPSTAT_WR_IRQ_MSB                         31
      #define SCALER_DISPSTAT_WR_IRQ_LSB                         5
      #define SCALER_DISPSTAT_RD_IRQ_BITS                        31:6
      #define SCALER_DISPSTAT_RD_IRQ_SET                         0xffffffc0
      #define SCALER_DISPSTAT_RD_IRQ_CLR                         0x0000003f
      #define SCALER_DISPSTAT_RD_IRQ_MSB                         31
      #define SCALER_DISPSTAT_RD_IRQ_LSB                         6
      #define SCALER_DISPSTAT_DMA_ERR_BIT2_BITS                  31:7
      #define SCALER_DISPSTAT_DMA_ERR_BIT2_SET                   0xffffff80
      #define SCALER_DISPSTAT_DMA_ERR_BIT2_CLR                   0x0000007f
      #define SCALER_DISPSTAT_DMA_ERR_BIT2_MSB                   31
      #define SCALER_DISPSTAT_DMA_ERR_BIT2_LSB                   7
      #define SCALER_DISPSTAT_DSP0_STATUS_BITS                   13:8
      #define SCALER_DISPSTAT_DSP0_STATUS_SET                    0x00003f00
      #define SCALER_DISPSTAT_DSP0_STATUS_CLR                    0xffffc0ff
      #define SCALER_DISPSTAT_DSP0_STATUS_MSB                    13
      #define SCALER_DISPSTAT_DSP0_STATUS_LSB                    8
      #define SCALER_DISPSTAT_DMA_ERR_BIT0_BITS                  31:14
      #define SCALER_DISPSTAT_DMA_ERR_BIT0_SET                   0xffffc000
      #define SCALER_DISPSTAT_DMA_ERR_BIT0_CLR                   0x00003fff
      #define SCALER_DISPSTAT_DMA_ERR_BIT0_MSB                   31
      #define SCALER_DISPSTAT_DMA_ERR_BIT0_LSB                   14
      #define SCALER_DISPSTAT_DMA_ERR_BIT1_BITS                  31:15
      #define SCALER_DISPSTAT_DMA_ERR_BIT1_SET                   0xffff8000
      #define SCALER_DISPSTAT_DMA_ERR_BIT1_CLR                   0x00007fff
      #define SCALER_DISPSTAT_DMA_ERR_BIT1_MSB                   31
      #define SCALER_DISPSTAT_DMA_ERR_BIT1_LSB                   15
      #define SCALER_DISPSTAT_DSP1_STATUS_BITS                   21:16
      #define SCALER_DISPSTAT_DSP1_STATUS_SET                    0x003f0000
      #define SCALER_DISPSTAT_DSP1_STATUS_CLR                    0xffc0ffff
      #define SCALER_DISPSTAT_DSP1_STATUS_MSB                    21
      #define SCALER_DISPSTAT_DSP1_STATUS_LSB                    16
      #define SCALER_DISPSTAT_DSP2_STATUS_BITS                   29:24
      #define SCALER_DISPSTAT_DSP2_STATUS_SET                    0x3f000000
      #define SCALER_DISPSTAT_DSP2_STATUS_CLR                    0xc0ffffff
      #define SCALER_DISPSTAT_DSP2_STATUS_MSB                    29
      #define SCALER_DISPSTAT_DSP2_STATUS_LSB                    24
#define SCALER_DISPID                                            HW_REGISTER_RW( 0x7e400008 ) 
   #define SCALER_DISPID_MASK                                    0xffffffff
   #define SCALER_DISPID_WIDTH                                   32
   #define SCALER_DISPID_RESET                                   0x64647276
#define SCALER_DISPECTRL                                         HW_REGISTER_RW( 0x7e40000c ) 
   #define SCALER_DISPECTRL_MASK                                 0xffffffff
   #define SCALER_DISPECTRL_WIDTH                                32
      #define SCALER_DISPECTRL_PANIC_CTRL_BITS                   6:0
      #define SCALER_DISPECTRL_PANIC_CTRL_SET                    0x0000007f
      #define SCALER_DISPECTRL_PANIC_CTRL_CLR                    0xffffff80
      #define SCALER_DISPECTRL_PANIC_CTRL_MSB                    6
      #define SCALER_DISPECTRL_PANIC_CTRL_LSB                    0
      #define SCALER_DISPECTRL_BUSY_STATUS_BITS                  31:8
      #define SCALER_DISPECTRL_BUSY_STATUS_SET                   0xffffff00
      #define SCALER_DISPECTRL_BUSY_STATUS_CLR                   0x000000ff
      #define SCALER_DISPECTRL_BUSY_STATUS_MSB                   31
      #define SCALER_DISPECTRL_BUSY_STATUS_LSB                   8
      #define SCALER_DISPECTRL_Y_BUSY_BITS                       31:9
      #define SCALER_DISPECTRL_Y_BUSY_SET                        0xfffffe00
      #define SCALER_DISPECTRL_Y_BUSY_CLR                        0x000001ff
      #define SCALER_DISPECTRL_Y_BUSY_MSB                        31
      #define SCALER_DISPECTRL_Y_BUSY_LSB                        9
      #define SCALER_DISPECTRL_CB_BUSY_BITS                      31:10
      #define SCALER_DISPECTRL_CB_BUSY_SET                       0xfffffc00
      #define SCALER_DISPECTRL_CB_BUSY_CLR                       0x000003ff
      #define SCALER_DISPECTRL_CB_BUSY_MSB                       31
      #define SCALER_DISPECTRL_CB_BUSY_LSB                       10
      #define SCALER_DISPECTRL_CR_BUSY_BITS                      31:11
      #define SCALER_DISPECTRL_CR_BUSY_SET                       0xfffff800
      #define SCALER_DISPECTRL_CR_BUSY_CLR                       0x000007ff
      #define SCALER_DISPECTRL_CR_BUSY_MSB                       31
      #define SCALER_DISPECTRL_CR_BUSY_LSB                       11
      #define SCALER_DISPECTRL_POSTED_STATUS_BITS                14:12
      #define SCALER_DISPECTRL_POSTED_STATUS_SET                 0x00007000
      #define SCALER_DISPECTRL_POSTED_STATUS_CLR                 0xffff8fff
      #define SCALER_DISPECTRL_POSTED_STATUS_MSB                 14
      #define SCALER_DISPECTRL_POSTED_STATUS_LSB                 12
      #define SCALER_DISPECTRL_POSTED_CTRL_BITS                  21:16
      #define SCALER_DISPECTRL_POSTED_CTRL_SET                   0x003f0000
      #define SCALER_DISPECTRL_POSTED_CTRL_CLR                   0xffc0ffff
      #define SCALER_DISPECTRL_POSTED_CTRL_MSB                   21
      #define SCALER_DISPECTRL_POSTED_CTRL_LSB                   16
      #define SCALER_DISPECTRL_GT8_BURST_BITS                    31:24
      #define SCALER_DISPECTRL_GT8_BURST_SET                     0xff000000
      #define SCALER_DISPECTRL_GT8_BURST_CLR                     0x00ffffff
      #define SCALER_DISPECTRL_GT8_BURST_MSB                     31
      #define SCALER_DISPECTRL_GT8_BURST_LSB                     24
      #define SCALER_DISPECTRL_TWOD_SINGLE_BITS                  31:25
      #define SCALER_DISPECTRL_TWOD_SINGLE_SET                   0xfe000000
      #define SCALER_DISPECTRL_TWOD_SINGLE_CLR                   0x01ffffff
      #define SCALER_DISPECTRL_TWOD_SINGLE_MSB                   31
      #define SCALER_DISPECTRL_TWOD_SINGLE_LSB                   25
      #define SCALER_DISPECTRL_PROF_TYPE_BITS                    27:26
      #define SCALER_DISPECTRL_PROF_TYPE_SET                     0x0c000000
      #define SCALER_DISPECTRL_PROF_TYPE_CLR                     0xf3ffffff
      #define SCALER_DISPECTRL_PROF_TYPE_MSB                     27
      #define SCALER_DISPECTRL_PROF_TYPE_LSB                     26
      #define SCALER_DISPECTRL_Y_NE_CTRL_BITS                    31:28
      #define SCALER_DISPECTRL_Y_NE_CTRL_SET                     0xf0000000
      #define SCALER_DISPECTRL_Y_NE_CTRL_CLR                     0x0fffffff
      #define SCALER_DISPECTRL_Y_NE_CTRL_MSB                     31
      #define SCALER_DISPECTRL_Y_NE_CTRL_LSB                     28
      #define SCALER_DISPECTRL_CB_NE_CTRL_BITS                   31:29
      #define SCALER_DISPECTRL_CB_NE_CTRL_SET                    0xe0000000
      #define SCALER_DISPECTRL_CB_NE_CTRL_CLR                    0x1fffffff
      #define SCALER_DISPECTRL_CB_NE_CTRL_MSB                    31
      #define SCALER_DISPECTRL_CB_NE_CTRL_LSB                    29
      #define SCALER_DISPECTRL_CR_NE_CTRL_BITS                   31:30
      #define SCALER_DISPECTRL_CR_NE_CTRL_SET                    0xc0000000
      #define SCALER_DISPECTRL_CR_NE_CTRL_CLR                    0x3fffffff
      #define SCALER_DISPECTRL_CR_NE_CTRL_MSB                    31
      #define SCALER_DISPECTRL_CR_NE_CTRL_LSB                    30
      #define SCALER_DISPECTRL_SECURE_MODE_BITS                  31:31
      #define SCALER_DISPECTRL_SECURE_MODE_SET                   0x80000000
      #define SCALER_DISPECTRL_SECURE_MODE_CLR                   0x7fffffff
      #define SCALER_DISPECTRL_SECURE_MODE_MSB                   31
      #define SCALER_DISPECTRL_SECURE_MODE_LSB                   31
#define SCALER_DISPPROF                                          HW_REGISTER_RW( 0x7e400010 ) 
   #define SCALER_DISPPROF_MASK                                  0xffffffff
   #define SCALER_DISPPROF_WIDTH                                 32
#define SCALER_DISPDITHER                                        HW_REGISTER_RW( 0x7e400014 ) 
   #define SCALER_DISPDITHER_MASK                                0xffffffff
   #define SCALER_DISPDITHER_WIDTH                               32
#define SCALER_DISPEOLN                                          HW_REGISTER_RW( 0x7e400018 ) 
   #define SCALER_DISPEOLN_MASK                                  0xffffffff
   #define SCALER_DISPEOLN_WIDTH                                 32
#define SCALER_DISPLIST0                                         HW_REGISTER_RW( 0x7e400020 ) 
   #define SCALER_DISPLIST0_MASK                                 0xffffffff
   #define SCALER_DISPLIST0_WIDTH                                32
#define SCALER_DISPLIST1                                         HW_REGISTER_RW( 0x7e400024 ) 
   #define SCALER_DISPLIST1_MASK                                 0xffffffff
   #define SCALER_DISPLIST1_WIDTH                                32
#define SCALER_DISPLIST2                                         HW_REGISTER_RW( 0x7e400028 ) 
   #define SCALER_DISPLIST2_MASK                                 0xffffffff
   #define SCALER_DISPLIST2_WIDTH                                32
#define SCALER_DISPLSTAT                                         HW_REGISTER_RW( 0x7e40002c ) 
   #define SCALER_DISPLSTAT_MASK                                 0xffffffff
   #define SCALER_DISPLSTAT_WIDTH                                32
#define SCALER_DISPLACT0                                         HW_REGISTER_RW( 0x7e400030 ) 
   #define SCALER_DISPLACT0_MASK                                 0xffffffff
   #define SCALER_DISPLACT0_WIDTH                                32
#define SCALER_DISPLACT1                                         HW_REGISTER_RW( 0x7e400034 ) 
   #define SCALER_DISPLACT1_MASK                                 0xffffffff
   #define SCALER_DISPLACT1_WIDTH                                32
#define SCALER_DISPLACT2                                         HW_REGISTER_RW( 0x7e400038 ) 
   #define SCALER_DISPLACT2_MASK                                 0xffffffff
   #define SCALER_DISPLACT2_WIDTH                                32
#define SCALER_DISPCTRL0                                         HW_REGISTER_RW( 0x7e400040 ) 
   #define SCALER_DISPCTRL0_MASK                                 0xffffffff
   #define SCALER_DISPCTRL0_WIDTH                                32
#define SCALER_DISPBKGND0                                        HW_REGISTER_RW( 0x7e400044 ) 
   #define SCALER_DISPBKGND0_MASK                                0xffffffff
   #define SCALER_DISPBKGND0_WIDTH                               32
#define SCALER_DISPSTAT0                                         HW_REGISTER_RW( 0x7e400048 ) 
   #define SCALER_DISPSTAT0_MASK                                 0xffffffff
   #define SCALER_DISPSTAT0_WIDTH                                32
#define SCALER_DISPBASE0                                         HW_REGISTER_RW( 0x7e40004c ) 
   #define SCALER_DISPBASE0_MASK                                 0xffffffff
   #define SCALER_DISPBASE0_WIDTH                                32
#define SCALER_DISPCTRL1                                         HW_REGISTER_RW( 0x7e400050 ) 
   #define SCALER_DISPCTRL1_MASK                                 0xffffffff
   #define SCALER_DISPCTRL1_WIDTH                                32
#define SCALER_DISPBKGND1                                        HW_REGISTER_RW( 0x7e400054 ) 
   #define SCALER_DISPBKGND1_MASK                                0xffffffff
   #define SCALER_DISPBKGND1_WIDTH                               32
#define SCALER_DISPSTAT1                                         HW_REGISTER_RW( 0x7e400058 ) 
   #define SCALER_DISPSTAT1_MASK                                 0xffffffff
   #define SCALER_DISPSTAT1_WIDTH                                32
#define SCALER_DISPBASE1                                         HW_REGISTER_RW( 0x7e40005c ) 
   #define SCALER_DISPBASE1_MASK                                 0xffffffff
   #define SCALER_DISPBASE1_WIDTH                                32
#define SCALER_DISPCTRL2                                         HW_REGISTER_RW( 0x7e400060 ) 
   #define SCALER_DISPCTRL2_MASK                                 0xffffffff
   #define SCALER_DISPCTRL2_WIDTH                                32
#define SCALER_DISPBKGND2                                        HW_REGISTER_RW( 0x7e400064 ) 
   #define SCALER_DISPBKGND2_MASK                                0xffffffff
   #define SCALER_DISPBKGND2_WIDTH                               32
#define SCALER_DISPSTAT2                                         HW_REGISTER_RW( 0x7e400068 ) 
   #define SCALER_DISPSTAT2_MASK                                 0xffffffff
   #define SCALER_DISPSTAT2_WIDTH                                32
#define SCALER_DISPBASE2                                         HW_REGISTER_RW( 0x7e40006c ) 
   #define SCALER_DISPBASE2_MASK                                 0xffffffff
   #define SCALER_DISPBASE2_WIDTH                                32
#define SCALER_DISPALPHA2                                        HW_REGISTER_RW( 0x7e400070 ) 
   #define SCALER_DISPALPHA2_MASK                                0xffffffff
   #define SCALER_DISPALPHA2_WIDTH                               32
#define SCALER_DISPGAMADR                                        HW_REGISTER_RW( 0x7e400078 ) 
   #define SCALER_DISPGAMADR_MASK                                0xffffffff
   #define SCALER_DISPGAMADR_WIDTH                               32
#define SCALER_OLEDOFFS                                          HW_REGISTER_RW( 0x7e400080 ) 
   #define SCALER_OLEDOFFS_MASK                                  0xffffffff
   #define SCALER_OLEDOFFS_WIDTH                                 32
#define SCALER_OLEDCOEF0                                         HW_REGISTER_RW( 0x7e400084 ) 
   #define SCALER_OLEDCOEF0_MASK                                 0xffffffff
   #define SCALER_OLEDCOEF0_WIDTH                                32
#define SCALER_OLEDCOEF1                                         HW_REGISTER_RW( 0x7e400088 ) 
   #define SCALER_OLEDCOEF1_MASK                                 0xffffffff
   #define SCALER_OLEDCOEF1_WIDTH                                32
#define SCALER_OLEDCOEF2                                         HW_REGISTER_RW( 0x7e40008c ) 
   #define SCALER_OLEDCOEF2_MASK                                 0xffffffff
   #define SCALER_OLEDCOEF2_WIDTH                                32
#define SCALER_DISPSLAVE0                                        HW_REGISTER_RW( 0x7e4000c0 ) 
   #define SCALER_DISPSLAVE0_MASK                                0xffffffff
   #define SCALER_DISPSLAVE0_WIDTH                               32
#define SCALER_DISPSLAVE1                                        HW_REGISTER_RW( 0x7e4000c8 ) 
   #define SCALER_DISPSLAVE1_MASK                                0xffffffff
   #define SCALER_DISPSLAVE1_WIDTH                               32
#define SCALER_DISPSLAVE2                                        HW_REGISTER_RW( 0x7e4000d0 ) 
   #define SCALER_DISPSLAVE2_MASK                                0xffffffff
   #define SCALER_DISPSLAVE2_WIDTH                               32
#define SCALER_DISPGAMDAT                                        HW_REGISTER_RW( 0x7e4000e0 ) 
   #define SCALER_DISPGAMDAT_MASK                                0xffffffff
   #define SCALER_DISPGAMDAT_WIDTH                               32