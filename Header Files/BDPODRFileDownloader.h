//
//     Generated by private class-dump
//

@class BDPODRResourceDownloader, NSString, NSTimer, BDPODRXFileBasicModel, NSProgress, NSObject, BDPODRCodeDownloader;
@protocol OS_dispatch_queue;

@interface BDPODRFileDownloader : NSObject <BDPODRXResolveDelegate> {
    BOOL _codesDone;
    BOOL _resoucesDone;
    BOOL _finished;
    BOOL _isGame;
    BDPODRXFileBasicModel *_model;
    NSObject<OS_dispatch_queue> *_mergeSerialQueue;
    NSTimer *_timerOutTimer;
    double _downloadBeginTimeStamp;
    NSString *_gamePackagePath;
    NSString *_codesXzPath;
    NSString *_resourceXzPath;
    NSString *_fullComressPath;
    NSString *_finalPackagePath;
    NSProgress *_progress;
    id /* block */ _failureBlock;
    id /* block */ _successBlock;
    id /* block */ _progressBlock;
    id /* block */ _compressBlock;
    BDPODRCodeDownloader *_codeDownloader;
    BDPODRResourceDownloader *_resourceDownloader;
}

@property (retain, nonatomic) BDPODRXFileBasicModel *model;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeSerialQueue;
@property (retain, nonatomic) NSTimer *timerOutTimer;
@property (nonatomic) double downloadBeginTimeStamp;
@property (copy, nonatomic) NSString *gamePackagePath;
@property (copy, nonatomic) NSString *codesXzPath;
@property (copy, nonatomic) NSString *resourceXzPath;
@property (copy, nonatomic) NSString *fullComressPath;
@property (copy, nonatomic) NSString *finalPackagePath;
@property (nonatomic) BOOL codesDone;
@property (nonatomic) BOOL resoucesDone;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ compressBlock;
@property (nonatomic) BOOL isGame;
@property (retain, nonatomic) BDPODRCodeDownloader *codeDownloader;
@property (retain, nonatomic) BDPODRResourceDownloader *resourceDownloader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloaderWithModel:(id)arg0;
+ (BOOL)decompressFileCacheIfNeed:(id)arg0;

- (BOOL)isGame;
- (void)setIsGame:(BOOL)arg0;
- (void)setTimerOutTimer:(id)arg0;
- (void)_executeProgressBlock:(id)arg0;
- (void)setGamePackagePath:(id)arg0;
- (void)setCodesXzPath:(id)arg0;
- (void)setResourceXzPath:(id)arg0;
- (id)gamePackagePath;
- (void)setFinalPackagePath:(id)arg0;
- (void)_setupTimeoutTimer;
- (void)_executeFailureBlock:(id)arg0;
- (void)_executeSuccessBlockIfNeeded;
- (id)finalPackagePath;
- (id)codesXzPath;
- (void)setCodesDone:(BOOL)arg0;
- (void)setResoucesDone:(BOOL)arg0;
- (id)timerOutTimer;
- (BOOL)codesDone;
- (BOOL)resoucesDone;
- (void)_cleanTempFiles;
- (void)_cleanAllFiles;
- (id)resourceXzPath;
- (void)setResourceDownloader:(id)arg0;
- (void)setDownloadBeginTimeStamp:(double)arg0;
- (double)downloadBeginTimeStamp;
- (void)setFullComressPath:(id)arg0;
- (void)setCodeDownloader:(id)arg0;
- (void)setCompressBlock:(id /* block */)arg0;
- (void)_trackLoadStartEvent:(id)arg0;
- (id)codeDownloader;
- (id)mergeSerialQueue;
- (void)_decompressResourceFromPath:(id)arg0;
- (BOOL)_decompressFileCacheIfNeed;
- (BOOL)_decompressFullFileAtPath:(id)arg0 toDestination:(id)arg1;
- (id /* block */)compressBlock;
- (void)_trackLoadResultEvent:(id)arg0 filePath:(id)arg1 loadType:(id)arg2;
- (id)fullComressPath;
- (void)_compressFullFileAtPath:(id)arg0 toDestination:(id)arg1;
- (void)_resetCallBackBlocks;
- (void)startDownload:(id)arg0 progress:(id /* block */)arg1 suceess:(id /* block */)arg2 failure:(id /* block */)arg3 didCompress:(id /* block */)arg4;
- (void)setMergeSerialQueue:(id)arg0;
- (void)setFinished:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setProgressBlock:(id /* block */)arg0;
- (id)progress;
- (void)_invalidateTimer;
- (id /* block */)progressBlock;
- (void)dealloc;
- (void)setProgress:(id)arg0;
- (BOOL)finished;
- (id)resourceDownloader;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg0;
- (void)stopDownload;

@end
