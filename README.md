


## Useage

##直接把 DPDeviceInfo文件中的文件拖到项目中,导入DPDeviceInfo.h就可以用了</br>
##example</br>
##获取的IDFA标识符  不会因为卸载程序而改变</br>
  NSString *device=[DPDeviceInfo dp_getDeviceIDFA];</br>

  NSString *Macdevice=[DPDeviceInfo dp_getDeviceMAC];</br>
  优化了.a问价在真机上的问题和兼容性问题;</br>



