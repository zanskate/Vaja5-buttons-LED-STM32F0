/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2019 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f0xx_hal.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);

/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/

/* USER CODE END PFP */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  *
  * @retval None
  */
int main(void)
                                                                                               {
  /* USER CODE BEGIN 1 */
GPIO_PinState Tipka1;
GPIO_PinState Tipka2;
GPIO_PinState Tipka3;
GPIO_PinState Tipka4;
GPIO_PinState Tipka5;
GPIO_PinState Tipka6;
  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {

  /* USER CODE END WHILE */

  /* USER CODE BEGIN 3 */
	 
		if (Tipka1==1)   
		{	for (int i=0; i<=9; i++) {    
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_9); 
			HAL_Delay(500);
		}
		}
		else if (Tipka2==1)   
		{	for (int i=0; i<=9; i++) {    
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8); 
			HAL_Delay(500);
		}
		}
		else if (Tipka3==1)   
		{	for (int i=0; i<=4; i++) {    
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8); 
			HAL_Delay(1000);
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8); 
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_9);
			HAL_Delay(1000);
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_9); 
		}
		}
		
		else if (Tipka4==1)
		{   		
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8); 
			HAL_Delay(1000);
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8);
			for (int i=0; i<=4; i++){   		
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_9); 
			HAL_Delay(500);}
			for (int i=0; i<=5; i++){   		
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_9); 
			HAL_Delay(1000);}
			for (int i=0; i<=6; i++){   		
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_9); 
			HAL_Delay(500);}			   		
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8); 
			HAL_Delay(1000);
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8);
			}
		
		else if (Tipka5==1)
		{ for (int i=1000; i>=1; i=i/2){
				HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_9);
				HAL_Delay(i);
				HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_9);
				HAL_Delay(i);
			}
		}
		else if (Tipka6==1)
		{ for (int i=1; i<=1000; i=i*2){
				HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_9);
				HAL_Delay(i);
				HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_9);
				HAL_Delay(i);
				HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8);
				HAL_Delay(i);
				HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8);
				HAL_Delay(i);
			}
		}
		Tipka1 = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_10);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, Tipka1);
		Tipka2 = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_11);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, Tipka2);
		Tipka3=HAL_GPIO_ReadPin (GPIOB, GPIO_PIN_12);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9 & GPIO_PIN_8, Tipka3);
		Tipka4=HAL_GPIO_ReadPin (GPIOB, GPIO_PIN_13);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9 & GPIO_PIN_8, Tipka4);
		Tipka5=HAL_GPIO_ReadPin (GPIOB, GPIO_PIN_14);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, Tipka5);
		Tipka6=HAL_GPIO_ReadPin (GPIOB, GPIO_PIN_15);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9 & GPIO_PIN_8, Tipka6);
		
		
	}
  /* USER CODE END 3 */

}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = 16;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL12;
  RCC_OscInitStruct.PLL.PREDIV = RCC_PREDIV_DIV1;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Systick interrupt time 
    */
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

    /**Configure the Systick 
    */
  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

/** Configure pins as 
        * Analog 
        * Input 
        * Output
        * EVENT_OUT
        * EXTI
*/
static void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct;

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, LD4_Pin|LD3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : PB10 PB11 PB12 PB13 
                           PB14 PB15 */
  GPIO_InitStruct.Pin = GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13 
                          |GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : LD4_Pin LD3_Pin */
  GPIO_InitStruct.Pin = LD4_Pin|LD3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  file: The file name as string.
  * @param  line: The line in file as a number.
  * @retval None
  */
void _Error_Handler(char *file, int line)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  while(1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/