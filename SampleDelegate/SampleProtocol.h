//
//  SampleProtocol.h
//  SampleDelegate
//
//  Created by Markku Åkerfelt on 09/03/15.
//  Copyright (c) 2015 MarakerSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
// Protocol definition starts here
@protocol SampleProtocolDelegate <NSObject>
@required
- (void) processCompleted;
@end
// Protocol Definition ends here
@interface SampleProtocol : NSObject

{
    // Delegate to respond back
    id <SampleProtocolDelegate> _delegate;
    
}
@property (nonatomic,strong) id delegateToController;

-(void)startSampleProcess; // Instance method

@end