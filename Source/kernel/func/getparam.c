#include <stddef.h>
#include <stdint.h>
#include "uart.c"

//pow(int number,int power)
int pow(int a,int b)
{
    int result=1;
    if (b==0)
        result=1;
    else
    {
        for(int i=1;i<=b;i++)
            result*=a;
    }
    return result;

}
int div(int a,int b)
{
    int result=0;
    for(result=0;;result++)
    {
        if(a<b)
            break;
        else 
            a-=b;
    }
    return result;
}
 
//get 8-digit puf_address
unsigned int getaddress()
{
    unsigned int address=0;
    
    for (int i = 7; i>=0; i --)
    {
        unsigned char temp=uart_getc();
        if (temp==13)
        {
            address=0xc3000000;
            break;
        }
        else
        {
            uart_putc(temp);
            int add=(int)temp;
            if(48<=add&&add<=57)
                add=add-48;
            if(65<=add&&add<=70)
                add=add-55;
            if(97<=add&&add<=102)
                add=add-87;
            address+=add*(pow(16,i));
        }       
    }
    while(1)
    {
        if(uart_getc()==13)
            return address;
    }
}

// get puf_init_value
uint32_t getinitvalue()
{
    uint32_t result=0;
    unsigned char temp=uart_getc();
    uart_putc(temp);
    if(temp==48)
        result=0;
    if(temp==49)
        result=0xffffffff;
    else
        result=0;
    while(1)
    {
        if(uart_getc()==13)
            return result;
    }
}
// get address_mode
uint32_t getaddmode()
{
    uint32_t result=0;
    unsigned char temp=uart_getc();
    uart_putc(temp);
    if(temp==48)
        result=0;
    if(temp==49)
        result=1;
    else
        result=0;
    while(1)
    {
        if(uart_getc()==13)
            return result;
    }
}

// get puf_size
int getpufsize()
{
    int time=0;
    for(int t=3;t>=0;t--)
    {
        unsigned char temp=uart_getc();
        if (temp==13)
        {
            time=1024;
            return time;
        }
        else
        {
            uart_putc(temp);
            int add=(int)temp;
            add=add-48;
            time+=add*(pow(10,t));
        }
    }
    
    while(1)
    {
        if(uart_getc()==13)
            return time;
    }

}
// get decay_time
int getdecaytime()
{
    int time=0;
    short flag=0;
    unsigned char temp;
    while((int)(temp=uart_getc())!=13)
    {
        uart_putc(temp);
        int add=(int)temp-48;
        time=time*10+add;
        flag=1;
    }
    if(flag==0)
    {
        return 60;
    }
    return time;
}
int getfuncfreq()
{
    int freq=0;
    for(int t=3;t>=0;t--)
    {
        unsigned char temp=uart_getc();
        if (temp==13)
        {
            freq=1;       // default
            return freq;
        }
        else
        {
            uart_putc(temp);
            int add=(int)temp;
            add=add-48;
            freq+=add*(pow(10,t));
        }
    }
    while(1)
    {
        if(uart_getc()==13)
        {
            return freq;
        }
    }
}

// choose mode
int getmode()
{
    int mode=1;
    unsigned char temp=mode_getc();
    uart_putc(temp);
    if(temp==13)
    {
        mode=1;
        return mode;
    }
    else
        mode = temp-48;

    while(1)
    {
        if(uart_getc()==13)
            return mode;
    }
}

// get bank_value
int getbank()
{
    int bankval=0;
    unsigned char temp=uart_getc();
    uart_putc(temp);
    if(temp>=48&&temp<=55)
        bankval=temp-48;
    else
        bankval=0;
    while(1)
    {
        if(uart_getc()==13)
            return bankval;
    }
}

//get row_value
unsigned int getrow()
{
    unsigned int row=0;
    
    for (int i = 3; i>=0; i --)
    {
        unsigned char temp=uart_getc();
        if (temp==13)
        {
            row=0;
            break;
        }
        else
        {
            uart_putc(temp);
            int add=(int)temp;
            if(48<=add&&add<=57)
                add=add-48;
            if(65<=add&&add<=70)
                add=add-55;
            if(97<=add&&add<=102)
                add=add-87;
            row+=add*(pow(16,i));
        }       
    }
    while(1)
    {
        if(uart_getc()==13)
            return row;
    }
}

// get col_value
unsigned int getcol()
{
    unsigned int col=0;
    
    for (int i = 2; i>=0; i --)
    {
        unsigned char temp=uart_getc();
        if (temp==13)
        {
            col=0x0;
            break;
        }
        else
        {
            uart_putc(temp);
            int add=(int)temp;
            if(48<=add&&add<=57)
                add=add-48;
            if(65<=add&&add<=70)
                add=add-55;
            if(97<=add&&add<=102)
                add=add-87;
            col+=add*(pow(16,i));
        }       
    }
    while(1)
    {
        if(uart_getc()==13)
            return col;
    }
}

// get row interval of reading puf
unsigned int getitvl()
{
    unsigned int itvl=0;
    
    for (int i = 3; i>=0; i --)
    {
        unsigned char temp=uart_getc();
        if (temp==13)
        {
            itvl=0x1000;
            break;
        }
        else
        {
            uart_putc(temp);
            int add=(int)temp;
            if(48<=add&&add<=57)
                add=add-48;
            if(65<=add&&add<=70)
                add=add-55;
            if(97<=add&&add<=102)
                add=add-87;
            itvl+=add*(pow(16,i));
        }       
    }
    while(1)
    {
        if(uart_getc()==13)
            return itvl;
    }
}
