CDSideBarController
===================

CDSideBarController is a light and easy side bar with custom iOS7 animations and actions

<strong>How does it work ?</strong>

1. Import CDSideBar/CDSideBarController in your project

2. .h file<br/>
  2.1 - #import "CDSideBarController.h" in the header file<br/>
  2.2 - Add <CDSideBarControllerDelegate> delegate<br/>
  2.3 - Add CDSideBarController *sideBar in your interface<br/>
  Should look like this: <br/>
      <strong>#import "CDSideBarController.h"</strong><br/>
  
  @interface ViewController : UIViewController <CDSideBarControllerDelegate><br/>
  {<br/>
      CDSideBarController *sideBar;<br/>
  }<br/>

3. .m file<br/>
  3.1 - In viewDidLoad, create a NSArray that contains your menu images<br/>
  3.2 - Create your instance of CDSideBarController with this array<br/>
  3.3 - Set self as a delegate to this instance<br/>
        Should look like this:<br/>
         NSArray *imageList = @[[UIImage imageNamed:@"menuChat.png"], [UIImage imageNamed:@"menuUsers.png"], [UIImage       imageNamed:@"menuMap.png"], [UIImage imageNamed:@"menuClose.png"]];
    sideBar = [[CDSideBarController alloc] initWithImages:imageList];<br/>
    sideBar.delegate = self;<br/>
  3.4 - Add the delegate method to be notified each time a menu button is clicked<br/>
      - (void)menuButtonClicked:(int)index<br/>
      {<br/>
          // Execute what ever you want<br/>
      }<br/>

  3.4 - Once you want the sidebar appear, just add :<br/>
         [sideBar insertMenuButtonOnView:self.view atPosition:CGPointMake(self.view.frame.size.width - 70, 50)];<br/>
        AtPosition correspond to the position where the show/hide menu button will be displayed<br/>

You're all set!<br/>
