//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Ray Wenderlich on 9/10/13.
//  Copyright (c) 2013 Ray Wenderlich. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
