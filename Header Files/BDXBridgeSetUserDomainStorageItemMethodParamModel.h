//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface BDXBridgeSetUserDomainStorageItemMethodParamModel : BDXBridgeModel {
    BOOL _enableAppIdIsolation;
    NSString *_key;
    id _data;
    NSNumber *_expiredTime;
}

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSNumber *expiredTime;
@property (nonatomic) BOOL enableAppIdIsolation;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)expiredTime;
- (void)setExpiredTime:(id)arg0;
- (BOOL)enableAppIdIsolation;
- (void)setEnableAppIdIsolation:(BOOL)arg0;
- (id)key;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setKey:(id)arg0;

@end
