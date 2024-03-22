//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserLaunchTask : NSObject <BDUGAccountProtocol, AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onAppLaunch;
+ (id)encryptedUserID;
+ (id)historicalUserIDs;
+ (void)setupBindDeviceTask;
+ (id)userID;
+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (id)init;
- (void)dealloc;

@end
