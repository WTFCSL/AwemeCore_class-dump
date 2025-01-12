//
//     Generated by private class-dump
//

@class NSString;

@interface AWETimonCustomStateRegistry : NSObject <AWEPasteboardCanAutoreadMessage, AWEDigitalWellbeingMessage, AWEBasicModeMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCustomParams;
+ (id)__pageNameForControllerName:(id)arg0;
+ (BOOL)enableListenParameter;
+ (void)_registerCurrentPage;
+ (void)_registerIsInSplash;
+ (void)_registerAutoReadPasteboard;
+ (void)listenPrivacyPolicyAgree;
+ (void)privacyPolicyAgreeDidChange:(id)arg0;
+ (void)topViewControllerChange:(id)arg0;
+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)basicModeDidChange:(BOOL)arg0;
- (void)pasteboardCanAutoreadDidChange:(BOOL)arg0;
- (id)init;
- (void)dealloc;

@end
