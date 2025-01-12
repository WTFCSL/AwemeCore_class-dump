//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEIMTextTriggerAnimationModel : MTLModel <MTLJSONSerializing> {
    BOOL _inAdvance;
    int _total;
    NSArray *_keyword;
    NSArray *_info;
}

@property (nonatomic) BOOL inAdvance;
@property (nonatomic) int total;
@property (copy, nonatomic) NSArray *keyword;
@property (copy, nonatomic) NSArray *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoJSONTransformer;
+ (id)keywordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)inAdvance;
- (void)setInAdvance:(BOOL)arg0;
- (int)total;
- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (void)setTotal:(int)arg0;

@end
