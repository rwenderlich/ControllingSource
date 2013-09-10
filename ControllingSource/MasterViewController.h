//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Ray Wenderlich on 9/10/13.
//  Copyright (c) 2013 Ray Wenderlich. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
