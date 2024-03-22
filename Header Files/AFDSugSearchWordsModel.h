//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AFDSugSearchWordsModel : AWEBaseApiModel {
    NSArray *_wordsArray;
    NSString *_queryID;
}

@property (copy, nonatomic) NSArray *wordsArray;
@property (copy, nonatomic) NSString *queryID;

+ (id)wordsArrayJSONTransformer;
+ (long long)followStatusWithFollowStatusStr:(id)arg0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)wordsArray;
- (void)setWordsArray:(id)arg0;
- (void).cxx_destruct;
- (id)queryID;
- (void)setQueryID:(id)arg0;

@end