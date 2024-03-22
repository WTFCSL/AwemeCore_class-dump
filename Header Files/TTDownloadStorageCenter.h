//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol TTDownloadStorageProtocol;

@interface TTDownloadStorageCenter : NSObject <TTDownloadStorageProtocol> {
    NSObject<TTDownloadStorageProtocol> *ttDTO;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)insertOrUpdateClearCacheRule:(id)arg0 error:(id *)arg1;
- (BOOL)deleteClearCacheRule:(id)arg0 error:(id *)arg1;
- (BOOL)updateParametersTable:(id)arg0 error:(id *)arg1;
- (BOOL)deleteSubSliceInfo:(id)arg0 error:(id *)arg1;
- (BOOL)updateExtendConfigSync:(id)arg0 error:(id *)arg1;
- (BOOL)insertOrUpdateSubSliceInfo:(id)arg0 error:(id *)arg1;
- (id)initWithDownloadStorageImplType:(long long)arg0;
- (BOOL)queryDownloadTaskConfigWithUrlSync:(id)arg0 downloadTaskResultBlock:(id /* block */)arg1 error:(id *)arg2;
- (BOOL)queryAllDownloadTaskConfigSync:(id /* block */)arg0 isTriggerClean:(BOOL *)arg1 error:(id *)arg2;
- (BOOL)queryAllDownloadTrackModelSync:(id /* block */)arg0 error:(id *)arg1;
- (BOOL)insertDownloadTrackModelSync:(id)arg0 error:(id *)arg1;
- (BOOL)insertDownloadTaskConfigSync:(id)arg0 error:(id *)arg1;
- (BOOL)deleteDownloadTaskConfigSync:(id)arg0 error:(id *)arg1;
- (BOOL)deleteDownloadTrackModelWithUrlMd5Sync:(id)arg0 error:(id *)arg1;
- (BOOL)updateDownloadTaskConfigSync:(id)arg0 error:(id *)arg1;
- (BOOL)queryDownloadTrackModelWithUrlMd5Sync:(id)arg0 downloadTrackResultBlock:(id /* block */)arg1 error:(id *)arg2;
- (BOOL)updateSliceConfig:(id)arg0 sliceConfig:(id)arg1 error:(id *)arg2;
- (id)getAllClearCacheRule:(id *)arg0;
- (BOOL)updateDownloadTrackModelSync:(id)arg0 error:(id *)arg1;
- (BOOL)deleteDownloadTrackModelSync:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;

@end
