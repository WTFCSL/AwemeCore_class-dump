//
//     Generated by private class-dump
//

@class NSString;

@interface IESECWinExtensionControlnfo : MTLModel <MTLJSONSerializing> {
    BOOL _hasMore;
    NSString *_commonPassThrough;
    NSString *_nextApi;
    long long _cursor;
}

@property (copy, nonatomic) NSString *commonPassThrough;
@property (copy, nonatomic) NSString *nextApi;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)commonPassThrough;
- (void)setCommonPassThrough:(id)arg0;
- (id)nextApi;
- (void)setNextApi:(id)arg0;
- (long long)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(long long)arg0;

@end
