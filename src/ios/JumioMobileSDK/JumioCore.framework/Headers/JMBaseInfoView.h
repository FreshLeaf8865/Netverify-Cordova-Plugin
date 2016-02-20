//
//  JMBaseInfoView.h
//  JumioMobileSDK
//
//  Created by Cosmin-Valentin Popescu on 13/10/14.
//  Copyright (c) 2014 Jumio Inc. All rights reserved.
//

#import "JMBaseView.h"

extern const CGFloat kJMBaseInfoViewDefaultPortraitHeight;

@class JMBaseInfoView;

@protocol JMBaseInfoViewDelegate <NSObject>

@end

@interface JMBaseInfoView : JMBaseView {
    @protected
    UIView* _contentView;
    
    NSLayoutConstraint * _contentViewTopMarginConstraint;
    NSLayoutConstraint * _contentViewBottomMarginConstraint;
    NSLayoutConstraint * _contentViewLeadingMarginConstraint;
    NSLayoutConstraint * _contentViewTrailingMarginConstraint;
}

@property (nonatomic, weak) id<JMBaseInfoViewDelegate>delegate;
@property (nonatomic, assign) UIEdgeInsets contentInset;

- (void)setContent:(UIView*)contentView;

+ (CGFloat)heightInSuperViewForOrientation:(UIInterfaceOrientation)interfaceOrientation;

@end
