//
//  DPDeviceInfo.h
//  设备唯一标识符
//
//  Created by dp on 17/4/1.
//  Copyright © 2017年 dp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DPDeviceInfo : NSObject
/**
 *
 
 IDFA-identifierForIdentifier（广告标示符），在同一个设备上的所有 APP 都会取到相同的值，是苹果专门给各广告提供商用来追踪用户而设定的。虽然 iPhone 默认是允许追踪的，而且一般用户都不知道有这么个设置，但是用户可以在 设置 - 隐私 - 广告追踪 里重置此 ID 的值，或者限制此 ID 的使用，所以有可能会取不到值。
 *  method  获取设备IDFA
 *  @return 设备IDFA
 */
+(NSString *)dp_getDeviceIDFA;

/**
 *  IDFV-identifierForVendor（Vendor 标示符），通过 [UIDevice currentDevice].identifierForVendor.UUIDString 来获取。是通过 bundleID 的反转的前两部分进行匹配，如果相同是同一个 Vendor ，例如对于 com.mayan.app_1 和 com.mayan.app_2 这两个 bundleID 来说，就属于同一个 Vendor ，共享同一个 IDFV，和 IDFA 不同的是，IDFV 的值一定能取到的，所以非常适合于作为内部用户行为分析的主 ID 来识别用户。但是用户删除了该 APP ，则 IDFV 值会被重置，再次安装此 APP ，IDFV 的值和之前的不同。
 
  所以用 IDFV + keychain  来存储设备的唯一标识符
 *  method  获取设备IDFV
 *  @return 设备IDFV
 */
+(NSString *)dp_getDeviceIDFV;

/**
 *  //Git上的erica的UIDevice扩展文件，以前可用但由于IOKit framework没有公开，所以也无法使用。就算手动导入，依旧无法使用，看来获取IMEI要失败了,同时失败的还有IMSI。不过还存在另外一种可能，Stack Overflow上有人提供采用com.apple.coretelephony.Identity.get entitlement方法，but device must be jailbroken；在此附上链接，供大家参考：http://stackoverflow.com/questions/16667988/how-to-get-imei-on-iphone-5/16677043#16677043
 *  method  获取设备IMEI
 *  @return 设备IMEI
 */
//+(NSString*)dp_getDeviceIMEI;

/**
 *
 *  method  获取设备MAC
 *  @return 设备MAC
 */
+(NSString*)dp_getDeviceMAC;

/**
 * 开发者可以在应用第一次启动时调用一 次（每次生成的都不一样），然后将该串存储起来，替代UDID来使用。但是，如果用户删除该应用再次安装时，又会生成新的字符串，所以不能保证唯一识别该设备。使用UUID，就要考虑应用被删除后再重新安装时的处理。一个解决的办法是：UUID一般只生成一次，保存在iOS系统里面，如果应用删除了，重装应用之后它的UUID还是一样的，除非系统重置 。但是不能保证在以后的系统升级后还能用（如果系统保存了该信息就能用）。
 *  method  获取设备UUID
 *  @return 设备UUID
 */
+(NSString*)dp_getDeviceUUID;

/**
 *  现在应用试图获取 UDID 已被禁止且不允许上架。
 *  method  获取设备UDID
 *  @return 设备UDID
 */
//+(NSString*)dp_getDeviceUDID;

@end
