//
//     Generated by private class-dump
//

@class AWEHangoutJumpSatisfactionCardModel, NSString, AWEHangoutLightSatisfactionCardModel, AWEHangoutSearchCardModel, AWEHangoutOperationCardModel, AWEHangoutCommonLynxCardModel;

@interface AWEHangoutCardModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _type;
    AWEHangoutSearchCardModel *_searchCard;
    AWEHangoutOperationCardModel *_operationCard;
    AWEHangoutLightSatisfactionCardModel *_lightSatisfactionCard;
    AWEHangoutJumpSatisfactionCardModel *_jumpSatisfactionCard;
    AWEHangoutCommonLynxCardModel *_commonLynxCard;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEHangoutSearchCardModel *searchCard;
@property (retain, nonatomic) AWEHangoutOperationCardModel *operationCard;
@property (retain, nonatomic) AWEHangoutLightSatisfactionCardModel *lightSatisfactionCard;
@property (retain, nonatomic) AWEHangoutJumpSatisfactionCardModel *jumpSatisfactionCard;
@property (retain, nonatomic) AWEHangoutCommonLynxCardModel *commonLynxCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)commonLynxCard;
- (id)jumpSatisfactionCard;
- (id)lightSatisfactionCard;
- (id)operationCard;
- (id)searchCard;
- (void)setSearchCard:(id)arg0;
- (void)setOperationCard:(id)arg0;
- (void)setLightSatisfactionCard:(id)arg0;
- (void)setJumpSatisfactionCard:(id)arg0;
- (void)setCommonLynxCard:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;

@end