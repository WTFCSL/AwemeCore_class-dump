//
//     Generated by private class-dump
//

@class NSArray, IESECRecommendFeedbackItemModel, NSString;

@interface IESECRecommendFeedbackModel : MTLModel <MTLJSONSerializing> {
    NSArray *_firstPageItemList;
    NSArray *_secondPageItemList;
    NSArray *_itemList;
    unsigned long long _firstPageLimit;
    IESECRecommendFeedbackItemModel *_clickModel;
    unsigned long long _closeType;
}

@property (retain, nonatomic) NSArray *itemList;
@property (nonatomic) unsigned long long firstPageLimit;
@property (retain, nonatomic) IESECRecommendFeedbackItemModel *clickModel;
@property (nonatomic) unsigned long long closeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)closeType;
- (void)setCloseType:(unsigned long long)arg0;
- (unsigned long long)firstPageLimit;
- (void)setFirstPageLimit:(unsigned long long)arg0;
- (id)clickModel;
- (void)setClickModel:(id)arg0;
- (id)firstPageItemList;
- (id)secondPageItemList;
- (unsigned long long)getRealPageLimit;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:(id)arg0;

@end
