//
//  ViewController.h
//  SampleDelegate
//
//  Created by Markku Åkerfelt on 09/03/15.
//  Copyright (c) 2015 MarakerSoft. All rights reserved.
//



#import <UIKit/UIKit.h>
#import "SampleProtocol.h"

@interface ViewController : UIViewController<SampleProtocolDelegate>
{
    IBOutlet UILabel *myLabel; // it's __strong
    __weak IBOutlet UILabel *testi;
}
@end