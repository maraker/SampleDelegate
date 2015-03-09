//
//  SampleProtocol.m
//  SampleDelegate
//
//  Created by Markku Åkerfelt on 09/03/15.
//  Copyright (c) 2015 MarakerSoft. All rights reserved.
//

#import "SampleProtocol.h"

@implementation SampleProtocol

-(void)startSampleProcess{
    
    [NSTimer scheduledTimerWithTimeInterval:3.0 target:self.delegateToController
                                   selector:@selector(processCompleted) userInfo:nil repeats:NO];
}
@end