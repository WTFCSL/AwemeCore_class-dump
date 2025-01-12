//
//     Generated by private class-dump
//

@class NSString;

@interface IESLivePaidStreamTrackPlugin : NSObject <IESLivePaidStreamPlugin, IESLivePaidStreamTrackProvider> {
    id /* block */ _trackParamHandler;
    double _windowTrialFinishShowTime;
    double _windowPromiseShowTime;
}

@property (copy, nonatomic) id /* block */ trackParamHandler;
@property (nonatomic) double windowTrialFinishShowTime;
@property (nonatomic) double windowPromiseShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)commonParams:(id)arg0;
- (BOOL)paidStreamPluginShouldActiveWhenHasReusingPaidStream:(id)arg0;
- (void)paidStreamDidStop:(id)arg0;
- (void)paidStream:(id)arg0 willOpenPaidPanel:(unsigned long long)arg1;
- (void)paidStream:(id)arg0 didOpenPaidPanel:(unsigned long long)arg1;
- (void)paidStream:(id)arg0 didFinishTrialWithReason:(unsigned long long)arg1;
- (void)paidStream:(id)arg0 didChangeAuthRetType:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (void)paidStream:(id)arg0 willDisplayForBlockType:(unsigned long long)arg1;
- (void)paidStream:(id)arg0 didEndDisplayForBlockType:(unsigned long long)arg1;
- (void)paidStream:(id)arg0 actionForBlockType:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)paidStreamWillDisplayScreenCapturedAlert:(id)arg0;
- (id /* block */)trackParamHandler;
- (void)setTrackParamHandler:(id /* block */)arg0;
- (void)trackMachineBuyTicketModuleShow:(id)arg0 entranceType:(unsigned long long)arg1;
- (void)trackWindowPaidLiveTryEndShow:(id)arg0;
- (double)trackWindowPaidLiveTryEndDuration:(id)arg0;
- (void)trackPaidLiveCheckRemindShow:(id)arg0;
- (double)windowCheckRemindDuration;
- (void)trackMachineBuyTicketModuleClick:(id)arg0 entranceType:(unsigned long long)arg1;
- (void)trackTicketModuleClickForBlockUserOperateWithPaidStream:(id)arg0 entranceType:(unsigned long long)arg1;
- (id)initWithTrackParamHandler:(id /* block */)arg0;
- (void)trackBuyTicketModuleClick:(id)arg0;
- (void)trackBuyTicketModuleClick:(id)arg0 entranceType:(unsigned long long)arg1;
- (void)trackPaidLiveTryEndShow:(id)arg0;
- (void)trackBuyTicketModuleShow:(id)arg0;
- (void)trackMachineBuyTicketModuleShow:(id)arg0;
- (void)trackLiveVIPCardShow:(id)arg0;
- (void)trackPaidLiveTryEndDuration:(id)arg0;
- (void)trackMachineBuyTicketModuleClick:(id)arg0;
- (void)trackLiveVIPCardClick:(id)arg0;
- (void)trackPaidiveCheckRemindClick:(id)arg0;
- (void)trackPaidLiveBanScreenRecord:(id)arg0;
- (id)cameraCommonParams:(id)arg0 entranceType:(unsigned long long)arg1;
- (id)liveCommonParams:(id)arg0 entranceType:(unsigned long long)arg1;
- (id)commonParams:(id)arg0 entranceType:(unsigned long long)arg1;
- (void)setWindowPromiseShowTime:(double)arg0;
- (double)windowPromiseShowTime;
- (void)setWindowTrialFinishShowTime:(double)arg0;
- (double)windowTrialFinishShowTime;
- (id)watchTypeForPaidStream:(id)arg0;
- (id)requestPageForPaidStream:(id)arg0;
- (id)entranceParamsForPaidStream:(id)arg0 entranceType:(unsigned long long)arg1;
- (id)paidContentParamsForPaidStream:(id)arg0 entranceType:(unsigned long long)arg1;
- (void).cxx_destruct;

@end
