//
//  Currency.h
//  Currency App
//
//  Created by Rachael on 7/13/16.
//  Copyright © 2016 Rachael. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Currency : NSObject <NSCoding>

@property (strong, nonatomic) NSString* name;
@property (strong, nonatomic) NSString* alphaCode;
@property (strong, nonatomic) NSString* symbol;
@property (strong, nonatomic) NSNumberFormatter* formatter;
-(Currency*) initWithName:(NSString*) aName
                alphaCode: (NSString*) aCode
                   symbol: (NSString*) aSymbol
            decimalPlaces: (NSNumber*) places;
-(NSString*) description;
-(NSString*) format: (NSNumber*) quantity;

@end
