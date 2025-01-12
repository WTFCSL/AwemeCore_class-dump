//
//     Generated by private class-dump
//

@class NSString, PIABiMapTable, YYMemoryCache;

@interface PIAContextService : NSObject <PIAContextService> {
    PIABiMapTable *_contextMap;
    YYMemoryCache *_contextCache;
}

@property (retain, nonatomic) PIABiMapTable *contextMap;
@property (retain, nonatomic) YYMemoryCache *contextCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (id)createPIAContextWithURL:(id)arg0;
- (id)createPIAContextWithInstance:(id)arg0 URL:(id)arg1;
- (id)getPIAContextWithInstance:(id)arg0;
- (void)releaseContext:(id)arg0;
- (void)releaseContextForKey:(id)arg0;
- (id)contextMap;
- (void)setContextMap:(id)arg0;
- (void).cxx_destruct;
- (id)contextCache;
- (void)setContextCache:(id)arg0;

@end
