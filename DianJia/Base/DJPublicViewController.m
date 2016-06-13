//
//  DJPublicViewController.m
//  Dian+
//
//  Created by 橡树 on 16/6/12.
//  Copyright © 2016年 olive. All rights reserved.
//

#import "DJPublicViewController.h"

@interface DJPublicViewController()

@property (nonatomic        ) CGFloat   statusFrameHeight;
@property (strong, nonatomic) UIView   *headView;
@property (strong, nonatomic) UILabel  *titleLabel;

@end

@implementation DJPublicViewController
{
    UIView *_headBGView;
    UIView *_lineV;
}

@synthesize statusFrameHeight = _statusFrameHeight;
@synthesize headView = _headView;
@synthesize titleLabel = _titleLabel;

-(instancetype)init
{
    self = [super init];
    if (self) {
        _statusFrameHeight = 0;
        _headBGView = nil;
    }
    
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    //ipad 运行旋转的问题
    [UIViewController attemptRotationToDeviceOrientation];
    
    self.edgesForExtendedLayout = UIRectEdgeNone;
    self.extendedLayoutIncludesOpaqueBars = NO;
    self.automaticallyAdjustsScrollViewInsets = NO;
    
    [self initHeadView];
    
    self.view.backgroundColor = DJ_BASE_COLOR;
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    [UIApplication sharedApplication].statusBarStyle = UIStatusBarStyleDefault;
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation
{
    return (toInterfaceOrientation == UIInterfaceOrientationPortrait);
}

- (BOOL)shouldAutorotate
{
    return NO;
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations
{
    return UIInterfaceOrientationMaskPortrait;//只支持这一个方向(正常的方向)
}

//初始化头部区域
- (void)initHeadView
{
    if (![UIApplication sharedApplication].isStatusBarHidden) {
        if ([UIApplication sharedApplication].statusBarOrientation == UIDeviceOrientationPortraitUpsideDown || [UIApplication sharedApplication].statusBarOrientation == UIDeviceOrientationPortrait) {
            _statusFrameHeight = [[UIApplication sharedApplication] statusBarFrame].size.height;
        }
        else
        {
            _statusFrameHeight = [[UIApplication sharedApplication] statusBarFrame].size.width;
        }
    }
    
    _headBGView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, DJSCREEN_WIDTH                                                           , kTopBarHeight+_statusFrameHeight)];
    [_headBGView setBackgroundColor:[UIColor whiteColor]];
    [self.view addSubview:_headBGView];
    _headView = [[UIView alloc] initWithFrame:CGRectMake(0, _statusFrameHeight, DJSCREEN_WIDTH, kTopBarHeight)];
    [_headBGView addSubview:_headView];
    
    _titleLabel = [[UILabel alloc] initWithFrame:CGRectMake(50, (_headView.bounds.size.height - 30)/2.0, DJSCREEN_WIDTH - 50*2, 30)];
    [_titleLabel setFont:[UIFont fontWithName:@"FZLanTingHeiEL-SC" size:DJ_F18]];
    [_titleLabel setTextColor:DJ_C6];
    [_titleLabel setTextAlignment:NSTextAlignmentCenter];
    [_headView addSubview:_titleLabel];
    
    _lineV =  [[UIView alloc] initWithFrame:CGRectMake(0, _headView.frame.size.height - 1, DJSCREEN_WIDTH, 1)];
    [_lineV setBackgroundColor:[UIColor groupTableViewBackgroundColor]];
    [_headView addSubview:_lineV];
}

- (void)showLine:(BOOL)show
{
    [_lineV setHidden:show];
}
@end
