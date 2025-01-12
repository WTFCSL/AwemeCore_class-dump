//
//     Generated by private class-dump
//

@class NSString, BDUGLuckyRouterContext;

@interface BDUGLuckyCatRouterProxyIntercepter : NSObject <BDUGLuckyRouterIntercepterProtocol> {
    BOOL _settingsReady;
    BDUGLuckyRouterContext *_lastRouterContext;
    NSString *_schemaForALog;
}

@property (retain, nonatomic) BDUGLuckyRouterContext *lastRouterContext;
@property (nonatomic) BOOL settingsReady;
@property (copy, nonatomic) NSString *schemaForALog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)intercepterType;
+ (id)sharedInstance;

- (BOOL)canHandleUrl:(id)arg0;
- (id)handleUrl:(id)arg0;
- (BOOL)isMustBeAwakened;
- (void)__onDogSettingsUpdate;
- (void)setSchemaForALog:(id)arg0;
- (id)schemaForALog;
- (id)__buildProxyExtraInfoWithURLString:(id)arg0;
- (void)showToastIfNeeded:(id)arg0 success:(BOOL)arg1;
- (double)__retryTimeout:(id)arg0;
- (BOOL)settingsReady;
- (id)lastRouterContext;
- (void)setLastRouterContext:(id)arg0;
- (void)__triggerRetryWithContext:(id)arg0 reason:(id)arg1;
- (void)__waitingSettingsCompletedWithContext:(id)arg0 timeout:(double)arg1;
- (void)setSettingsReady:(BOOL)arg0;
- (void)__triggerRetry;
- (id)__extraParamsWithRetryDisabled:(id)arg0;
- (BOOL)isLocalUrl:(id)arg0;
- (BOOL)openExternalUrl:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
