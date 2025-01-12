//
//     Generated by private class-dump
//

@protocol SECWebTrafficFeatureDetector, SECWebSafetyPolicy;

@interface SECWebSafetyShieldPluginSetting : NSObject {
    id<SECWebSafetyPolicy> _policy;
    id<SECWebTrafficFeatureDetector> _webFeatureDetector;
}

@property (retain, nonatomic) id<SECWebSafetyPolicy> policy;
@property (retain, nonatomic) id<SECWebTrafficFeatureDetector> webFeatureDetector;

- (void)setWebFeatureDetector:(id)arg0;
- (id)webFeatureDetector;
- (id)init;
- (void).cxx_destruct;
- (id)policy;
- (void)setPolicy:(id)arg0;

@end
