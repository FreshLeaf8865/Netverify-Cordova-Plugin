//
//  NVTableViewCell.h
//  JumioMobileSDK
//
//  Created by Lukas Danzer on 14/11/14.
//  Copyright (c) 2014 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMBaseTableViewCell : UITableViewCell

@property (nonatomic, assign) BOOL shouldUpdateSuperViewConstraints;
@property (nonatomic, assign) BOOL shouldUpdateViewConstraints;

- (void) initCell;

@end
