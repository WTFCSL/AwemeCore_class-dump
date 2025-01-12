//
//     Generated by private class-dump
//

@class NSString, AWERecommendTemplateModel, AFDRecommendReasonDataModel;

@interface AWELocalFamiliarModel : AWELocalUserCenterBaseModel <WCTTableCoding> {
    NSString *_recommendReason;
    AWERecommendTemplateModel *_recommendTemplate;
    NSString *_reasonCode;
    double _score;
    NSString *_extra;
    AFDRecommendReasonDataModel *_recommendReasonDataModel;
}

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) AWERecommendTemplateModel *recommendTemplate;
@property (copy, nonatomic) NSString *reasonCode;
@property (nonatomic) double score;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) AFDRecommendReasonDataModel *recommendReasonDataModel;

+ (const void *)modifyTime;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)recommendReason;
+ (id)recommendTemplateJSONTransformer;
+ (const void *)recommendTemplate;
+ (const void *)recommendReasonDataModel;
+ (const void *)userID;
+ (const void *)score;
+ (const void *)updateTime;
+ (const void *)extra;
+ (const void *)reasonCode;
+ (const void *)isDeleted;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg0;
- (id)recommendTemplate;
- (void)setRecommendTemplate:(id)arg0;
- (id)recommendReasonDataModel;
- (void)setRecommendReasonDataModel:(id)arg0;
- (id)userPropertyDetail;
- (void)setReasonCode:(id)arg0;
- (void)setScore:(double)arg0;
- (double)score;
- (void).cxx_destruct;
- (id)extra;
- (id)targetTable;
- (id)reasonCode;

@end
