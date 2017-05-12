


## Useage

##直接把 DPDeviceInfo文件中的文件拖到项目中,导入DPDeviceInfo.h就可以用了
##example
##获取的IDFA标识符  不会因为卸载程序而改变
  NSString *device=[DPDeviceInfo dp_getDeviceIDFA];

  NSString *Macdevice=[DPDeviceInfo dp_getDeviceMAC];



