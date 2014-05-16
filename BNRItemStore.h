//
//  BNRItemStore.h
//  Homepwner
//
//  Created by Tim McHale on 5/15/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BNRItem;

@interface BNRItemStore : NSObject
@property (nonatomic, readonly) NSArray *allItems;

// Notice that this is a class method and prefixed with a + instead of a -
+ (instancetype)sharedStore;

- (void)moveItemAtIndex:(NSUInteger)fromIndex
                 toIndex:(NSUInteger)toIndex;
- (BNRItem *)createItem;

- (void)removeItem:(BNRItem *)item;@end
