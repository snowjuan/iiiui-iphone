//
//  IndexViewController.h
//  IIIUI-0.1
//
//  Created by yangpeng on 10/9/12.
//  Copyright (c) 2012 You Star. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IndexViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>
{
    UITableView *sharelist;
}

@property(nonatomic, strong)  IBOutlet UITableView *sharelist;


@end
