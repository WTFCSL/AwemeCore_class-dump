//
//     Generated by private class-dump
//

@class NSString;

@interface AWECnryphoctMSSDKCollectModeManager : NSObject <AWEDigitalWellbeingMessage, AWEBasicModeMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)basicModeDidChange:(BOOL)arg0;
- (void)accountPrivacyPolicyAgreeNoti:(id)arg0;
- (void)dealloc;

@end
