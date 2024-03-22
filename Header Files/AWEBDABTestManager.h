//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBDABTestManager : NSObject <AWEUserMessage, BDCommonABTestUserDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)arg0;
+ (id)settingsRequestParamsDictionary;
+ (void)fetchABDataWithContext:(id)arg0;
+ (void)doOriginalActionsWithContext:(id)arg0;
+ (void)subscribeAWEUserMessage;
+ (void)fetchABData;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (id)getCurrentUserKey;
- (id)init;
- (void)dealloc;

@end
