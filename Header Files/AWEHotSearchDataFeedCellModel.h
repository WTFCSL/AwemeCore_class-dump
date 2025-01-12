//
//     Generated by private class-dump
//

@class NSArray, AWEShareModel, NSString;

@interface AWEHotSearchDataFeedCellModel : AWEBaseApiModel {
    NSArray *_wordList;
    AWEShareModel *_shareInfo;
    NSString *_activeTime;
    NSString *_schema;
}

@property (copy, nonatomic) NSArray *wordList;
@property (retain, nonatomic) AWEShareModel *shareInfo;
@property (copy, nonatomic) NSString *activeTime;
@property (copy, nonatomic) NSString *schema;

+ (id)shareInfoJSONTransformer;
+ (id)wordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)wordList;
- (void)setWordList:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)shareInfo;
- (void)setShareInfo:(id)arg0;
- (id)schema;
- (id)activeTime;
- (void)setActiveTime:(id)arg0;

@end
