//
//  NetswipeCardInformation.h
//  NetswipeMobileSDK
//
//  Created by Jumio Inc. on 30/04/2012.
//  Copyright (c) 2012 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    NetswipeCreditCardTypeAll               = 0,        // All types except PrivateLabel and Startbucks
    NetswipeCreditCardTypeVisa              = 1 << 0,
    NetswipeCreditCardTypeMasterCard        = 1 << 1,
    NetswipeCreditCardTypeAmericanExpress   = 1 << 2,
    NetswipeCreditCardTypeDiners            = 1 << 3,
    NetswipeCreditCardTypeDiscover          = 1 << 4,
    NetswipeCreditCardTypeJCB               = 1 << 5,
    NetswipeCreditCardTypeChinaUnionPay     = 1 << 6,
    NetswipeCreditCardTypePrivateLabel      = 1 << 7,   // Does not work in combination with Starbucks
    NetswipeCreditCardTypeStarbucks         = 1 << 8,   // Does not work in combination with PrivateLabel
} NetswipeCreditCardType;

typedef NSUInteger NetswipeCreditCardTypes;
typedef NSUInteger NetswipeUserInterfaceOrientations;

/**
 @class NetswipeCardInformation
 @brief Contains card details returned by a Netswipe Scan.
 */
@interface NetswipeCardInformation : NSObject {}

@property (nonatomic, readonly) NetswipeCreditCardType cardType;      // The card type

@property (nonatomic, strong) NSMutableString *cardNumber;                 // The card number in the format 1234567812345678
@property (nonatomic, strong) NSMutableString *cardNumberGrouped;          // The card number in grouped style (e.g. 1234 5678 1234 5678)
@property (nonatomic, strong) NSMutableString *cardNumberMasked;           // The card number in masked style (e.g. 1234 56** **34 5678)

@property (nonatomic, strong) NSMutableString *cardExpiryDate;             // The expiry date of the card in the format 'MM/yy' (e.g. '01/12')
@property (nonatomic, strong) NSMutableString *cardExpiryMonth;            // The expiry month of the card in the format 'MM' (e.g. '01')
@property (nonatomic, strong) NSMutableString *cardExpiryYear;             // The expiry year of the card in the format 'MM' (e.g. '12')

@property (nonatomic, strong) NSMutableString *cardCVV;                    // The CVV code of the card

@property (nonatomic, strong) NSMutableString *cardHolderName;             // The name of the cardHolder
@property (nonatomic, strong) NSMutableString *cardAccountNumber;          // The UK account number
@property (nonatomic, strong) NSMutableString *cardSortCode;               // The UK sort code

@property (nonatomic, assign) BOOL cardNumberManuallyEntered;
@property (nonatomic, assign) BOOL cardSortCodeValid;                      // The card sort code is valid
@property (nonatomic, assign) BOOL cardAccountNumberValid;                 // The card account number is valid

@property (nonatomic, assign) BOOL nameMatch;                              // Result of name comparison based on the Levenshtein distance algorithm if property name was set (default if cardHolderNameRequired is not enabled: NO)
@property (nonatomic, assign) NSInteger nameDistance;                      // The Levenshtein distance of cardHolderName and the property name (default if cardHolderNameRequired is not enabled: -1).
@property (nonatomic, strong) NSString *encryptedAdyenString;              // The Encrypted ADYEN string

/**
 Retrieve the value of a custom field by its field identifier.
 */
- (NSString*) getCustomField: (NSString*) fieldId;

/**
 Clear all values to prevent sensitive data to be captured.
 */
- (void) clear;

@end
