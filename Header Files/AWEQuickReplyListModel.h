//
//     Generated by private class-dump
//

@class NSArray, NSNumber, NSString;

@interface AWEQuickReplyListModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasFunction;
    NSArray *_replyModels;
    NSNumber *_maxCount;
    NSNumber *_maxWords;
}

@property (copy, nonatomic) NSArray *replyModels;
@property (retain, nonatomic) NSNumber *maxCount;
@property (retain, nonatomic) NSNumber *maxWords;
@property (nonatomic) BOOL hasFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replyModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)replyModels;
- (void)setReplyModels:(id)arg0;
- (id)maxWords;
- (void)setMaxWords:(id)arg0;
- (void)setHasFunction:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setMaxCount:(id)arg0;
- (id)maxCount;
- (BOOL)hasFunction;

@end
