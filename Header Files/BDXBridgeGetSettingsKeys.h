//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeGetSettingsKeys : BDXBridgeModel {
    NSString *_key;
    NSString *_biz;
    unsigned long long _type;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *biz;
@property (nonatomic) unsigned long long type;

+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)biz;
- (void)setBiz:(id)arg0;
- (id)key;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setKey:(id)arg0;
- (void)setType:(unsigned long long)arg0;

@end
