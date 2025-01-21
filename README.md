# SimulateSPI
一个通过GPIO模拟SPI通信时序的简易框架，可以方便的在不同平台之间移植。
还在测试阶段，只是一个Demo。
无需修改*.h文件。
通常无需修改simulate_spi.c，它已被配置为应对大多数情况（CSMD=CPOL=CPHA=0），如需特别修改，在//config中修改它。
通常只需要修改simulate_spi_port.c，添加对应平台的GPIO初始化函数以及使能接口。
目前已经在ESP-IDF（ESP32）环境下（CSMD=CPOL=CPHA=0）测试SPI发送可用（st7735屏幕驱动），移植案例将会上传。
我正在尝试用英语写注释，希望你能看懂。
