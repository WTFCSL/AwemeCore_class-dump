//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchAladdinLogDict : AWEBaseApiModel {
    NSString *_aladdinSource;
    long long _docId;
    NSString *_subTokenType;
    NSString *_secondTokenType;
}

@property (retain, nonatomic) NSString *aladdinSource;
@property (nonatomic) long long docId;
@property (retain, nonatomic) NSString *subTokenType;
@property (retain, nonatomic) NSString *secondTokenType;

+ (id)JSONKeyPathsByPropertyKey;

- (id)aladdinSource;
- (void)setAladdinSource:(id)arg0;
- (long long)docId;
- (void)setDocId:(long long)arg0;
- (id)subTokenType;
- (void)setSubTokenType:(id)arg0;
- (id)secondTokenType;
- (void)setSecondTokenType:(id)arg0;
- (void).cxx_destruct;

@end