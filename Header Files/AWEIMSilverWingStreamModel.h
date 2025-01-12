//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEIMSilverWingStreamModel : MTLModel <MTLJSONSerializing> {
    BOOL _answerFinish;
    unsigned long long _streamStatus;
    long long _statusCode;
    NSString *_text;
    NSArray *_range;
    NSArray *_suggestions;
}

@property (nonatomic) unsigned long long streamStatus;
@property (nonatomic) long long statusCode;
@property (nonatomic) BOOL answerFinish;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *range;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)suggestionsJSONTransformer;

- (void)setStreamStatus:(unsigned long long)arg0;
- (BOOL)answerFinish;
- (void)setAnswerFinish:(BOOL)arg0;
- (void)checkDataWithMessageContentDict:(id)arg0 beforeSuggestionIndex:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)combineWithModel:(id)arg0;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg0;
- (void).cxx_destruct;
- (void)setSuggestions:(id)arg0;
- (void)setText:(id)arg0;
- (void)setRange:(id)arg0;
- (id)range;
- (id)suggestions;
- (unsigned long long)streamStatus;
- (id)text;

@end
