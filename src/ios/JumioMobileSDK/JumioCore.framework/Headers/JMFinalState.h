//
//  JMFinalState.h
//  StateMachineTest
//
//  Created by Cosmin-Valentin Popescu on 16/06/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JMBaseState.h"

@interface JMFinalState : JMBaseState

+ (instancetype)finalStateWithName:(NSString*)name;

@end
