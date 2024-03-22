//
//     Generated by private class-dump
//

@class IESECLiveRandomDelayTimer, NSString;

@interface IESECLiveShopVipWidget : IESECLiveBaseWidget <IESECLiveMessageSubscriber> {
    IESECLiveRandomDelayTimer *_peakReduce;
    double _mountTime;
}

@property (retain, nonatomic) IESECLiveRandomDelayTimer *peakReduce;
@property (nonatomic) double mountTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoom:(id)arg0 roomContext:(id)arg1;
- (void)widgetMount;
- (void)didShowShopCart:(BOOL)arg0;
- (void)didHideShopCart:(BOOL)arg0;
- (void)messageReceived_IESECLiveMarketingMessage:(id)arg0;
- (id)peakReduce;
- (void)setPeakReduce:(id)arg0;
- (void)setMountTime:(double)arg0;
- (double)mountTime;
- (void)requestShopVIPInfo;
- (void)fetchShopVIPShortTouchDelayed;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;

@end
