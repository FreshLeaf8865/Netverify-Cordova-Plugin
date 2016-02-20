//
//  JMState.h
//  StateMachineTest
//
//  Created by Cosmin-Valentin Popescu on 11/06/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JMBaseState.h"


@class JMStateTransition;
@class JMStateMachine;
@class JMStateTransitionEvent;

@interface JMState : JMBaseState <NSCopying>

- (void)addTransition:(JMStateTransition*)transition;
- (void)addTransitionToTarget:(JMBaseState*)targetState withName:(NSString*)name forEvent:(JMStateTransitionEvent*)event;
- (void)removeTransition:(JMStateTransition*)transition;

- (NSSet* const)transitionsSet;

+ (instancetype)stateWithName:(NSString*) name;


@end
