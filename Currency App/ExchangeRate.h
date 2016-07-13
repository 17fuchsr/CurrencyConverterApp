//
//  ExchangeRate.h
//  Currency App
//
//  Created by Rachael on 7/13/16.
//  Copyright © 2016 Rachael. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Currency.h"

@interface ExchangeRate : NSObject <NSCoding>

@property (strong, nonatomic) Currency* home;
@property (strong, nonatomic) Currency* foreign;
@property (strong, nonatomic) NSNumber* rate;
@property (strong, nonatomic) NSDate* expiresOn;
-(bool) updateRate;
-(NSString*) exchangeToHome: (NSNumber*) value;
-(NSString*) exchangeToForeign: (NSNumber*) value;
-(NSString*) name; //concatonates names of exchange rates
-(NSString*) description;
-(void) reverse; //reverse home and foreign
-(ExchangeRate*)initWithHome: (Currency*) aHome
                      foreign: (Currency*) aForeign;

@end
