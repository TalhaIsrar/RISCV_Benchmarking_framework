void uart_putc(char c) // Write single character
{
    // volatile pointer so compiler does not optimze away memory access
    volatile char *uart_tx = (char *)0xFFFF0000;
    *uart_tx = c;
}

// Writes null terminated string to UART
void uart_puts(const char *str)
{
    while (*str)
    {
        uart_putc(*str++);
    }
}

void uart_puthex(unsigned int x)
{
    for (int i = 28; i >= 0; i -= 4)
    {
        unsigned int nibble = (x >> i) & 0xF;
        uart_putc(nibble < 10 ? ('0' + nibble) : ('A' + nibble - 10));
    }
    uart_putc('\n');
}

void uart_putint(int x)
{
    if (x < 0)
    {
        uart_putc('-');
        x = -x;
    }

    char buf[12];
    int i = 0;

    do {
        buf[i++] = '0' + (x % 10);
        x /= 10;
    } while (x);

    while (i--)
        uart_putc(buf[i]);

    uart_putc('\n');
}


void test_m_div0(void)
{
    uart_puts("M div0\n");

    volatile int a = 123;
    volatile int b = 0;

    uart_puts("DIV  by 0 = ");
    uart_puthex(a / b);   // should be -1

    uart_puts("REM  by 0 = ");
    uart_puthex(a % b);   // should be a
}

void test_m_mulh(void)
{
    uart_puts("M mulh\n");

    volatile int a = -2000000000;
    volatile int b = 3;

    long long ref = (long long)a * (long long)b;

    uart_puts("MUL  = ");
    uart_puthex((unsigned int)ref);

    uart_puts("MULH = ");
    uart_puthex((unsigned int)(ref >> 32));
}


int main(void)
{
    uart_puts("Start\n");
    test_m_div0();
    test_m_mulh();
    uart_puts("End\n");
    return 0;
}
