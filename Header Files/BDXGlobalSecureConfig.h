//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDXGlobalSecureConfig : NSObject {
    NSDictionary *_globalConfigMap;
}

@property (copy, nonatomic) NSDictionary *globalConfigMap;

+ (id)shareInstance;

- (void)updateDefaultGlobalConfig:(id)arg0 bid:(id)arg1;
- (id)globalConfigMap;
- (void)setGlobalConfigMap:(id)arg0;
- (id)globalConfigWithBid:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)_defaultKey;

@end
