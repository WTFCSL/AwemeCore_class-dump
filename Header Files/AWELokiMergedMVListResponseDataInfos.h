//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWELokiMergedMVListResponseDataInfos : MTLModel <MTLJSONSerializing> {
    BOOL _hasMore;
    long long _cursor;
    NSArray *_templates;
}

@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *templates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)cursor;
- (void).cxx_destruct;
- (id)templates;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setTemplates:(id)arg0;
- (void)setCursor:(long long)arg0;

@end
