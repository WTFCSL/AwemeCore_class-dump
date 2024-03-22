//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveLocalLifeControlDataModel : MTLModel <MTLJSONSerializing> {
    NSString *_cardUrl;
    long long _cardStyle;
    long long _showSeconds;
    long long _showDuration;
    long long _needShow;
    long long _updateOnlySticker;
    long long _delayFadeTime;
    unsigned long long _liveStickerStyle;
    long long _isStickerProduct;
}

@property (copy, nonatomic) NSString *cardUrl;
@property (nonatomic) long long cardStyle;
@property (nonatomic) long long showSeconds;
@property (nonatomic) long long showDuration;
@property (nonatomic) long long needShow;
@property (nonatomic) long long updateOnlySticker;
@property (nonatomic) long long delayFadeTime;
@property (nonatomic) unsigned long long liveStickerStyle;
@property (nonatomic) long long isStickerProduct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)needShow;
- (long long)showDuration;
- (void)setShowDuration:(long long)arg0;
- (id)cardUrl;
- (void)setCardUrl:(id)arg0;
- (void)setNeedShow:(long long)arg0;
- (unsigned long long)liveStickerStyle;
- (long long)updateOnlySticker;
- (long long)delayFadeTime;
- (void)setUpdateOnlySticker:(long long)arg0;
- (void)setDelayFadeTime:(long long)arg0;
- (void)setLiveStickerStyle:(unsigned long long)arg0;
- (long long)isStickerProduct;
- (void)setIsStickerProduct:(long long)arg0;
- (void).cxx_destruct;
- (void)setShowSeconds:(long long)arg0;
- (long long)cardStyle;
- (long long)showSeconds;
- (void)setCardStyle:(long long)arg0;

@end
