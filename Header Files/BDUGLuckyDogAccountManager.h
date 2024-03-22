//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface BDUGLuckyDogAccountManager : NSObject <BDUGLuckyDogAccountProtocol> {
    BOOL _isLoginProcessing;
    NSMutableDictionary *_currentUnionInfos;
}

@property (nonatomic) BOOL isLoginProcessing;
@property (retain, nonatomic) NSMutableDictionary *currentUnionInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)accountDidLoginNotification;
+ (void)accountDidLogoutNotification;
+ (void)accountSessionExpiredNotification;
+ (void)bindPhoneNotification;
+ (void)rebindPhoneNotification;
+ (void)initializeAccountManager;
+ (void)didSwitchTeenModeNotification;
+ (void)didSwitchBaseModeNotification;
+ (void)sdkSettingsUpdate;
+ (void)hasTryToGetIDFA;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)presentLoginViewControllerFromVC:(id)arg0 completionBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (void)presentBindPhoneViewControllerFromVC:(id)arg0 completionBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (void)presentRebindViewControllerFromVC:(id)arg0 completionBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (void)saveUnionInfo:(id)arg0 activityId:(id)arg1;
- (id)getUnionInfoOfActvityId:(id)arg0;
- (void)removeUnionOfActivityId:(id)arg0;
- (id)getActHashByActivityId:(id)arg0;
- (void)refreshActHashSuccesNotification:(id)arg0;
- (void)refreshActHashFailedNotification:(id)arg0;
- (void)__onReceiveAccountDidLoginEvent;
- (void)__onReceiveAccountDidLogoutEvent;
- (void)__onReceiveTeenModeChangedEvent;
- (void)__onReceiveBaseModeChangedEvent;
- (void)__onReceiveActHashSuccessEventWithRefreshScene:(unsigned long long)arg0;
- (void)__onReceiveActHashFailedEventWithRefreshScene:(unsigned long long)arg0;
- (BOOL)isLoginProcessing;
- (void)setIsLoginProcessing:(BOOL)arg0;
- (id)currentUnionInfos;
- (void)initDeviceToken;
- (void)setCurrentUnionInfos:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isLogin;

@end
