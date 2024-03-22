//
//     Generated by private class-dump
//

@class NSDictionary;

@interface IESLiveEffectsDownloadOptimizeStrategyConfig : NSObject {
    BOOL _assetCleanStrategyEnable;
    BOOL _assetPortraitCleanStrategyEnable;
    BOOL _isGiftItemOpt;
    long long _assetCleanMaxDeleteCount;
    double _assetCleanGapInterval;
    double _assetCleanStartTimeAfterExitRoom;
    double _assetKeepLiveDuration;
    long long _giftDisplayImmediatelyPolicyType;
    NSDictionary *_displayImmediatelyConfig;
}

@property (nonatomic) BOOL assetCleanStrategyEnable;
@property (nonatomic) BOOL assetPortraitCleanStrategyEnable;
@property (nonatomic) long long assetCleanMaxDeleteCount;
@property (nonatomic) double assetCleanGapInterval;
@property (nonatomic) double assetCleanStartTimeAfterExitRoom;
@property (nonatomic) double assetKeepLiveDuration;
@property (nonatomic) long long giftDisplayImmediatelyPolicyType;
@property (retain, nonatomic) NSDictionary *displayImmediatelyConfig;
@property (nonatomic) BOOL isGiftItemOpt;

- (BOOL)assetCleanStrategyEnable;
- (BOOL)liveEffectDownloadOptimizeUseGiftDisplayPriority;
- (double)assetCleanGapInterval;
- (double)assetCleanStartTimeAfterExitRoom;
- (BOOL)assetPortraitCleanStrategyEnable;
- (double)assetKeepLiveDuration;
- (long long)assetCleanMaxDeleteCount;
- (BOOL)liveEffectDownloadOptimizeGiftDisplayImmediatelyFullEnable;
- (BOOL)liveEffectDownloadOptimizeGiftDisplayImmediatelyPartlyEnable;
- (BOOL)liveEffectDownloadOptimizeGiftDisplayImmediatelyAllTabExceptPropertyEnable;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })liveEffectDownloadOptimizeGiftDisplayImmediatelyPartlyGiftRange;
- (BOOL)isGiftItemOpt;
- (long long)giftDisplayImmediatelyPolicyType;
- (id)displayImmediatelyConfig;
- (void)setAssetCleanStrategyEnable:(BOOL)arg0;
- (void)setAssetPortraitCleanStrategyEnable:(BOOL)arg0;
- (void)setAssetCleanMaxDeleteCount:(long long)arg0;
- (void)setAssetCleanGapInterval:(double)arg0;
- (void)setAssetCleanStartTimeAfterExitRoom:(double)arg0;
- (void)setAssetKeepLiveDuration:(double)arg0;
- (void)setGiftDisplayImmediatelyPolicyType:(long long)arg0;
- (void)setDisplayImmediatelyConfig:(id)arg0;
- (void)setIsGiftItemOpt:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end