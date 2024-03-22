//
//     Generated by private class-dump
//

@class NSString, BDXResourceLoaderTaskConfig, BDXRLPreloadItemConfig;

@interface BDXPreloaderOperation : NSOperation {
    NSString *_bulletSchema;
    BDXRLPreloadItemConfig *_preloadItemConfig;
    BDXResourceLoaderTaskConfig *_taskConfig;
}

@property (copy, nonatomic) NSString *bulletSchema;
@property (retain, nonatomic) BDXRLPreloadItemConfig *preloadItemConfig;
@property (retain, nonatomic) BDXResourceLoaderTaskConfig *taskConfig;

- (id)taskConfig;
- (void)setTaskConfig:(id)arg0;
- (id)bulletSchema;
- (void)setBulletSchema:(id)arg0;
- (id)initWith:(id)arg0 preloadItemConfig:(id)arg1 taskConfig:(id)arg2;
- (id)preloadItemConfig;
- (void)setPreloadItemConfig:(id)arg0;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;

@end
