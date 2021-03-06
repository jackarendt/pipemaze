//
//  AppDelegate.h
//  Pipe Maze
//
//  Created by Jack Arendt on 1/12/15.
//  Copyright (c) 2015 John Arendt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class WorldDAO;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic, strong) WorldDAO *worldDAO;
@property (nonatomic, strong) UIColor *pipeColor;
@property (nonatomic, strong) UIColor *blockColor;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

