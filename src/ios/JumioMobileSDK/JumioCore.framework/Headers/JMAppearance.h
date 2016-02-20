//
//  JMAppearance.h
//  JumioMobileSDK
//
//  Created by Lukas Danzer on 19/01/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMAppearance : NSObject

+ (void) setGeneralAppearanceForClass:(id)containingClass;
+ (UIColor *)submitButtonBackgroundColorForState:(UIControlState)state;
+ (UIColor *)submitButtonTitleColorForState:(UIControlState)state;
+ (UIColor *)cancelButtonBackgroundColorForState:(UIControlState)state;

@end
