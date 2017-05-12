//
//  DPKeyChain.h
//  keychain存储
//
//  Created by dp on 17/3/21.
//  Copyright © 2017年 dp. All rights reserved.
//
/**
 
 #import "DPKeyChain.h"
 NSString * const KEY_USERNAME = @"com.JFB.app.username";
 NSString * const KEY_PASSWORD = @"com.JFB.app.password";
 @interface ViewController ()
 
 @end
 
 @implementation ViewController
 
 - (void)viewDidLoad {
 [super viewDidLoad];
 // Do any additional setup after loading the view, typically from a nib.
 ///记住密码
 [DPKeyChain addKeychainData:@"张三" forKey:KEY_USERNAME];
 [DPKeyChain addKeychainData:@"123456" forKey:KEY_PASSWORD];
 if ([DPKeyChain getKeychainDataForKey:KEY_USERNAME] && [DPKeyChain getKeychainDataForKey:KEY_PASSWORD]) {
 
 NSString *keyUserName=[NSString stringWithFormat:@"%@",[DPKeyChain getKeychainDataForKey:KEY_USERNAME]];
 NSString *keyPassWord=[NSString stringWithFormat:@"%@",[DPKeyChain getKeychainDataForKey:KEY_PASSWORD]];
 }
 }
 */

#define accessGroupItem @"XXXXX.GrassInfoAppFamily"
#import <Foundation/Foundation.h>

#import <Security/Security.h>
@interface DPKeyChain : NSObject
+ (id)getKeychainDataForKey:(NSString *)key;
+ (void)addKeychainData:(id)data forKey:(NSString *)key;
+ (void)deleteKeychainDataForKey:(NSString *)key;
+ (void)addShareKeyChainData:(id)data forKey:(NSString *)key;
@end
