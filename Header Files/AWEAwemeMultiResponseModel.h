//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEAwemeMultiResponseModel : AWEBaseApiModel {
    NSArray *_awemeList;
    NSArray *_filteredModels;
    NSArray *_emojiList;
    NSArray *_verificationFilterList;
}

@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSArray *filteredModels;
@property (copy, nonatomic) NSArray *emojiList;
@property (copy, nonatomic) NSArray *verificationFilterList;

+ (id)awemeListJSONTransformer;
+ (id)filteredModelsJSONTransformer;
+ (id)verificationFilterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (id)filteredModels;
- (void)setAwemeList:(id)arg0;
- (void)setFilteredModels:(id)arg0;
- (void)setEmojiList:(id)arg0;
- (id)verificationFilterList;
- (void)setVerificationFilterList:(id)arg0;
- (void).cxx_destruct;
- (id)emojiList;

@end
