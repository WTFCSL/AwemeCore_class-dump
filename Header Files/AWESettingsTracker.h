//
//     Generated by private class-dump
//

@class NSString;

@interface AWESettingsTracker : NSObject <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSwitchingAccount;
+ (void)trackCombineWithStatus:(BOOL)arg0;
+ (id /* block */)pushScene:(id)arg0 extraParams:(id)arg1;
+ (id)getEventStack;
+ (BOOL)eventDictionary:(id)arg0 isForScene:(id)arg1;
+ (void)trackWithScene:(id)arg0 status:(BOOL)arg1 extraParams:(id)arg2;
+ (id)popEvent;
+ (void)trackCombineBackupWithStatus:(BOOL)arg0;
+ (void)trackAfterLoginWithStatus:(BOOL)arg0;
+ (void)trackSwitchAccountWithStatus:(BOOL)arg0;
+ (void)trackAfterLogoutWithStatus:(BOOL)arg0;
+ (void)trackUndefinedWithStatus:(BOOL)arg0;
+ (void)trackByteSyncWithStatus:(BOOL)arg0 taskID:(id)arg1 timestamp:(unsigned long long)arg2;
+ (void)trackByteSyncWithStatus:(BOOL)arg0 extraParams:(id)arg1;
+ (void)traceRequestWithSceneDictionary:(id)arg0 status:(BOOL)arg1;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;
+ (id)peekEvent;

- (void)userChangedFrom:(id)arg0 to:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
