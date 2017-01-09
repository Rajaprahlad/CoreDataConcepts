//
//  AppDelegate.h
//  CoreDataConcepts
//
//  Created by Prahlad on 1/9/17.
//  Copyright © 2017 Prahlad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

