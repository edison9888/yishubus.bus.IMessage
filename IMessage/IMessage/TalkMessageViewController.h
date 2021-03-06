//
//  TalkMessageViewController.h
//  IMessage
//
//  Created by shi feng on 13-6-8.
//  Copyright (c) 2013年 yishubus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MessageReceiveDelegate.h"

@interface TalkMessageViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,MessageReceiveDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tView;

@property (strong, nonatomic) IBOutlet UITextField *textField;

@property (nonatomic, retain) NSString *chatWithUser;

- (IBAction)clickMessage:(id)sender;

@end