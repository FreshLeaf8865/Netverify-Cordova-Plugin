//
//  JMStateTransition.h
//  StateMachineTest
//
//  Created by Cosmin-Valentin Popescu on 11/06/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JMBaseState;
@class JMStateTransitionEvent;

@interface JMStateTransition : NSObject <NSCopying>
@property (nonatomic, strong, readonly) NSString*               name;
@property (nonatomic, strong, readonly) JMBaseState*            targetState;
@property (nonatomic, strong, readonly) JMBaseState*            sourceState;
@property (nonatomic, strong, readonly) JMStateTransitionEvent* event;

+ (instancetype)transitionWithName:(NSString*)name sourceState:(JMBaseState*)sourceState targetState:(JMBaseState*)targetState event:(JMStateTransitionEvent*)event;

@end
