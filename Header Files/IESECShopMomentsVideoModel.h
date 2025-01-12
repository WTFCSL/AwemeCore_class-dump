//
//     Generated by private class-dump
//

@class NSString, IESECRelationGoodsModel, NSDictionary, NSNumber;

@interface IESECShopMomentsVideoModel : MTLModel <MTLJSONSerializing> {
    BOOL _enableNewStyle;
    unsigned long long _momentType;
    NSNumber *_momentId;
    NSString *_momentIdStr;
    NSString *_momentTime;
    NSString *_titleText;
    IESECRelationGoodsModel *_goodsModel;
    NSString *_feedData;
    NSDictionary *_feedDataDic;
    NSDictionary *_logExtra;
}

@property (nonatomic) unsigned long long momentType;
@property (retain, nonatomic) NSNumber *momentId;
@property (copy, nonatomic) NSString *momentIdStr;
@property (copy, nonatomic) NSString *momentTime;
@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) IESECRelationGoodsModel *goodsModel;
@property (copy, nonatomic) NSString *feedData;
@property (copy, nonatomic) NSDictionary *feedDataDic;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic, getter=isEnableNewStyle) BOOL enableNewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedDataDicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)feedData;
- (void)setMomentType:(unsigned long long)arg0;
- (unsigned long long)momentType;
- (id)momentId;
- (void)setMomentId:(id)arg0;
- (id)goodsModel;
- (void)setGoodsModel:(id)arg0;
- (void)setEnableNewStyle:(BOOL)arg0;
- (BOOL)isEnableNewStyle;
- (id)momentTime;
- (id)feedDataDic;
- (id)momentIdStr;
- (void)setMomentIdStr:(id)arg0;
- (void)setMomentTime:(id)arg0;
- (void)setFeedData:(id)arg0;
- (void)setFeedDataDic:(id)arg0;
- (void)setTitleText:(id)arg0;
- (void).cxx_destruct;
- (id)titleText;

@end
