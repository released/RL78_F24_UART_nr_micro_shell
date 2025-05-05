# RL78_F24_UART_nr_micro_shell
RL78_F24_UART_nr_micro_shell

udpate @ 2025/05/05

1. init UART , P15 , P16 for printf log , by implement nr_micro_shell

https://github.com/Nrusher/nr_micro_shell

2. below is power on log , 

![image](https://github.com/released/RL78_F24_UART_nr_micro_shell/blob/main/log1.jpg)

3. list the support command 

```c
ls -l

```
![image](https://github.com/released/RL78_F24_UART_nr_micro_shell/blob/main/log_ls_l.jpg)

```c
?

```
![image](https://github.com/released/RL78_F24_UART_nr_micro_shell/blob/main/log_q_mark.jpg)

4. list the command option 

```c
ls -h
ls -v

```
![image](https://github.com/released/RL78_F24_UART_nr_micro_shell/blob/main/log_ls_h_ls_v.jpg)

5. simple test command 

```c
test 1
test a b c 1 2 3
test aa

```
![image](https://github.com/released/RL78_F24_UART_nr_micro_shell/blob/main/log_test.jpg)


6. software reset command , use tab to complete the support command

```c
software_reset

```
![image](https://github.com/released/RL78_F24_UART_nr_micro_shell/blob/main/log_soft_reset.jpg)

7. GPIO , LED command 

```c
gpio1_on
gpio1_off
led on
led off

```
![image](https://github.com/released/RL78_F24_UART_nr_micro_shell/blob/main/log_gpio_led.jpg)

8. simple test : prinf log message

```c
string

```
![image](https://github.com/released/RL78_F24_UART_nr_micro_shell/blob/main/log_string.jpg)




