//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface SAMIVCPerfomanceData : NSObject {
    unsigned long long _cacheStatus;
    double _startTime;
    double _extractTime;
    double _uploadTime;
    double _fetchTime;
    double _downloadTime;
    double _totalTime;
    double _assetDuration;
    long long _errCode;
    NSString *_errMsg;
    unsigned long long _errPhase;
    NSMutableDictionary *_extraInfo;
}

@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (nonatomic) unsigned long long cacheStatus;
@property (nonatomic) double startTime;
@property (nonatomic) double extractTime;
@property (nonatomic) double uploadTime;
@property (nonatomic) double fetchTime;
@property (nonatomic) double downloadTime;
@property (nonatomic) double totalTime;
@property (nonatomic) double assetDuration;
@property (nonatomic) long long errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (nonatomic) unsigned long long errPhase;
@property (readonly, nonatomic) double totalDuration;

- (void)setExtraInfo:(id)arg0;
- (long long)errCode;
- (id)errMsg;
- (void)setErrCode:(long long)arg0;
- (void)setErrMsg:(id)arg0;
- (void)setDownloadTime:(double)arg0;
- (unsigned long long)cacheStatus;
- (void)setCacheStatus:(unsigned long long)arg0;
- (double)downloadTime;
- (double)assetDuration;
- (void)setAssetDuration:(double)arg0;
- (void)setExtractTime:(double)arg0;
- (double)extractTime;
- (unsigned long long)errPhase;
- (void)setErrPhase:(unsigned long long)arg0;
- (void)setFetchTime:(double)arg0;
- (double)fetchTime;
- (void)taskStartWithCacheStatus:(unsigned long long)arg0;
- (void)finishPhase:(unsigned long long)arg0 errCode:(long long)arg1 msg:(id)arg2 extraInfo:(id)arg3;
- (id)performanceDataDic;
- (double)totalDuration;
- (id)init;
- (double)totalTime;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)startTime;
- (void)setTotalTime:(double)arg0;
- (void)setUploadTime:(double)arg0;
- (double)uploadTime;
- (id)extraInfo;

@end
