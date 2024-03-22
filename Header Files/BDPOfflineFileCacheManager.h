//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BDPOfflineFileCacheManager : NSObject {
    NSString *_offlineFolderPath;
    NSString *_offlineTempPath;
    NSString *_offlineConfigPath;
    NSObject<OS_dispatch_queue> *_fileProcessQueue;
}

@property (copy, nonatomic) NSString *offlineFolderPath;
@property (copy, nonatomic) NSString *offlineTempPath;
@property (copy, nonatomic) NSString *offlineConfigPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileProcessQueue;

+ (id)shareManager;

- (id)offlineFolderPath;
- (void)setOfflineFolderPath:(id)arg0;
- (void)setupDefaultOfflineZipIfNeed;
- (BOOL)hasCacheWithModuleName:(id)arg0 filePath:(id)arg1;
- (id)fileProcessQueue;
- (id)offlineTempPath;
- (void)updateLocalConfigWithPackage:(id)arg0;
- (id)syncGetDataWithModuleName:(id)arg0 filePath:(id)arg1 needTrack:(BOOL)arg2;
- (id)_getLocalOfflineConfig;
- (id)offlineConfigPath;
- (BOOL)setupOffineZipWithPath:(id)arg0 package:(id)arg1 error:(id *)arg2;
- (id)syncGetDataWithModuleName:(id)arg0 filePath:(id)arg1;
- (id)getLocalOfflinePackagesConfig;
- (void)setOfflineTempPath:(id)arg0;
- (void)setOfflineConfigPath:(id)arg0;
- (void)setFileProcessQueue:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
