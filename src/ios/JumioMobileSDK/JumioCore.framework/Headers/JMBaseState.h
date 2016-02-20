//
//  JMBaseState.h
//  StateMachineTest
//
//  Created by Cosmin-Valentin Popescu on 16/06/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JMStateMachine;
@class JMStateTransition;

@interface JMBaseState : NSObject <NSCopying>

@property (nonatomic, strong, readonly) NSString*       name;
@property (nonatomic, weak)             JMStateMachine* stateMachine;

@property (nonatomic, copy) void (^willEnterStateBlock)(JMStateTransition *);
@property (nonatomic, copy) void (^didEnterStateBlock)(JMStateTransition *);
@property (nonatomic, copy) void (^willExitStateBlock)(JMStateTransition *);
@property (nonatomic, copy) void (^didExitStateBlock)(JMStateTransition *);


- (instancetype)initWithName:(NSString*)name;

@end
