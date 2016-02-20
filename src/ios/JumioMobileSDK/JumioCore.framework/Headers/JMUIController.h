//
//  JMUIController.h
//  JumioCore
//
//  Created by Cosmin-Valentin Popescu on 16/06/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JMStateMachine;

@interface JMUIController : NSObject

@property (nonatomic, strong, readonly) JMStateMachine*     stateMachine;

- (void) takeOverControl;

- (void)initStateMachine;
- (void)initUI;
- (void)initData;

@end
