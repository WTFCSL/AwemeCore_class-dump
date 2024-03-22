//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEDiscoverCategoryRecordImageModel;

@interface AWEDiscoverCategoryRecordModel : AWEBaseApiModel {
    BOOL _isTracked;
    NSString *_wordID;
    NSNumber *_wordPosition;
    NSString *_wordContent;
    NSString *_source;
    AWEDiscoverCategoryRecordImageModel *_wordsImage;
}

@property (copy, nonatomic) NSString *wordID;
@property (retain, nonatomic) NSNumber *wordPosition;
@property (copy, nonatomic) NSString *wordContent;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL isTracked;
@property (retain, nonatomic) AWEDiscoverCategoryRecordImageModel *wordsImage;

+ (id)wordsImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)wordsImage;
- (void)setWordsImage:(id)arg0;
- (id)wordContent;
- (void)setWordContent:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (void)setSource:(id)arg0;
- (id)wordID;
- (void)setWordID:(id)arg0;
- (BOOL)isTracked;
- (void)setIsTracked:(BOOL)arg0;
- (id)wordPosition;
- (void)setWordPosition:(id)arg0;

@end