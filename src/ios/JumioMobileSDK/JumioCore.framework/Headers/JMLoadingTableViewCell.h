//
//  JMLoadingTableViewCell.h
//  JumioCore
//
//  Created by Cosmin-Valentin Popescu on 29/09/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <JumioCore/JumioCore.h>

extern const CGFloat JMLoadingTableViewCellRightMargin;

@interface JMLoadingTableViewCell : JMBaseTableViewCell

@property (nonatomic, assign, getter=isLoading) BOOL loading;

@end
