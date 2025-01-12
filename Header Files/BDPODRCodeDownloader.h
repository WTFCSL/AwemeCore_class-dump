//
//     Generated by private class-dump
//

@class NSString, NSBundleResourceRequest, BDPODRXFileBasicModel, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BDPODRCodeDownloader : NSObject {
    BOOL _requesting;
    NSString *_odrCodesTag;
    NSString *_odrCodesMD5;
    long long _odrCodesLength;
    NSString *_codesXzPath;
    NSString *_decompressPath;
    NSString *_fullCompressPath;
    BDPODRXFileBasicModel *_model;
    NSObject<OS_dispatch_queue> *_codeSerialQueue;
    NSBundleResourceRequest *_bundleRequset;
    double _codesFractionCompleted;
    NSMutableArray *_progressArr;
    NSMutableArray *_completionArr;
    double _downloadBeginTimeStamp;
}

@property (retain, nonatomic) NSString *odrCodesTag;
@property (retain, nonatomic) NSString *odrCodesMD5;
@property (nonatomic) long long odrCodesLength;
@property (retain, nonatomic) NSString *codesXzPath;
@property (retain, nonatomic) NSString *decompressPath;
@property (retain, nonatomic) NSString *fullCompressPath;
@property (retain, nonatomic) BDPODRXFileBasicModel *model;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *codeSerialQueue;
@property (retain, nonatomic) NSBundleResourceRequest *bundleRequset;
@property (nonatomic) double codesFractionCompleted;
@property (retain, nonatomic) NSMutableArray *progressArr;
@property (retain, nonatomic) NSMutableArray *completionArr;
@property (nonatomic) double downloadBeginTimeStamp;
@property (nonatomic) BOOL requesting;

+ (id)downloaderWithModel:(id)arg0 codesXzPath:(id)arg1 decompressPath:(id)arg2;

- (id)bundleRequset;
- (void)setBundleRequset:(id)arg0;
- (double)codesFractionCompleted;
- (void)setCodesFractionCompleted:(double)arg0;
- (void)setCodesXzPath:(id)arg0;
- (void)removeBundleRequest;
- (id)codesXzPath;
- (id)odrCodesTag;
- (void)setOdrCodesTag:(id)arg0;
- (id)odrCodesMD5;
- (void)setOdrCodesMD5:(id)arg0;
- (long long)odrCodesLength;
- (void)setOdrCodesLength:(long long)arg0;
- (BOOL)requesting;
- (void)setRequesting:(BOOL)arg0;
- (id)progressArr;
- (void)setProgressArr:(id)arg0;
- (void)setDecompressPath:(id)arg0;
- (void)removeBundleRequestObserver;
- (id)completionArr;
- (id)decompressPath;
- (void)_decompressToDestWithError:(id *)arg0;
- (void)_executeAllCompletions:(id)arg0;
- (void)_downloadODRCodeIfNeed;
- (id)codeSerialQueue;
- (void)_trackDownloadStartEventWithODRFrom:(id)arg0;
- (long long)_decompressCodeWithError:(id *)arg0;
- (void)_trackDownloadResultEvent:(id)arg0 odrCodesTag:(id)arg1 downloadDataLength:(long long)arg2 odrFrom:(id)arg3;
- (void)_downloadODRCodeWithTryCount:(long long)arg0;
- (void)setDownloadBeginTimeStamp:(double)arg0;
- (double)downloadBeginTimeStamp;
- (void)startDownloadModel:(id)arg0 progress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)fullCompressPath;
- (void)setFullCompressPath:(id)arg0;
- (void)setCodeSerialQueue:(id)arg0;
- (void)setCompletionArr:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (void)stopDownload;

@end
