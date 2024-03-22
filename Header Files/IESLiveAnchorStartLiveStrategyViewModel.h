//
//     Generated by private class-dump
//

@protocol IESLiveAnchorStartLiveStrategyViewModelDelegate;

@interface IESLiveAnchorStartLiveStrategyViewModel : NSObject {
    int _lastEnableSitiFromstrategy;
    int _lastEnableVideoDenoiseFromstrategy;
    int _lastBFrameBitrateRatioFromstrategy;
    int _lastRatioV1Fromstrategy;
    int _lastGe1080pRatioFromstrategy;
    int _lastLt1080pRatioFromstrategy;
    int _lastEnableSitiBpsAdjust;
    int _lastEnableSitiFpsAdjust;
    id<IESLiveAnchorStartLiveStrategyViewModelDelegate> _delegate;
    long long _enableSitiFromVpass;
    double _bFrameBitrateRatioFromVpass;
    double _videoDenoiseBitrateRatioV1FromVpass;
    double _videoDenoiseBitrateRatioGe1080pFromVpass;
    double _videoDenoiseBitrateRatioLt1080pFromVpass;
}

@property (nonatomic) long long enableSitiFromVpass;
@property (nonatomic) double bFrameBitrateRatioFromVpass;
@property (nonatomic) double videoDenoiseBitrateRatioV1FromVpass;
@property (nonatomic) double videoDenoiseBitrateRatioGe1080pFromVpass;
@property (nonatomic) double videoDenoiseBitrateRatioLt1080pFromVpass;
@property (nonatomic) int lastEnableSitiFromstrategy;
@property (nonatomic) int lastEnableVideoDenoiseFromstrategy;
@property (nonatomic) int lastBFrameBitrateRatioFromstrategy;
@property (nonatomic) int lastRatioV1Fromstrategy;
@property (nonatomic) int lastGe1080pRatioFromstrategy;
@property (nonatomic) int lastLt1080pRatioFromstrategy;
@property (nonatomic) int lastEnableSitiBpsAdjust;
@property (nonatomic) int lastEnableSitiFpsAdjust;
@property (weak, nonatomic) id<IESLiveAnchorStartLiveStrategyViewModelDelegate> delegate;

- (void)setEnableSitiFromVpass:(long long)arg0;
- (void)setBFrameBitrateRatioFromVpass:(double)arg0;
- (void)setVideoDenoiseBitrateRatioV1FromVpass:(double)arg0;
- (void)setVideoDenoiseBitrateRatioGe1080pFromVpass:(double)arg0;
- (void)setVideoDenoiseBitrateRatioLt1080pFromVpass:(double)arg0;
- (double)bFrameBitrateRatioFromVpass;
- (double)videoDenoiseBitrateRatioV1FromVpass;
- (double)videoDenoiseBitrateRatioGe1080pFromVpass;
- (double)videoDenoiseBitrateRatioLt1080pFromVpass;
- (long long)enableSitiFromVpass;
- (void)collectAnchorStartLiveInfo;
- (void)updateAnchorStartLiveStrategyAllFactor;
- (void)setLastEnableSitiFromstrategy:(int)arg0;
- (void)setLastEnableVideoDenoiseFromstrategy:(int)arg0;
- (void)setLastBFrameBitrateRatioFromstrategy:(int)arg0;
- (void)setLastRatioV1Fromstrategy:(int)arg0;
- (void)setLastGe1080pRatioFromstrategy:(int)arg0;
- (void)setLastLt1080pRatioFromstrategy:(int)arg0;
- (void)setLastEnableSitiBpsAdjust:(int)arg0;
- (void)setLastEnableSitiFpsAdjust:(int)arg0;
- (void)changeNormalConfigPushBitrate;
- (void)changeNormalConfigPushFps;
- (void)changeConfigForDegradePushBitrate;
- (int)lastEnableSitiFromstrategy;
- (int)lastEnableSitiBpsAdjust;
- (int)lastEnableSitiFpsAdjust;
- (int)lastEnableVideoDenoiseFromstrategy;
- (int)lastBFrameBitrateRatioFromstrategy;
- (int)lastRatioV1Fromstrategy;
- (int)lastGe1080pRatioFromstrategy;
- (int)lastLt1080pRatioFromstrategy;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end