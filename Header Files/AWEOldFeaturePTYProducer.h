//
//     Generated by private class-dump
//

@class NSLock, NSMutableDictionary, NSString;

@interface AWEOldFeaturePTYProducer : NSObject <PTYIFeatureProducer> {
    NSMutableDictionary *_configCache;
    NSLock *_configCacheLock;
}

@property (retain, nonatomic) NSMutableDictionary *configCache;
@property (retain, nonatomic) NSLock *configCacheLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getStrFeature:(id)arg0 extParams:(id)arg1;
- (float)getNumicFeature:(id)arg0 extParams:(id)arg1;
- (id)getSeqFeature:(id)arg0 extParams:(id)arg1;
- (id)getDictFeature:(id)arg0 extParams:(id)arg1;
- (id)getHARSensorDataWithFeatureName:(id)arg0 extParams:(id)arg1;
- (id)getFeaturesFromIESFCWithExtParams:(id)arg0;
- (id)configCacheLock;
- (id)configCache;
- (void)setConfigCache:(id)arg0;
- (void)setConfigCacheLock:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)groupName;

@end