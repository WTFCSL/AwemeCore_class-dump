//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWEIMActiveUserConstantConvertUtility : NSObject {
    NSDictionary *_enum_forceFetchSourceKey;
    NSDictionary *_enum_loopFetchSourceKey;
    NSDictionary *_fetchSourceKey_enum;
}

@property (copy) NSDictionary *enum_forceFetchSourceKey;
@property (copy) NSDictionary *enum_loopFetchSourceKey;
@property (copy) NSDictionary *fetchSourceKey_enum;

+ (unsigned long long)sourceTypeFromFetchSourceKey:(id)arg0;
+ (id)forceFetchSourceKeyFromSourceTypeEnum:(unsigned long long)arg0;
+ (id)loopFetchSourceKeyFromSourceTypeEnum:(unsigned long long)arg0;
+ (id)sharedInstance;

- (void)setEnum_forceFetchSourceKey:(id)arg0;
- (void)setEnum_loopFetchSourceKey:(id)arg0;
- (void)setFetchSourceKey_enum:(id)arg0;
- (id)enum_forceFetchSourceKey;
- (id)enum_loopFetchSourceKey;
- (id)fetchSourceKey_enum;
- (id)init;
- (void).cxx_destruct;

@end
