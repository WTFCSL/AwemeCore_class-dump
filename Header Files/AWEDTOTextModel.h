//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEDTOTextModel : MTLModel <MTLJSONSerializing> {
    NSString *_text;
    long long _startTime;
    long long _endTime;
    long long _layer;
    NSArray *_words;
    long long _stickerId;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long layer;
@property (copy, nonatomic) NSArray *words;
@property (nonatomic) long long stickerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setStickerId:(long long)arg0;
- (long long)stickerId;
- (void)setStartTime:(long long)arg0;
- (void)setLayer:(long long)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (long long)endTime;
- (long long)startTime;
- (long long)layer;
- (id)text;
- (void)setEndTime:(long long)arg0;
- (id)words;
- (void)setWords:(id)arg0;

@end
