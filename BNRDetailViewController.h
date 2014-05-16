//
//  BNRDetailViewController.h
//  Homepwner
//
//  Created by Tim McHale on 5/15/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNRItem;

@interface BNRDetailViewController : UIViewController

@property (nonatomic, strong) BNRItem *item;

@end