//
//  ExchangeRate.m
//  Currency App
//
//  Created by Rachael on 7/13/16.
//  Copyright © 2016 Rachael. All rights reserved.
//

#import "ExchangeRate.h"

@implementation ExchangeRate

-(bool) updateRate{
    https://query.yahooapis.com/v1/public/yql?q=select%20*%20from%20yahoo.finance.xchange%20where%20pair%20in%20(%22%@%@%22)&format=json&diagnostics=true&env=store%3A%2F%2Fdatatables.org%2Falltableswithkeys&callback=
}

@end
