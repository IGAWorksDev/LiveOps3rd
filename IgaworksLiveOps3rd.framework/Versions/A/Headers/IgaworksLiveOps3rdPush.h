//
//  IgaworksLiveOps3rdPush.h
//  IgaworksLiveOps3rd
//
//  Created by John on 2017. 6. 30..
//  Copyright (c) 2014년 IGAWorks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#if __IPHONE_OS_VERSION_MAX_ALLOWED > __IPHONE_10_0
#import <UserNotifications/UserNotifications.h>
#else

#endif

@interface IgaworksLiveOps3rdPushInfo : NSObject

@property (nonatomic,copy) NSDate* IgaworksLiveOps3rd_sentTime;
@property (nonatomic,copy) NSString* IgaworksLiveOps3rd_BodyText;
@property (nonatomic,copy) NSString* IgaworksLiveOps3rd_DeepLinkUrl;
@property (nonatomic,copy) id IgaworksLiveOps3rd_deepLink;

@end

typedef void (^LiveOpsLocalNotificationCallback)(NSInteger Id, NSDate* sentTime, NSString* bodyText, NSDictionary* customData, BOOL isForeGround);
typedef void (^LiveOpsRemoteNotificationCallback)(NSArray* pushInfos, BOOL isForeGround);
typedef void (^LiveOpsRemotePushEnableCallback)(BOOL result);

#if __IPHONE_OS_VERSION_MAX_ALLOWED > __IPHONE_10_0
@interface IgaworksLiveOps3rdPush : NSObject <UNUserNotificationCenterDelegate>
#else
@interface IgaworksLiveOps3rdPush : NSObject
#endif

+ (void)init3rdPush;
+ (void)setDeviceToken:(NSData*)deviceToken;

+ (void)handleAllNotificationFromLaunch:(NSDictionary*)launchOptions;
+ (void)handleLocalNotification:(UILocalNotification *)notification;
+ (void)handleRemoteNotification:(NSDictionary *)userInfo fetchHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

+ (void)setLocalNotificationListener:(LiveOpsLocalNotificationCallback)block;
+ (void)setRemoteNotificationListener:(LiveOpsRemoteNotificationCallback)block;

+ (void)setRemotePushEnable:(BOOL)isEnabled;
+ (void)setRemotePushEnable:(BOOL)isEnabled completion:(LiveOpsRemotePushEnableCallback)block;

+ (void)registerLocalPushNotification:(NSInteger)Id date:(NSDate*)date body:(NSString*)bodyText button:(NSString*)buttonText soundName:(NSString*)sound badgeNumber:(NSInteger)badgeNum customPayload:(NSDictionary*)payloadDict;
+ (void)cancelLocalPush:(NSInteger)Id;

+ (void)setTargetingData:(id)obj withKey:(NSString*)key;

@end
