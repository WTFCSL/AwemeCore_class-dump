//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface IESLiveAnchorDegradeBitrateFactorDealModel : NSObject <IESLiveAnchorStrategyFactorDealProtocol> {
    NSDictionary *_defaultBitDict;
    long long _enableSitiFromVpass;
    double _bFrameBitrateRatioFromVpass;
    double _videoDenoiseBitrateRatioV1FromVpass;
    double _videoDenoiseBitrateRatioGe1080pFromVpass;
    double _videoDenoiseBitrateRatioLt1080pFromVpass;
}

@property (retain, nonatomic) NSDictionary *defaultBitDict;
@property (nonatomic) long long enableSitiFromVpass;
@property (nonatomic) double bFrameBitrateRatioFromVpass;
@property (nonatomic) double videoDenoiseBitrateRatioV1FromVpass;
@property (nonatomic) double videoDenoiseBitrateRatioGe1080pFromVpass;
@property (nonatomic) double videoDenoiseBitrateRatioLt1080pFromVpass;
@property (readonly, nonatomic) NSString *factorName;
@property (readonly, nonatomic) id defaultValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithChangedFactorValue:(id)arg0;
- (void)resetToDefaultValue;
- (void)setEnableSitiFromVpass:(long long)arg0;
- (void)setBFrameBitrateRatioFromVpass:(double)arg0;
- (void)setVideoDenoiseBitrateRatioV1FromVpass:(double)arg0;
- (void)setVideoDenoiseBitrateRatioGe1080pFromVpass:(double)arg0;
- (void)setVideoDenoiseBitrateRatioLt1080pFromVpass:(double)arg0;
- (double)bFrameBitrateRatioFromVpass;
- (double)videoDenoiseBitrateRatioV1FromVpass;
- (double)videoDenoiseBitrateRatioGe1080pFromVpass;
- (double)videoDenoiseBitrateRatioLt1080pFromVpass;
- (void)updateVpassDegradeBitrateConfig;
- (id)defaultBitDict;
- (void)setDefaultBitDict:(id)arg0;
- (long long)enableSitiFromVpass;
- (id)factorName;
- (id)defaultValue;
- (void).cxx_destruct;

@end