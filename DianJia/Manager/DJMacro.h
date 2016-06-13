//
//  DJMacro.h
//  DianJia
//
//  Created by 橡树 on 16/6/12.
//  Copyright © 2016年 olive. All rights reserved.
//

#ifndef DJMacro_h
#define DJMacro_h

//---------------------基本-------------------------
// 系统控件默认高度
#define kStatusBarHeight        (20.f)

#define kTopBarHeight           (44.f)
#define kBottomBarHeight        (49.f)

#define kCellDefaultHeight      (44.f)

#define kEnglishKeyboardHeight  (216.f)
#define kChineseKeyboardHeight  (252.f)

//按设备宽度做适配
#define DJSCALE_WIDTH(x)          (([UIScreen mainScreen].bounds.size.width/320.0)*(x))

#define DJSCREEN_WIDTH            [UIScreen mainScreen].bounds.size.width
#define DJSCREEN_HEIGHT           [UIScreen mainScreen].bounds.size.height

// View 坐标(x,y)和宽高(width,height)
#define DJX(v)                    (v).frame.origin.x
#define DJY(v)                    (v).frame.origin.y
#define DJWIDTH(v)                (v).frame.size.width
#define DJHEIGHT(v)               (v).frame.size.height

#define DJMinX(v)                 CGRectGetMinX((v).frame)
#define DJMinY(v)                 CGRectGetMinY((v).frame)

#define DJMidX(v)                 CGRectGetMidX((v).frame)
#define DJMidY(v)                 CGRectGetMidY((v).frame)

#define DJMaxX(v)                 CGRectGetMaxX((v).frame)
#define DJMaxY(v)                 CGRectGetMaxY((v).frame)


//-----------------------颜色尺寸------------------------
#pragma mark -  字体大小(常规/粗体)

#define DJ_F12      (12)
#define DJ_F13      (13)
#define DJ_F14      (14)
#define DJ_F15      (15)
#define DJ_F18      (18)
#define DJ_F20      (20)
#define DJ_F22      (22)
#define DJFont(_size_)          [UIFont fontWithName:@"FZLanTingHeiEL-SC" size:_size_]

#pragma mark -  颜色(RGB)
#define DJRGBCOLOR(r, g, b)       [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define DJRGBACOLOR(r, g, b, a)   [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

#define DJ_C0                   DJRGBCOLOR(255, 255, 255)
#define DJ_C1                   DJRGBCOLOR(240, 242, 243)
#define DJ_C2                   DJRGBCOLOR(204, 214, 221)
#define DJ_C3                   DJRGBCOLOR(179, 179, 179)
#define DJ_C4                   DJRGBCOLOR(160, 173, 184)
#define DJ_C5                   DJRGBCOLOR(136, 153, 166)
#define DJ_C6                   DJRGBCOLOR(51, 51, 51)
#define DJ_C7                   DJRGBCOLOR(212, 212, 212)
#define DJ_C8                   DJRGBCOLOR(86, 96, 104)
#define DJ_BASE_COLOR           DJRGBCOLOR(242, 242, 242)


//---------------------设备-------------------------
#define isRetina4 (([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO) || CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] bounds].size))
#define isRetina5 (([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO) || CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] bounds].size))
#define isPad ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(768, 1024), [[UIScreen mainScreen] currentMode].size) : NO)
#define isRetinaPad ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(768*2, 1024*2), [[UIScreen mainScreen] currentMode].size) : NO)
#define isRetina6 (([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO))
#define isRetina6plus (([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO) || ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) : NO))

#define IS_IOS7 (floor(NSFoundationVersionNumber) > NSFoundationVersionNumber_iOS_6_1 && floor(NSFoundationVersionNumber) <= NSFoundationVersionNumber_iOS_7_1)
#define IS_IOS8  ([[[UIDevice currentDevice] systemVersion] compare:@"8" options:NSNumericSearch] != NSOrderedAscending)
#define IS_IPHONE6PLUS ((UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone) && [[UIScreen mainScreen] nativeScale] == 3.0f)
// 是否模拟器
#define isSimulator (NSNotFound != [[[UIDevice currentDevice] model] rangeOfString:@"Simulator"].location)

#endif /* DJMacro_h */
