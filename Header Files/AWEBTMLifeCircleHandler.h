//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBTMLifeCircleHandler : NSObject <HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)priority;

- (void)onAppHandleNotification;
- (void)onHandleAppShortcutAction;
- (BOOL)onHandleAppContinueUserActivity;

@end