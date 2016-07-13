//
//  ViewController.h
//  Currency App
//
//  Created by Rachael on 7/13/16.
//  Copyright © 2016 Rachael. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *moneyTextField;
@property (weak, nonatomic) IBOutlet UILabel *moneyLabelResult;
- (IBAction)homeCurrencyButton:(id)sender;
- (IBAction)foreignCurrencyButton:(id)sender;
- (IBAction)updateCurrencyButton:(id)sender;

@end

