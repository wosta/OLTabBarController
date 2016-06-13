//
//  DJMyViewController.m
//  DianJia
//
//  Created by 橡树 on 16/6/12.
//  Copyright © 2016年 olive. All rights reserved.
//

#import "DJMyViewController.h"

@interface DJMyViewController ()

@end

@implementation DJMyViewController

- (instancetype)init
{
    self = [super init];
    if (self) {
        
    }
    return self;
}

- (void)dealloc {}

- (void)viewWillAppear:(BOOL)animated {}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
//    self.headView.backgroundColor = [UIColor orangeColor];
//    self.titleLabel.text = @"个人中心";
//    self.titleLabel.backgroundColor = [UIColor greenColor];
//    [self.titleLabel showPlaceHolder];
    [self navigationAboutUserInfo];
}

- (void)navigationAboutUserInfo {

}

#pragma mark - IBActions/Event Response
- (void)submitData:(id)sender {}
- (void)someButtonDidPressed:(UIButton*)button {}

#pragma mark - Protocol conformance
#pragma mark - UITextFieldDelegate
#pragma mark - UITableViewDataSource
#pragma mark - UITableViewDelegate

#pragma mark - PublicMethod
- (void)publicMethod {}

#pragma mark - PrivateMethod
- (void)privateMethod {}

#pragma mark - Custom Accessors 自定义属性setter  getter方法

#pragma mark - NSCopying
- (instancetype)copyWithZone:(NSZone *)zone {
    return nil;
}

#pragma mark - NSObject
- (NSString *)description {
    return nil;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
