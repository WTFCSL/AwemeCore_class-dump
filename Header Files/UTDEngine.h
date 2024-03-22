//
//     Generated by private class-dump
//

@class UTDLogUploadManager, UTDCacheManager;

@interface UTDEngine : NSObject {
    UTDLogUploadManager *_uploadManager;
    UTDCacheManager *_cacheManager;
    struct dispatch_queue_s { } *_storeQueue;
}

+ (id)sharedUTDEngine;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;

- (void)addLog:(id)arg0;
- (void)asyncAddLog:(id)arg0;
- (BOOL)addUTDLog:(id)arg0;
- (id)init;
- (void)synchronize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end