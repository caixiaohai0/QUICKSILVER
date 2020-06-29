#include "config.h"
#include "config_helper.h"

#define OmnibusF4SD

#define F4
#define F405

//PORTS
#define SPI_PORTS \
  SPI1_PA5PA6PA7  \
  SPI2_PB13B14B15 \
  SPI3_PC10PC11PC12

#define USART_PORTS \
  USART1_PA10PA9    \
  USART3_PB11PB10   \
  USART6_PC7PC6

#define USB_DETECT_PIN GPIO_Pin_5
#define USB_DETECT_PORT GPIOC

//LEDS
#define LED_NUMBER 1
#define LED1PIN GPIO_Pin_5
#define LED1PORT GPIOB
#define LED1_INVERT
#define BUZZER_PIN GPIO_Pin_4
#define BUZZER_PIN_PORT GPIOB
//#define BUZZER_INVERT
#define FPV_PIN GPIO_Pin_13
#define FPV_PORT GPIOA

//GYRO
#define MPU6XXX_SPI_PORT SPI_PORT1
#define MPU6XXX_NSS PIN_A4
#define MPU6XXX_INT PIN_C4
#define USE_DUMMY_I2C
#define GYRO_ID_1 0x68
#define GYRO_ID_2 0x73
#define GYRO_ID_3 0x78
#define GYRO_ID_4 0x71
#define SENSOR_ROTATE_180

//RADIO
#define USART3_INVERTER_PIN PIN_C9
#define USART6_INVERTER_PIN PIN_C8

#ifdef SERIAL_RX
#define RX_USART USART_PORT1
#define SOFTSPI_NONE
#endif
#ifndef SOFTSPI_NONE
#define RADIO_CHECK
#define SPI_MISO_PIN GPIO_Pin_1
#define SPI_MISO_PORT GPIOA
#define SPI_MOSI_PIN GPIO_Pin_4
#define SPI_MOSI_PORT GPIOB
#define SPI_CLK_PIN GPIO_Pin_10
#define SPI_CLK_PORT GPIOA
#define SPI_SS_PIN GPIO_Pin_6
#define SPI_SS_PORT GPIOB
#endif

//OSD
#define ENABLE_OSD
#define MAX7456_SPI_PORT SPI_PORT3
#define MAX7456_NSS PIN_A15

//VOLTAGE DIVIDER
#define BATTERYPIN GPIO_Pin_2
#define BATTERYPORT GPIOC
#define BATTERY_ADC_CHANNEL ADC_Channel_12
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
#define MOTOR_PIN0 MOTOR_PIN_PA2
#define MOTOR_PIN1 MOTOR_PIN_PA3
#define MOTOR_PIN2 MOTOR_PIN_PB0
#define MOTOR_PIN3 MOTOR_PIN_PB1

// NFE 2in squirt motors
//#define MOTOR_PIN2 MOTOR_PIN_PB1
//#define MOTOR_PIN3 MOTOR_PIN_PA2
//#define MOTOR_PIN0 MOTOR_PIN_PB0
//#define MOTOR_PIN1 MOTOR_PIN_PA3

// NFE 3in 4100kv motors
//#define MOTOR_PIN0 MOTOR_PIN_PB1
//#define MOTOR_PIN1 MOTOR_PIN_PB0
//#define MOTOR_PIN2 MOTOR_PIN_PA3
//#define MOTOR_PIN3 MOTOR_PIN_PA2

//BOBNOVA MOTORS  BOBNOVA MOTORS
//#define MOTOR_PIN0 MOTOR_PIN_PB0
//#define MOTOR_PIN1 MOTOR_PIN_PB1
//#define MOTOR_PIN2 MOTOR_PIN_PA3
//#define MOTOR_PIN3 MOTOR_PIN_PA2
