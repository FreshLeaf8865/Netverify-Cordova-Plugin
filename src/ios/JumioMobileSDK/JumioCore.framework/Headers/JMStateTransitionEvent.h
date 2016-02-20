//
//  JMStateTransitionEvent.h
//  StateMachineTest
//
//  Created by Cosmin-Valentin Popescu on 11/06/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMStateTransitionEvent : NSObject <NSCopying>
@property (nonatomic, strong, readonly) NSString* name;

+ (instancetype)transitionEventWithName:(NSString*)name;

@end
