//
//  DJPublicViewController.h
//  DianJia
//
//  Created by 橡树 on 16/3/16.
//  Copyright © 2016年 olive. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DJPublicViewController : UIViewController

@property (readonly, nonatomic) CGFloat statusFrameHeight;
/** 控制器头部view */
@property (readonly, nonatomic) UIView *headView;
/** 标题栏 */
@property (readonly, nonatomic) UILabel *titleLabel;

- (void)showLine:(BOOL)show;

@end
