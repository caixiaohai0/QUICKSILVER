#include "config.h"
#include "config_helper.h"

#define Nox

#define F4
#define F411

//PORTS
#define SPI_PORTS   \
  SPI1_PA5PA6PA7    \
  SPI2_PB13PB14PB15 \
  SPI3_PB3PB4PB5

#define USART_PORTS \
  USART1_PB7PB6     \
  USART2_PA3PA2

//#define USB_DETECT_PIN GPIO_Pin_5
//#define USB_DETECT_PORT GPIOC

//LEDS, Buzzer, FPV
#define LED_NUMBER 1
#define LED1PIN GPIO_Pin_4
#define LED1PORT GPIOA
#define LED1_INVERT
#define BUZZER_PIN GPIO_Pin_13
#define BUZZER_PIN_PORT GPIOC
#define BUZZER_INVERT
#define FPV_PIN GPIO_Pin_13
#define FPV_PORT GPIOA

//GYRO
#define MPU6XXX_SPI_PORT SPI_PORT2
#define MPU6XXX_NSS PIN_B12
#define MPU6XXX_INT PIN_A8
#define USE_DUMMY_I2C
#define SENSOR_ROTATE_90_CW
#define GYRO_ID_1 0x68
#define GYRO_ID_2 0x73
#define GYRO_ID_3 0x78
#define GYRO_ID_4 0x71
//#define DISABLE_GYRO_CHECK

//RADIO
#define USART2_INVERTER_PIN PIN_C14

#ifdef SERIAL_RX
#define RX_USART USART_PORT2
#define SOFTSPI_NONE
#endif

#ifndef SOFTSPI_NONE //sort this out later for use of bayang
#define RADIO_CHECK
#define SPI_MISO_PIN GPIO_Pin_7
#define SPI_MISO_PORT GPIOB
#define SPI_MOSI_PIN GPIO_Pin_6
#define SPI_MOSI_PORT GPIOB
#define SPI_CLK_PIN GPIO_Pin_3
#define SPI_CLK_PORT GPIOA
#define SPI_SS_PIN GPIO_Pin_2
#define SPI_SS_PORT GPIOA
#endif

// OSD
#define ENABLE_OSD
#define MAX7456_SPI_PORT SPI_PORT2
#define MAX7456_NSS PIN_A10

//VOLTAGE DIVIDER
#define BATTERYPIN GPIO_Pin_5
#define BATTERYPORT GPIOA
#define BATTERY_ADC_CHANNEL ADC_Channel_5

#ifndef VOLTAGE_DIVIDER_R1
#define VOLTAGE_DIVIDER_R1 10000
#endif

#ifndef VOLTAGE_DIVIDER_R2
#define VOLTAGE_DIVIDER_R2 1000
#endif

#ifndef ADC_REF_VOLTAGE
#define ADC_REF_VOLTAGE 3.3
#endif

// MOTOR PINS
//S3_OUT
#define MOTOR_PIN0 MOTOR_PIN_PB8
//S4_OUT
#define MOTOR_PIN1 MOTOR_PIN_PB1
//S1_OUT
#define MOTOR_PIN2 MOTOR_PIN_PA1
//S2_OUT
#define MOTOR_PIN3 MOTOR_PIN_PA7
