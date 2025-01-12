//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWELifeShelfCardListItemCardDataMinusSaleInfo : MTLModel <MTLJSONSerializing> {
    NSString *_minusSaleId;
    NSNumber *_minusSalePrice;
    NSString *_minusType;
    NSString *_minusRule;
    NSNumber *_allianceTaskId;
    NSNumber *_minusActivityId;
    NSString *_minusSaleTicketTag;
    NSString *_actualAmountTag;
    NSString *_leftQuantityTag;
}

@property (copy, nonatomic) NSString *minusSaleId;
@property (copy, nonatomic) NSNumber *minusSalePrice;
@property (copy, nonatomic) NSString *minusType;
@property (copy, nonatomic) NSString *minusRule;
@property (copy, nonatomic) NSNumber *allianceTaskId;
@property (copy, nonatomic) NSNumber *minusActivityId;
@property (copy, nonatomic) NSString *minusSaleTicketTag;
@property (copy, nonatomic) NSString *actualAmountTag;
@property (copy, nonatomic) NSString *leftQuantityTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)minusSaleId;
- (id)allianceTaskId;
- (id)minusActivityId;
- (void)setMinusSaleId:(id)arg0;
- (void)setAllianceTaskId:(id)arg0;
- (void)setMinusActivityId:(id)arg0;
- (id)minusSalePrice;
- (void)setMinusSalePrice:(id)arg0;
- (id)minusType;
- (void)setMinusType:(id)arg0;
- (id)minusRule;
- (void)setMinusRule:(id)arg0;
- (id)minusSaleTicketTag;
- (void)setMinusSaleTicketTag:(id)arg0;
- (id)actualAmountTag;
- (void)setActualAmountTag:(id)arg0;
- (id)leftQuantityTag;
- (void)setLeftQuantityTag:(id)arg0;
- (void).cxx_destruct;

@end
