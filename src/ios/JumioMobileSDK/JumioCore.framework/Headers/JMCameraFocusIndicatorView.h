//
//  JMCameraFocusIndicatorView.h
//  JumioMobileSDK
//
//  Created by Cosmin-Valentin Popescu on 29/09/14.
//  Copyright (c) 2014 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JMBaseView.h"

extern const CGFloat kCameraFocusIndicatorViewWidth;
extern const CGFloat kCameraFocusIndicatorViewHeight;

@interface JMCameraFocusIndicatorView : JMBaseView

- (id)initWithCenter:(CGPoint)centerPos;

@property(nonatomic, strong) UIColor * color;


- (void)setBlinking:(BOOL)isBlinkingOn completion:(void (^)(void))completion;

@end
