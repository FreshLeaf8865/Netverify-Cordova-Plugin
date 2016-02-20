//
//  JMNetworkStateConstants.h
//  JumioCore
//
//  Created by Lukas Danzer on 04/08/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

//State Constant(s)
extern NSString* const kJMNetworkStateIdleState;
extern NSString* const kJMNetworkStatePendingState;
extern NSString* const kJMNetworkStateErrorState;
extern NSString* const kJMNetworkStateSuccessState;
extern NSString* const kJMNetworkStateFinalState;

//Transition Constant(s)
extern NSString* const kJMNetworkStateTransitionPending;
extern NSString* const kJMNetworkStateTransitionError;
extern NSString* const kJMNetworkStateTransitionSuccess;
extern NSString* const kJMNetworkStateTransitionFinal;

//Transition Event Constant(s)
extern NSString* const kJMNetworkStateTransitionEventToPending;
extern NSString* const kJMNetworkStateTransitionEventToError;
extern NSString* const kJMNetworkStateTransitionEventToSuccess;
extern NSString* const kJMNetworkStateTransitionEventToFinal;
