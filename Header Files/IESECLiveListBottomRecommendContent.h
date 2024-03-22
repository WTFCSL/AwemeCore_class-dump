//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECLiveListBottomRecommendContent : MTLModel <MTLJSONSerializing> {
    long long _recommendPosition;
    NSArray *_replaceContent;
}

@property (nonatomic) long long recommendPosition;
@property (retain, nonatomic) NSArray *replaceContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replaceContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)recommendPosition;
- (void)setRecommendPosition:(long long)arg0;
- (id)replaceContent;
- (void)setReplaceContent:(id)arg0;
- (void).cxx_destruct;

@end