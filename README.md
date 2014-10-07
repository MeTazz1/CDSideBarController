CDSideBarController
===================

CDSideBarController is a light and easy side bar with custom iOS7 animations and actions

How does it work ?

1 - Import CDSideBar/CDSideBarController in your project

2. .h file
  2.1 - #import "CDSideBarController.h" in the header file
  2.2 - Add <CDSideBarControllerDelegate> delegate
  2.3 - Add CDSideBarController *sideBar in your interface
  Should look like this: 
  #import "CDSideBarController.h"
  
  @interface ViewController : UIViewController <CDSideBarControllerDelegate>
  {
      CDSideBarController *sideBar;
  }

3. .m file
  3.1 - In viewDidLoad, create a NSArray that contains your menu images
  3.2 - Create your instance of CDSideBarController with this array
  3.3 - Set self as a delegate to this instance
        Should look like this:
         NSArray *imageList = @[[UIImage imageNamed:@"menuChat.png"], [UIImage imageNamed:@"menuUsers.png"], [UIImage       imageNamed:@"menuMap.png"], [UIImage imageNamed:@"menuClose.png"]];
    sideBar = [[CDSideBarController alloc] initWithImages:imageList];
    sideBar.delegate = self;
  3.4 - Add the delegate method to be notified each time a menu button is clicked
      - (void)menuButtonClicked:(int)index
      {
          // Execute what ever you want
      }

  3.4 - Once you want the sidebar appear, just add :
         [sideBar insertMenuButtonOnView:self.view atPosition:CGPointMake(self.view.frame.size.width - 70, 50)];
        AtPosition correspond to the position where the show/hide menu button will be displayed

You're all set!
