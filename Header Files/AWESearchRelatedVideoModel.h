//
//     Generated by private class-dump
//

@class NSArray, AWESearchVideoWordsQueryRecordModel;

@interface AWESearchRelatedVideoModel : AWEBaseApiModel {
    NSArray *_relatedWordList;
    AWESearchVideoWordsQueryRecordModel *_wordsQueryRecord;
}

@property (retain, nonatomic) NSArray *relatedWordList;
@property (retain, nonatomic) AWESearchVideoWordsQueryRecordModel *wordsQueryRecord;

+ (id)relatedWordListJSONTransformer;
+ (id)wordsQueryRecordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)relatedWordList;
- (void)setRelatedWordList:(id)arg0;
- (id)wordsQueryRecord;
- (void)setWordsQueryRecord:(id)arg0;
- (void).cxx_destruct;

@end
