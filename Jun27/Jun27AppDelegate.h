//
//  Jun27AppDelegate.h
//  Jun27
//
//  Created by Udo Hoppenworth on 6/27/13.
//  Copyright (c) 2013 Udo Hoppenworth. All rights reserved.
//

#import <UIKit/UIKit.h>
@class View;

@interface Jun27AppDelegate : UIResponder <UIApplicationDelegate> {
	View *view;
	UIWindow *_window;
}

@property (strong, nonatomic) UIWindow *window;

@end
