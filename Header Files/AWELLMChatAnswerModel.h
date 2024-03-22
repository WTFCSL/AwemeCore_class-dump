//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWELLMChatAnswerModel : AWEBaseApiModel {
    NSString *_text;
    NSArray *_keywords;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *keywords;

+ (id)keywordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (id)keywords;
- (void)setKeywords:(id)arg0;

@end