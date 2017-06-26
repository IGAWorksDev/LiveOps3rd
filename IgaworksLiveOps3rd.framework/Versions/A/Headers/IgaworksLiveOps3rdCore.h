//
//  LiveOpsCore.h
//  LiveOps
//
//  Created by 강기태 on 2014. 7. 11..
//  Copyright (c) 2014년 IGAWorks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IgaworksCoreServicesLib.h"
@interface IgaworksLiveOps3rdCore : NSObject

//+ (void)initLiveOps;
+ (void)initLiveOpsWithAppKey:(NSString*)appKey;
+ (void)setTargetingData:(id)obj withKey:(NSString*)key;
@end
