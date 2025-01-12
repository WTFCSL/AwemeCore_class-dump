//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, IESForestKit, NSObject;
@protocol OS_dispatch_queue;

@interface LynxResourceService : NSObject <LynxServiceResourceProtocol> {
    NSMutableDictionary *_forestKits;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    IESForestKit *_forestKit;
}

@property (retain, nonatomic) IESForestKit *forestKit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)createRequestParams:(id)arg0;
+ (unsigned long long)serviceType;

- (id)fetchResourceAsync:(id)arg0 parameters:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchResourceSync:(id)arg0 parameters:(id)arg1 error:(id *)arg2;
- (id)forestKit;
- (void)setForestKit:(id)arg0;
- (BOOL)isGeckoResource:(id)arg0;
- (id)geckoResourcePathForURLString:(id)arg0;
- (void)preloadMedia:(id)arg0 cacheKey:(id)arg1 videoID:(id)arg2 videoModel:(id)arg3 resolution:(unsigned long long)arg4 encodeType:(unsigned long long)arg5 apiString:(id)arg6 size:(long long)arg7;
- (void)cancelPreloadMedia:(id)arg0 videoID:(id)arg1 videoModel:(BOOL)arg2;
- (void)addResourceLoader:(id)arg0 TemplateUrl:(id)arg1;
- (id)getForestKitByKey:(id)arg0;
- (void)addForestKit:(id)arg0 Key:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
