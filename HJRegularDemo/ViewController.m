//
//  ViewController.m
//  HJRegularDemo
//
//  Created by apple on 2017/3/1.
//  Copyright © 2017年 张洪健. All rights reserved.
//

#import "ViewController.h"
#import "NSString+RegexCategory.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    NSString *str = @"234567890";
    [str isMobileNumber];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
