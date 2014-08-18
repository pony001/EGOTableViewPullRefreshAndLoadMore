//
//  DemoViewController.h
//  Demo
//
//  Created by Jack Shi on 18/08/2014.
//  Copyright (c) 2014 Jack Shi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGORefreshTableHeaderView.h"
#import "LoadMoreTableFooterView.h"

@interface DemoViewController : UITableViewController<EGORefreshTableHeaderDelegate, LoadMoreTableFooterDelegate>

@end