//
//  JMStateMachine.h
//  StateMachineTest
//
//  Created by Cosmin-Valentin Popescu on 11/06/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JMBaseState;
@class JMStateTransitionEvent;

@interface JMStateMachine : NSObject

@property (nonatomic, strong, readonly) JMBaseState* 	initialState;
@property (nonatomic, strong, readonly) JMBaseState*    currentState;
@property (nonatomic, assign, readonly) BOOL            isActive;

+ (instancetype)stateMachine;

- (BOOL)canFireEventWithName:(NSString*)eventName;
- (BOOL)fireEventWithName:(NSString*)eventName;

- (void)addState:(JMBaseState*)state;
- (void)removeState:(JMBaseState*)state;

- (void)activate;
- (void)reset;

- (BOOL) isCurrentStateName:(NSString *)name;
- (JMBaseState *)stateWithName:(NSString *)name;
- (NSSet*)allStates;

@end
