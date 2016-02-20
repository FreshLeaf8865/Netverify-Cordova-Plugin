//
//  JMBaseCollapsableView.h
//  JumioMobileSDK
//
//  Created by Cosmin-Valentin Popescu on 24/10/14.
//  Copyright (c) 2014 Jumio Inc. All rights reserved.
//

#import "JMBaseView.h"

extern const CGFloat kJMBaseCollapsableViewDefaultAnimationDuration;

@interface JMBaseCollapsableView : JMBaseView {
    @protected
    CGFloat _topOffset;
    CGFloat _topConstraintOffset;
    
    UIView * _separatorView;
    UIView * _contentView;
    UIView * _contentContainerView;

    NSLayoutConstraint * _contentViewTopMarginConstraint;
    NSLayoutConstraint * _contentViewBottomMarginConstraint;
    NSLayoutConstraint * _contentViewLeadingMarginConstraint;
    NSLayoutConstraint * _contentViewTrailingMarginConstraint;
    
    BOOL _isCollapsed;
}

@property (nonatomic, assign, readonly) BOOL isCollapsed;
@property (nonatomic, assign) UIEdgeInsets contentInset;
@property (nonatomic, assign) NSTimeInterval expandAnimationDuration;
@property (nonatomic, assign) NSTimeInterval collapseAnimationDuration;

- (instancetype)initWithTopOffset:(CGFloat)topOffset;

- (void)expandAnimated:(BOOL)animated completion:(void (^)(void))completion;
- (void)collapseAnimated:(BOOL)animated completion:(void (^)(void))completion;

- (void)willExpandAnimated:(BOOL)animated;
- (void)didExpandAnimated:(BOOL)animated;
- (void)expandAnimated:(BOOL)animated;

- (void)willCollapseAnimated:(BOOL)animated;
- (void)didCollapseAnimated:(BOOL)animated;

- (void)setContentView:(UIView*)contentView;

- (NSArray*)contentViewConstraints;
- (void)updateContentViewConstraintsFrom:(NSArray*)constraints;

- (NSArray*)viewConstraints;
- (void)updateViewConstraintsFrom:(NSArray*)constraints;

- (void)updateSuperviewConstraints;

- (CAShapeLayer*)createLayerMask;

@end
