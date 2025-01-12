//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWETeenSearchSugWordModel : AWEBaseApiModel {
    NSString *_wordID;
    NSString *_word;
    long long _icon;
    long long _wordSource;
    NSArray *_mathchArr;
}

@property (copy, nonatomic) NSString *wordID;
@property (copy, nonatomic) NSString *word;
@property (nonatomic) long long icon;
@property (nonatomic) long long wordSource;
@property (retain, nonatomic) NSArray *mathchArr;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setMathchArr:(id)arg0;
- (id)mathchArr;
- (long long)icon;
- (void).cxx_destruct;
- (void)setIcon:(long long)arg0;
- (long long)wordSource;
- (void)setWordSource:(long long)arg0;
- (id)wordID;
- (void)setWordID:(id)arg0;
- (id)word;
- (void)setWord:(id)arg0;

@end
