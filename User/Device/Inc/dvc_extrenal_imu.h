#include "dvc_imu.h"


class Class_External_IMU : public Class_IMU {

  public:
    void Init(float yaw_offset);
    void TIM_Calculate_PeriodElapsedCallback(void);
    void UART_BMI_Data_Process(uint8_t *Buffer);
  

};