//
//  HJRegular.h
//  HJRegularDemo
//
//  Created by apple on 2017/3/1.
//  Copyright © 2017年 张洪健. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HJRegular : NSObject

/**
 *  判断手机号码格式是否正确
 *
 *  @param mobile 手机号
 */
+ (BOOL)validateMobile:(NSString *)mobile;
/**
 *  利用正则表达式验证
 *
 *  @param email 邮箱
 */
+ (BOOL)validateEmail:(NSString *)email;
/**
 *  判断字符串中是否含有中文
 *
 *  @param string 字符串
 */
+ (BOOL)isHaveChineseInString:(NSString *)string;
/**
 *  判断字符串是否全部为数字
 *
 *  @param string 字符串
 */
+ (BOOL)isAllNumber:(NSString *)string;

@end
