//
//  AppDelegate.h
//  TalkToPi
//
//  Created by Rohan Hawthorne on 29/9/16.
//  Copyright © 2016 Rohan Hawthorne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

