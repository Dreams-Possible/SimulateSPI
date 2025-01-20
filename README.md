# SimulateSPI
一个通过GPIO模拟SPI通信时序的简易框架，可以方便的在不同平台之间移植。
还在测试阶段，只是一个Demo。
无需修改simulate_spi，只需要修改simulate_spi_port中的内容。
目前已经在ESP-IDF（ESP32）环境下测试SPI发送可用（st7735屏幕驱动），移植案例将会上传。
