//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEMusicStreamingImpl.LunaSearchGroup : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ hasMore;
    void /* unknown type, empty encoding */ nextCursor;
    void /* unknown type, empty encoding */ items;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic) void /* unknown type, empty encoding */ hasMore;
@property (nonatomic, copy) NSString *nextCursor;
@property (nonatomic, copy) NSArray *items;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)nextCursor;
- (void)setNextCursor:(id)arg0;
- (id)init;
- (void)setItems:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)items;
- (id)id;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)initWithCoder:(id)arg0;
- (void)setId:(id)arg0;

@end
