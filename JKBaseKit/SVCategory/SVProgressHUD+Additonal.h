//
//  SVProgressHUD+Additonal.h
//  
//
//  Created by 刘伟强 on 2017/4/27.
//
//

#import <SVProgressHUD/SVProgressHUD.h>

#import "JKBaseKit.h"

@interface SVProgressHUD (Additonal)

+ (void)jk_show;

+ (void)jk_dismiss;

+ (void)jk_showSuccessWithStatus:(NSString *)status;

+ (void)jk_showErrorWithStatus:(NSString *)status;

@end