//
//     Generated by private class-dump
//

@class HMDTTMonitor, NSString, HMDMonitorCallbackObject, NSMutableArray;
@protocol IESECFrameDropMonitorProtocol;

@interface IESECQualityMonitor : NSObject <IESECPagePerformanceDelegate> {
    HMDTTMonitor *_ecomQualityMonitor;
    HMDMonitorCallbackObject *_hmdFPSCallback;
    NSMutableArray *_fpsSubscribers;
    id<IESECFrameDropMonitorProtocol> _hmdFrameDropMonitor;
}

@property (retain, nonatomic) HMDMonitorCallbackObject *hmdFPSCallback;
@property (retain, nonatomic) NSMutableArray *fpsSubscribers;
@property (retain, nonatomic) id<IESECFrameDropMonitorProtocol> hmdFrameDropMonitor;
@property (retain, nonatomic) HMDTTMonitor *ecomQualityMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)verifyCartSchemaParams:(id)arg0;
+ (id)sharedManager;
+ (double)currentTime;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)hmdTrackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)iesec_hmdTrackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)leaveCustomFPSMonitorScene:(id)arg0;
- (void)enterCustomFPSMonitorScene:(id)arg0;
- (id)hmdFPSCallback;
- (void)setHmdFPSCallback:(id)arg0;
- (void)didRecordedPagePerformanceForPage:(id)arg0 withStage1:(double)arg1 stage2:(double)arg2 stage3:(double)arg3;
- (void)subscribeFrameDropMonitor:(id /* block */)arg0 targetObj:(id)arg1;
- (void)unsubscribeFrameDropMonitorWithTargetObj:(id)arg0;
- (void)iesec_hmdTrackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3 traceStart:(double)arg4 traceEnd:(double)arg5;
- (id)ecomQualityMonitor;
- (void)dispatchFPSMonitorEvent:(id)arg0;
- (id)fpsSubscribers;
- (void)setFpsSubscribers:(id)arg0;
- (id)hmdFrameDropMonitor;
- (void)subscribeFPSMonitor:(id /* block */)arg0 targetObj:(id)arg1;
- (void)unsubscribeFPSMonitorWithTargetObj:(id)arg0;
- (void)setEcomQualityMonitor:(id)arg0;
- (void)setHmdFrameDropMonitor:(id)arg0;
- (void)trackCartMonitorWithParams:(id)arg0;
- (void)trackCartQueryErrorWithError:(id)arg0 response:(id)arg1 scene:(id)arg2;
- (void)trackCartStartWithParams:(id)arg0;
- (void)trackCartShowWithStatus:(id)arg0 extraParams:(id)arg1;
- (void)trackCartRenderErrorWithSuccess:(BOOL)arg0 scene:(id)arg1;
- (void)trackGoodsDetailQualityInfo:(id)arg0;
- (void)trackGoodsDetailQualityInfoV2:(id)arg0 qualityInfo:(id)arg1;
- (void)trackGoodsDetailStartWithPdpType:(id)arg0 extraParams:(id)arg1;
- (void)trackGoodsDetailShowWithStatus:(id)arg0 pdpType:(id)arg1 extraParams:(id)arg2;
- (id)init;
- (void).cxx_destruct;

@end