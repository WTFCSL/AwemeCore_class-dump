//
//     Generated by private class-dump
//

@class NSString, BDXPreloadStrategy, BDXResourceLoaderTaskConfig, NSDictionary;

@interface BDXPreloadConfigBuilder : NSObject {
    BOOL _triggerPrefetch;
    NSString *_urlString;
    BDXPreloadStrategy *_strategy;
    BDXResourceLoaderTaskConfig *_taskConfig;
    NSDictionary *_configJSONObject;
    id /* block */ _processBlock;
    NSString *_prefetchBusiness;
}

@property (nonatomic) BOOL internal_fromRouter;
@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) BDXPreloadStrategy *strategy;
@property (retain, nonatomic) BDXResourceLoaderTaskConfig *taskConfig;
@property (copy, nonatomic) NSDictionary *configJSONObject;
@property (copy, nonatomic) id /* block */ processBlock;
@property (nonatomic) BOOL triggerPrefetch;
@property (copy, nonatomic) NSString *prefetchBusiness;

- (id)taskConfig;
- (void)setPrefetchBusiness:(id)arg0;
- (void)setTaskConfig:(id)arg0;
- (id)prefetchBusiness;
- (void)setConfigJSONObject:(id)arg0;
- (void)setTriggerPrefetch:(BOOL)arg0;
- (BOOL)internal_fromRouter;
- (void)setInternal_fromRouter:(BOOL)arg0;
- (id)configJSONObject;
- (BOOL)triggerPrefetch;
- (id)urlString;
- (id)strategy;
- (void).cxx_destruct;
- (void)setProcessBlock:(id /* block */)arg0;
- (id /* block */)processBlock;
- (void)setUrlString:(id)arg0;
- (void)setStrategy:(id)arg0;

@end
