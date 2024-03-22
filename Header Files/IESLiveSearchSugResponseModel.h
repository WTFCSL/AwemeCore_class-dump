//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary, IESLiveRecommendWordQueryRecordModel;

@interface IESLiveSearchSugResponseModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *sugList;
@property (retain, nonatomic) IESLiveRecommendWordQueryRecordModel *wordsQueryRecord;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wordsQueryRecordJSONTransformer;
+ (id)sugListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
