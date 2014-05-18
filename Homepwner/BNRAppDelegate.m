//
//  BNRAppDelegate.m
//  Homepwner
//
//  Created by Tim McHale on 5/14/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#import "BNRAppDelegate.h"
#import "BNRItemsViewController.h"

@implementation BNRAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
   
    // Create a BNRItemsViewController
    
    BNRItemsViewController *itemsViewController =
    
    [[BNRItemsViewController alloc] init];
    
    // Place BNRItemsViewController's table view in the window hierarchy
    
    
    // Create an instance of a UINavigationController
    // its stack contains only itemsViewController
    UINavigationController *navController = [[UINavigationController alloc]
                                             initWithRootViewController:itemsViewController];
  
    
    // Place navigation controller's view in the window hierarchy
    self.window.rootViewController = navController;
    
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    return YES;
}



@end
