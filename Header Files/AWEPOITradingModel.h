//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOITradingModel : AWEBaseApiModel {
    NSString *_typeText;
    NSString *_typeTextColor;
    NSString *_typeTextLightColor;
    NSString *_typeTextBackgroundColor;
    NSString *_typeTextLightBackgroundColor;
    NSString *_infoText;
    NSString *_priceText;
    NSString *_recruitedText;
    long long _style;
}

@property (copy, nonatomic) NSString *typeText;
@property (copy, nonatomic) NSString *typeTextColor;
@property (copy, nonatomic) NSString *typeTextLightColor;
@property (copy, nonatomic) NSString *typeTextBackgroundColor;
@property (copy, nonatomic) NSString *typeTextLightBackgroundColor;
@property (copy, nonatomic) NSString *infoText;
@property (copy, nonatomic) NSString *priceText;
@property (copy, nonatomic) NSString *recruitedText;
@property (nonatomic) long long style;

+ (id)JSONKeyPathsByPropertyKey;

- (id)typeText;
- (void)setTypeText:(id)arg0;
- (id)typeTextColor;
- (void)setTypeTextColor:(id)arg0;
- (id)typeTextLightColor;
- (void)setTypeTextLightColor:(id)arg0;
- (id)typeTextBackgroundColor;
- (void)setTypeTextBackgroundColor:(id)arg0;
- (id)typeTextLightBackgroundColor;
- (void)setTypeTextLightBackgroundColor:(id)arg0;
- (id)recruitedText;
- (void)setRecruitedText:(id)arg0;
- (long long)style;
- (void).cxx_destruct;
- (void)setStyle:(long long)arg0;
- (void)setInfoText:(id)arg0;
- (id)infoText;
- (id)priceText;
- (void)setPriceText:(id)arg0;

@end
