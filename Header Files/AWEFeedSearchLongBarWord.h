//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEFeedSearchLongBarWord : AWEBaseApiModel {
    NSString *_word;
    NSString *_wordId;
    NSDictionary *_params;
}

@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *wordId;
@property (copy, nonatomic) NSDictionary *params;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)params;
- (id)wordId;
- (void)setWordId:(id)arg0;
- (id)word;
- (void)setWord:(id)arg0;
- (void)setParams:(id)arg0;

@end
