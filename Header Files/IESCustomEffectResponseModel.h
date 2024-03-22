//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESCustomEffectResponseModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasMore;
    NSArray *_customEffects;
    NSArray *_templateEffects;
    NSArray *_urlPrefixs;
    NSArray *_customURLPrefixs;
    long long _cursor;
    long long _sortingPosition;
}

@property (copy, nonatomic) NSArray *customEffects;
@property (copy, nonatomic) NSArray *templateEffects;
@property (copy, nonatomic) NSArray *urlPrefixs;
@property (copy, nonatomic) NSArray *customURLPrefixs;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) long long cursor;
@property (readonly, nonatomic) long long sortingPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (long long)sortingPosition;
- (id)customEffects;
- (id)templateEffects;
- (id)urlPrefixs;
- (id)customURLPrefixs;
- (void)updateFileURLForEffects;
- (void)setCustomEffects:(id)arg0;
- (void)setTemplateEffects:(id)arg0;
- (void)setUrlPrefixs:(id)arg0;
- (void)setCustomURLPrefixs:(id)arg0;
- (long long)cursor;
- (void).cxx_destruct;
- (BOOL)hasMore;

@end