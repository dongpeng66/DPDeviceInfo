//
//  ViewController.m
//  DPDeviceInfo
//
//  Created by dp on 17/5/12.
//  Copyright © 2017年 dp. All rights reserved.
//

#import "ViewController.h"
#import "DPDeviceInfo.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    NSString *device=[DPDeviceInfo dp_getDeviceIDFA];
    NSLog(@"%@",device);
    NSString *Macdevice=[DPDeviceInfo dp_getDeviceMAC];
    NSLog(@"%@",Macdevice);
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
