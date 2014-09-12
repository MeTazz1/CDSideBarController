//
//  ViewController.h
//  CDSideBar
//
//  Created by Christophe Dellac on 9/11/14.
//  Copyright (c) 2014 Christophe Dellac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CDSideBarController.h"

@interface ViewController : UIViewController <CDSideBarControllerDelegate>
{
    CDSideBarController *sideBar;
}

@end

