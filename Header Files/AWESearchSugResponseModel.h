//
//     Generated by private class-dump
//

@class NSArray, AWERecommendWordQueryRecordModel, NSDictionary;

@interface AWESearchSugResponseModel : AWEBaseApiModel {
    NSArray *_sugList;
    NSArray *_virtualSugList;
    AWERecommendWordQueryRecordModel *_wordsQueryRecord;
    NSArray *_wordsLists;
    NSDictionary *_streamTimeCost;
}

@property (copy, nonatomic) NSArray *sugList;
@property (copy, nonatomic) NSArray *virtualSugList;
@property (retain, nonatomic) AWERecommendWordQueryRecordModel *wordsQueryRecord;
@property (copy, nonatomic) NSArray *wordsLists;
@property (copy, nonatomic) NSDictionary *streamTimeCost;

+ (id)wordsQueryRecordJSONTransformer;
+ (id)sugListJSONTransformer;
+ (id)virtualSugListJSONTransformer;
+ (id)wordsListsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)wordsQueryRecord;
- (void)setWordsQueryRecord:(id)arg0;
- (id)streamTimeCost;
- (void)setStreamTimeCost:(id)arg0;
- (id)sugList;
- (void)setSugList:(id)arg0;
- (id)wordsLists;
- (id)virtualSugList;
- (void)setVirtualSugList:(id)arg0;
- (void)setWordsLists:(id)arg0;
- (void).cxx_destruct;

@end