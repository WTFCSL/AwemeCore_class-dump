//
//     Generated by private class-dump
//

@interface AWEBSBandwidthCalculator : NSObject {
    BOOL _ladderSelectionPredictType;
    BOOL _enableParamFix;
    double _safeCacheDuration;
    double _maxReservedDurationMs;
    long long _targetCount;
    long long _firstFeedCntThreshold;
    double _maxVideoDuration;
    double _curVideoDuration;
    long long _recordCount;
}

@property (readonly, nonatomic) BOOL ladderSelectionPredictType;
@property (readonly, nonatomic) double safeCacheDuration;
@property (readonly, nonatomic) double maxReservedDurationMs;
@property (readonly, nonatomic) long long targetCount;
@property (nonatomic) long long firstFeedCntThreshold;
@property (readonly, nonatomic) double maxVideoDuration;
@property (nonatomic) double curVideoDuration;
@property (nonatomic) BOOL enableParamFix;
@property (readonly, nonatomic) long long recordCount;

+ (id)sharedInstance;

- (double)maxVideoDuration;
- (long long)targetCount;
- (double)bandWidthCalculatorByModels:(id)arg0 fromIndex:(long long)arg1 bitrateModel:(id)arg2 selectingModel:(id)arg3;
- (void)fillbitrateSelectRecordWithModel:(id)arg0 bitrate:(long long)arg1 offset:(long long)arg2;
- (long long)firstFeedCntThreshold;
- (BOOL)ladderSelectionPredictType;
- (double)maxReservedDurationMs;
- (void)setFirstFeedCntThreshold:(long long)arg0;
- (BOOL)enableParamFix;
- (void)initBSFactorCalculateModel:(id)arg0 BSModel:(id)arg1 lastCacheExist:(BOOL)arg2;
- (id)getPlayListValue:(id)arg0;
- (void)setCurVideoDuration:(double)arg0;
- (double)safeCacheDuration;
- (double)curVideoDuration;
- (double)getPlayedDurationFromModel:(id)arg0;
- (void)setEnableParamFix:(BOOL)arg0;
- (id)init;
- (long long)recordCount;

@end
