/*_____ I N C L U D E S ____________________________________________________*/

/*_____ D E C L A R A T I O N S ____________________________________________*/
#define bool  _Bool

#ifndef TRUE
#define TRUE  (1)
#endif

#ifndef true
#define true  (1)
#endif

#ifndef FALSE
#define FALSE  (0)
#endif

#ifndef false
#define false  (0)
#endif

#ifndef BIT0
#define BIT0     (0x00000001UL)       ///< Bit 0 mask of an 32 bit integer
#endif

#ifndef BIT1
#define BIT1     (0x00000002UL)       ///< Bit 1 mask of an 32 bit integer
#endif

#ifndef BIT2
#define BIT2     (0x00000004UL)       ///< Bit 2 mask of an 32 bit integer
#endif

#ifndef BIT3
#define BIT3     (0x00000008UL)       ///< Bit 3 mask of an 32 bit integer
#endif

#ifndef BIT4
#define BIT4     (0x00000010UL)       ///< Bit 4 mask of an 32 bit integer
#endif

#ifndef BIT5
#define BIT5     (0x00000020UL)       ///< Bit 5 mask of an 32 bit integer
#endif

#ifndef BIT6
#define BIT6     (0x00000040UL)       ///< Bit 6 mask of an 32 bit integer
#endif

#ifndef BIT7
#define BIT7     (0x00000080UL)       ///< Bit 7 mask of an 32 bit integer
#endif

/*_____ D E F I N I T I O N S ______________________________________________*/


//for nr_micro_shell_command

extern volatile struct flag_32bit flag_SHELL_CMD;
#define FLAG_SHELL_CMD_SOFT_RESET                 	    (flag_SHELL_CMD.bit0)
#define FLAG_SHELL_CMD_GPIO_ON                 	        (flag_SHELL_CMD.bit1)
#define FLAG_SHELL_CMD_GPIO_OFF                 	    (flag_SHELL_CMD.bit2)
#define FLAG_SHELL_CMD_LED_ON                 	        (flag_SHELL_CMD.bit3)
#define FLAG_SHELL_CMD_LED_OFF                 	        (flag_SHELL_CMD.bit4)
#define FLAG_SHELL_CMD_STRING_DISPLAY            	    (flag_SHELL_CMD.bit5)
#define FLAG_SHELL_CMD_REVERSE6                 	    (flag_SHELL_CMD.bit6)
#define FLAG_SHELL_CMD_REVERSE7                 	    (flag_SHELL_CMD.bit7)

/*_____ M A C R O S ________________________________________________________*/

/*_____ F U N C T I O N S __________________________________________________*/

void Timer_1ms_IRQ(void);

void Button_Process_long_counter(void);
void Button_Process_in_polling(void);
void Button_Process_in_IRQ(void);
void UARTx_Process(unsigned char rxbuf);

void LED_Toggle(void);
void loop(void);

void check_reset_source(void);
void RL78_soft_reset(unsigned char flag);
void hardware_init(void);
