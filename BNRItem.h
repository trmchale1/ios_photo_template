//
//  BNRItem.h
//  Homepwner
//
//  Created by Tim McHale on 5/14/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject



@property (nonatomic)NSString *itemName;
@property (nonatomic)NSString *serialNumber;
@property (nonatomic)int valueInDollars;
@property (nonatomic, readonly, strong)NSDate *dateCreated;
@property (nonatomic, copy) NSString *itemKey;


+ (instancetype)randomItem;

// Designated initializer
- (instancetype)initWithItemName:(NSString *)name
                   valueInDollars:(int)value
                     serialNumber:(NSString *)sNumber;

- (instancetype)initWithItemName:(NSString *)name;


@end
