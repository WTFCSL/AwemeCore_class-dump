//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEMusicStreamingImpl.LunaLimitedFreeInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ queueTypes;
}

@property (nonatomic, copy) NSArray *queueTypes;

+ (id)queueTypesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)queueTypes;
- (void)setQueueTypes:(id)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (BOOL)isEqualTo:(id)arg0;

@end