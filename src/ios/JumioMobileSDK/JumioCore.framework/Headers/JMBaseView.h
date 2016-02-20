//
//  NSWBaseView.h
//  NetswipeScanSDK
//
//  Created by iOSDev on 7/17/13.
//  Copyright (c) 2013 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMBaseView : UIView {
    @protected
    BOOL _shouldUpdateViewConstraints;
    BOOL _shouldUpdateSuperViewConstraints;
}

- (void) initControl;
- (void) hideSensitiveData:(BOOL)hide;
- (void) updateViewForOrientation:(UIInterfaceOrientation)interfaceOrientation;


@end
