/*
BSD 3-Clause License

Copyright (c) 2021, SadatRafi
All rights reserved.

*/

#include "stm32f4xx.h"                  // Device header
#include "arm_math.h"                   // ARM::CMSIS:DSP

int main(void)
{
	float32_t a[8] = 
		{
			0  , 1,
		        2  , 3,
			1  , 0,
			5  , 2,
		};
	float32_t b[8] = 
		{
			1  , 7,
		        2  , 0,
			5  , 2,
			1  , 0,
		};
	float32_t sum[8];
	
	arm_matrix_instance_f32 A;
	arm_matrix_instance_f32 B;
	arm_matrix_instance_f32 SUM;
	
	arm_mat_init_f32(&A, 4 , 2 , (float32_t *)a);
	arm_mat_init_f32(&B, 4 , 2 , (float32_t *)b);
	arm_mat_init_f32(&SUM, 4 , 2 , (float32_t *)sum);
		
	arm_mat_add_f32(&A, &B, &SUM);
	while(1)
	{
	
	}
}
