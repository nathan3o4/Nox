//
//  TodayViewController.h
//  Sunset Widget
//
//  Created by Chase McCoy on 5/13/15.
//  Copyright (c) 2015 Chase McCoy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TodayViewController : UIViewController  {
  IBOutlet UILabel *willSet;
  IBOutlet UILabel *timeLabel;
  IBOutlet UILabel *countdown;
  IBOutlet UILabel *expired;
  NSDate *sunrise;
  NSDate *sunset;
  NSUserDefaults *myDefaults;
}

- (IBAction)openApp:(id)sender;
- (UIEdgeInsets)widgetMarginInsetsForProposedMarginInsets:(UIEdgeInsets)defaultMarginInsets;
- (NSString *)getTimeLeftString:(NSDate *)date;
- (BOOL)isSunriseNext;
- (BOOL)isExpired;
- (NSString *)getTimeString:(NSDate *)date;

@end
