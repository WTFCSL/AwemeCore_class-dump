//
//     Generated by private class-dump
//

@class NSString, AWELifeShelfCardListItemCardData;

@interface AWELifeLiveMessageCardInfo : MTLModel <MTLJSONSerializing> {
    AWELifeShelfCardListItemCardData *_cardData;
    NSString *_cardId;
}

@property (copy, nonatomic) AWELifeShelfCardListItemCardData *cardData;
@property (copy, nonatomic) NSString *cardId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)cardId;
- (id)cardData;
- (void)setCardData:(id)arg0;
- (void)setCardId:(id)arg0;

@end
