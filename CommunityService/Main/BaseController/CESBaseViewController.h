//
//  CESBaseViewController.h
//  CommunityService
//
//  Created by 家浩 on 2016/12/10.
//  Copyright © 2016年 卢家浩. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CESBaseViewController : UIViewController
- (void)showLoading:(BOOL)isLoading;
- (void)backAction;
- (NSString*)getFilePath:(NSString*)filename;

@end
