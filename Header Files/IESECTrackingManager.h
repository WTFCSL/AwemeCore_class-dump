//
//     Generated by private class-dump
//

@interface IESECTrackingManager : NSObject

+ (id)createJumpSourceBtmTokenWithBtm:(id)arg0 host:(id)arg1 bcm:(id)arg2;
+ (id)createReportParamsWithBtm:(id)arg0 host:(id)arg1;
+ (void)markResponderAsBtmPage:(id)arg0;
+ (BOOL)registerBtmPage:(id)arg0 pageBtm:(id)arg1 sourceBtmToken:(id)arg2;
+ (BOOL)registerBtmPage:(id)arg0 params:(id /* block */)arg1;
+ (BOOL)updateBtmPage:(id)arg0 sourceBtmToken:(id)arg1;
+ (void)trackEvent:(id)arg0 params:(id)arg1 btm:(id)arg2 host:(id)arg3;
+ (BOOL)setBcmPageParams:(id)arg0 host:(id)arg1 clearOldValue:(BOOL)arg2;
+ (id)getBcmChainWithHost:(id)arg0 chainLength:(unsigned long long)arg1;
+ (id)getBcmChainWithStandardContentWithHost:(id)arg0 chainLength:(unsigned long long)arg1;
+ (id)getBcmChainWithStandardContentWithBtmModel:(id)arg0 chainLength:(unsigned long long)arg1;
+ (id)hybirdResponderForContainerID:(id)arg0;
+ (Class)serviceImpl;

@end
