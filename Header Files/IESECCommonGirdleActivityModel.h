//
//     Generated by private class-dump
//

@class NSString, IESECURLModel;

@interface IESECCommonGirdleActivityModel : MTLModel <MTLJSONSerializing> {
    long long _type;
    IESECURLModel *_bgPicture;
    IESECURLModel *_bgLeftPicture;
    IESECURLModel *_bgMidPicture;
    IESECURLModel *_bgRightPicture;
    NSString *_effectivePriceDesc;
    NSString *_discountPriceDesc;
    NSString *_regularPriceDesc;
    NSString *_priceDesc;
    NSString *_title;
    double _endTime;
    double _initTimeinterval;
    double _serverTime;
}

@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (nonatomic) long long type;
@property (retain, nonatomic) IESECURLModel *bgPicture;
@property (retain, nonatomic) IESECURLModel *bgLeftPicture;
@property (retain, nonatomic) IESECURLModel *bgMidPicture;
@property (retain, nonatomic) IESECURLModel *bgRightPicture;
@property (copy, nonatomic) NSString *effectivePriceDesc;
@property (copy, nonatomic) NSString *discountPriceDesc;
@property (copy, nonatomic) NSString *regularPriceDesc;
@property (copy, nonatomic) NSString *priceDesc;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double endTime;
@property (readonly, nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setServerTime:(double)arg0;
- (id)priceDesc;
- (void)setPriceDesc:(id)arg0;
- (double)initTimeinterval;
- (void)setInitTimeinterval:(double)arg0;
- (id)bgPicture;
- (id)bgRightPicture;
- (id)effectivePriceDesc;
- (void)setBgPicture:(id)arg0;
- (id)bgLeftPicture;
- (void)setBgLeftPicture:(id)arg0;
- (id)bgMidPicture;
- (void)setBgMidPicture:(id)arg0;
- (void)setBgRightPicture:(id)arg0;
- (void)setEffectivePriceDesc:(id)arg0;
- (id)discountPriceDesc;
- (void)setDiscountPriceDesc:(id)arg0;
- (id)regularPriceDesc;
- (void)setRegularPriceDesc:(id)arg0;
- (id)init;
- (double)serverTime;
- (void).cxx_destruct;
- (long long)type;
- (double)endTime;
- (id)title;
- (void)setType:(long long)arg0;
- (double)currentTime;
- (void)setEndTime:(double)arg0;
- (void)setTitle:(id)arg0;

@end
