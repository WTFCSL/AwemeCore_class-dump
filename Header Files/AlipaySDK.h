//
//     Generated by private class-dump
//

@class APayAlertView, NSString, APayProcessor, NSDictionary, APayRoute, NSCondition, UIWindow;

@interface AlipaySDK : NSObject <APayAlertViewDelegate> {
    BOOL _stopPayIn2S;
    BOOL _stopAuthIn2S;
    BOOL _stopFetchConfig;
    UIWindow *_targetWindow;
    NSString *_schemeStr;
    NSString *_executingOrderStr;
    id /* block */ _completionBlock;
    APayRoute *_route;
    APayProcessor *_processor;
    NSDictionary *_alertOkAction;
    NSDictionary *_alertCancelAction;
    NSCondition *_tidCondition;
    unsigned long long _areaType;
    APayAlertView *_alertView;
}

@property (copy, nonatomic) NSString *schemeStr;
@property (copy, nonatomic) NSString *executingOrderStr;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) APayRoute *route;
@property (readonly, nonatomic) APayProcessor *processor;
@property (retain, nonatomic) NSDictionary *alertOkAction;
@property (retain, nonatomic) NSDictionary *alertCancelAction;
@property (retain, nonatomic) NSCondition *tidCondition;
@property (nonatomic) BOOL stopPayIn2S;
@property (nonatomic) BOOL stopAuthIn2S;
@property (nonatomic) BOOL stopFetchConfig;
@property (nonatomic) unsigned long long areaType;
@property (retain, nonatomic) APayAlertView *alertView;
@property (weak, nonatomic) UIWindow *targetWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)stopLog;
+ (void)startLogWithBlock:(id /* block */)arg0;
+ (id)defaultService;

- (void)callbackWithResult:(id)arg0;
- (BOOL)checkValidityWithOrderStr:(id)arg0 callback:(id /* block */)arg1;
- (void)payWithType:(id)arg0 orderStr:(id)arg1 schemeStr:(id)arg2 dynamicLaunch:(BOOL)arg3 callback:(id /* block */)arg4;
- (void)processResultUrl:(id)arg0 callback:(id /* block */)arg1;
- (void)setExecutingOrderStr:(id)arg0;
- (void)setSchemeStr:(id)arg0;
- (unsigned long long)area4OrderStr:(id)arg0;
- (void)handleRouteConfig:(id)arg0 withBlock:(id /* block */)arg1;
- (void)cleanInfoWhenGoPortal:(id)arg0;
- (void)callAlipayWithOrderStr:(id)arg0 dynamicLaunch:(BOOL)arg1 withBlock:(id /* block */)arg2;
- (BOOL)callAlipayBySchemes:(id)arg0 orderStr:(id)arg1;
- (void)callAlipayByUL:(id)arg0 withBlock:(id /* block */)arg1;
- (id)buildQueryStrWithOrder:(id)arg0 andExtraInfo:(id)arg1;
- (void)callback:(id /* block */)arg0 withMemo:(id)arg1 andResultStatus:(id)arg2;
- (id)executingOrderStr;
- (BOOL)stopPayIn2S;
- (void)setStopPayIn2S:(BOOL)arg0;
- (void)setAlertOkAction:(id)arg0;
- (void)setAlertCancelAction:(id)arg0;
- (long long)routeTypeWithConfig:(id)arg0;
- (id)schemeStr;
- (id)fetchOrderInfoFromH5PayUrl:(id)arg0;
- (void)payUrlOrder:(id)arg0 fromScheme:(id)arg1 callback:(id /* block */)arg2;
- (BOOL)isShouldInterceptorDomain:(id)arg0;
- (BOOL)stopAuthIn2S;
- (void)setStopAuthIn2S:(BOOL)arg0;
- (id)dictionaryFromRegular:(id)arg0 pattern:(id)arg1;
- (void)queryTid;
- (void)onAdapterFinished;
- (id)tidCondition;
- (id)processTradeToken:(id)arg0;
- (BOOL)isNewModelResult:(id)arg0;
- (id)valueFromResult:(id)arg0 withKey:(id)arg1 isNewModel:(BOOL)arg2;
- (BOOL)stopFetchConfig;
- (void)setStopFetchConfig:(BOOL)arg0;
- (void)removeAlipayObserver;
- (id)alertCancelAction;
- (id)alertOkAction;
- (void)payOrder:(id)arg0 fromScheme:(id)arg1 callback:(id /* block */)arg2;
- (void)payOrder:(id)arg0 dynamicLaunch:(BOOL)arg1 fromScheme:(id)arg2 callback:(id /* block */)arg3;
- (void)processOrderWithPaymentResult:(id)arg0 standbyCallback:(id /* block */)arg1;
- (void)afterCallAlipay:(id)arg0 callSuccess:(BOOL)arg1 withBlock:(id /* block */)arg2;
- (BOOL)payInterceptorWithUrl:(id)arg0 fromScheme:(id)arg1 callback:(id /* block */)arg2;
- (void)auth_V2WithInfo:(id)arg0 fromScheme:(id)arg1 callback:(id /* block */)arg2;
- (void)processAuth_V2Result:(id)arg0 standbyCallback:(id /* block */)arg1;
- (void)authWithInfo:(id)arg0 callback:(id /* block */)arg1;
- (void)processAuthResult:(id)arg0 standbyCallback:(id /* block */)arg1;
- (id)queryTidFactor:(int)arg0;
- (void)fetchSdkConfigWithBlock:(id /* block */)arg0;
- (id)fetchTradeToken;
- (BOOL)isLogined;
- (void)setTidCondition:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)route;
- (void)setAlertView:(id)arg0;
- (id /* block */)completionBlock;
- (void)setUrl:(id)arg0;
- (void)setCompletionBlock:(id /* block */)arg0;
- (id)currentVersion;
- (id)alertView;
- (void)alertView:(id)arg0 clickedButtonAtIndex:(long long)arg1;
- (id)targetWindow;
- (id)processor;
- (unsigned long long)areaType;
- (void)setAreaType:(unsigned long long)arg0;
- (void)setTargetWindow:(id)arg0;
- (void)cleanData;

@end
