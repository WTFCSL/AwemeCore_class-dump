//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECLiveGoodsCombinationExtroInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _isBound;
    NSNumber *_originMaxPrice;
    NSNumber *_originMinPrice;
    NSNumber *_comboMaxPrice;
    NSNumber *_comboMinPrice;
    NSString *_cardBackgroundColor;
}

@property (nonatomic) BOOL isBound;
@property (retain, nonatomic) NSNumber *originMaxPrice;
@property (retain, nonatomic) NSNumber *originMinPrice;
@property (retain, nonatomic) NSNumber *comboMaxPrice;
@property (retain, nonatomic) NSNumber *comboMinPrice;
@property (retain, nonatomic) NSString *cardBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)originMaxPrice;
- (void)setOriginMaxPrice:(id)arg0;
- (id)originMinPrice;
- (void)setOriginMinPrice:(id)arg0;
- (id)comboMaxPrice;
- (void)setComboMaxPrice:(id)arg0;
- (id)comboMinPrice;
- (void)setComboMinPrice:(id)arg0;
- (void).cxx_destruct;
- (void)setCardBackgroundColor:(id)arg0;
- (id)cardBackgroundColor;
- (BOOL)isBound;
- (void)setIsBound:(BOOL)arg0;

@end
