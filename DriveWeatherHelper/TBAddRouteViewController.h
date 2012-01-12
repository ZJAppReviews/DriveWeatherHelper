//
//  TBAddRouteViewController.h
//  DriveWeatherHelper
//
//  Created by xulin on 01/11/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TBAddRouteViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *tableView;
    UITextField *cityFrom;
    UITextField *provinceFrom;
    UITextField *cityTo;
    UITextField *provinceTo;
}

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) UITextField *cityFrom;
@property (strong, nonatomic) UITextField *provinceFrom;
@property (strong, nonatomic) UITextField *cityTo;
@property (strong, nonatomic) UITextField *provinceTo;

- (IBAction)cancel:(id)sender;

@end
