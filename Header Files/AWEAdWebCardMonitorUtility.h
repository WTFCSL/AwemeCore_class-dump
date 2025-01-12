//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAdWebCardMonitorUtility : HTSService <AWEAdWebCardMonitorUtility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)webCardReceiveMonitorWithModel:(id)arg0;
+ (void)liveWebCardReceiveMonitorWithAdInfo:(id)arg0;
+ (void)webCardAdVideoShowWithModel:(id)arg0;
+ (void)webCardPreloadStart:(id)arg0;
+ (void)webCardPreloadResult:(long long)arg0 model:(id)arg1 failReason:(id)arg2;
+ (void)webCardAdtraceTryShow:(id)arg0;
+ (void)webCardAdShowResult:(long long)arg0 model:(id)arg1 failReason:(id)arg2;
+ (BOOL)hasCardDataWithAweme:(id)arg0;
+ (BOOL)shouldShowLynxCardWithAwemeModel:(id)arg0;
+ (id)monitorAdExtraDataWithAweme:(id)arg0;
+ (id)eventStringFromReferString:(id)arg0;
+ (id)adRitFromReferString:(id)arg0;

@end
