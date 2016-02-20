//
//  JMRoi.h
//  CardOverlayTesst
//
//  Created by Cosmin-Valentin Popescu on 10/11/14.
//  Copyright (c) 2014 Jumio Inc. All rights reserved.
//

#import "JMBaseView.h"


@interface JMRoi : JMBaseView {
@protected
    UIRectCorner    _roundCorners;
    CGFloat         _roundCornersRadius;
    CGFloat         _contentInset;
}

@property (nonatomic, assign, readonly) UIRectCorner roundCorners;
@property (nonatomic, assign, readonly) CGFloat roundCornersRadius;
@property (nonatomic, assign, readonly) CGFloat contentInset;


- (CGSize)cornerRadii;
- (CGRect)cropRect;
- (UIBezierPath *)cropBezierPathFromCropRect:(CGRect)cropRect;


@end
