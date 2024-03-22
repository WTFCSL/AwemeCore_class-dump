//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL, NSError, NSNumber;

@interface IESECWebImagePerfLog : NSObject {
    BOOL _isPreload;
    BOOL _firstRequest;
    NSURL *_imageURL;
    NSError *_error;
    NSString *_bizTag;
    NSString *_sceneTag;
    NSString *_pageName;
    double _bizDuration;
    double _sdkDuration;
    double _decodeDuration;
    double _queueDuration;
    double _cacheSeekDuration;
    double _localProcessDuration;
    double _downloadDuration;
    long long _hitCDNCache;
    long long _isSocketReused;
    double _DNSDuration;
    double _connectDuration;
    double _sslDuration;
    double _sendDuration;
    double _waitDuration;
    double _receiveDuration;
    long long _netQuality;
    double _fileSize;
    long long _imageFrom;
    NSDictionary *_logParams;
    NSString *_requestLog;
    NSDictionary *_abTestParams;
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _preferredSize;
}

@property (readonly, nonatomic) BOOL cancel;
@property (readonly, nonatomic) BOOL fromCache;
@property (readonly, nonatomic) BOOL isBizError;
@property (readonly, nonatomic) BOOL isTransformed;
@property (readonly, nonatomic) NSString *imageType;
@property (readonly, nonatomic) long long imageCount;
@property (readonly, nonatomic) NSNumber *exceptionTag;
@property (readonly, nonatomic) NSString *failPhase;
@property (nonatomic) unsigned long long largeImageType;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL firstRequest;
@property (nonatomic) double bizDuration;
@property (nonatomic) double sdkDuration;
@property (nonatomic) double decodeDuration;
@property (nonatomic) double queueDuration;
@property (nonatomic) double cacheSeekDuration;
@property (nonatomic) double localProcessDuration;
@property (nonatomic) double downloadDuration;
@property (nonatomic) long long hitCDNCache;
@property (nonatomic) long long isSocketReused;
@property (nonatomic) double DNSDuration;
@property (nonatomic) double connectDuration;
@property (nonatomic) double sslDuration;
@property (nonatomic) double sendDuration;
@property (nonatomic) double waitDuration;
@property (nonatomic) double receiveDuration;
@property (nonatomic) long long netQuality;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (nonatomic) double fileSize;
@property (nonatomic) long long imageFrom;
@property (copy, nonatomic) NSDictionary *logParams;
@property (copy, nonatomic) NSString *requestLog;
@property (copy, nonatomic) NSDictionary *abTestParams;

+ (double)largeImageMemoryLimit;
+ (double)ecomImageMonitorCacheSampleRate;
+ (BOOL)imageMonitorCopyExtraToCategory;
+ (id)imagePerfLogWithBDImageRecoder:(id)arg0 from:(long long)arg1 error:(id)arg2;

- (void)setRequestLog:(id)arg0;
- (id)requestLog;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg0;
- (BOOL)firstRequest;
- (void)setFirstRequest:(BOOL)arg0;
- (void)setBizTag:(id)arg0;
- (id)bizTag;
- (void)setDNSDuration:(double)arg0;
- (void)setSslDuration:(double)arg0;
- (void)setWaitDuration:(double)arg0;
- (long long)isSocketReused;
- (void)setIsSocketReused:(long long)arg0;
- (double)sslDuration;
- (double)waitDuration;
- (double)cacheSeekDuration;
- (double)decodeDuration;
- (id)sceneTag;
- (void)setSceneTag:(id)arg0;
- (id)exceptionTag;
- (id)serverIp;
- (long long)netQuality;
- (id)logParams;
- (void)setLogParams:(id)arg0;
- (BOOL)fromCache;
- (id)imageMonitorMetricLog;
- (id)imageMonitorCategoryLog;
- (BOOL)shouldReportPerfLog;
- (unsigned long long)largeImageType;
- (double)bizDuration;
- (double)sdkDuration;
- (long long)imageFrom;
- (double)localProcessDuration;
- (BOOL)isTransformed;
- (long long)hitCDNCache;
- (id)abTestParams;
- (id)failPhase;
- (id)largeImageExceptionParams;
- (id)largeImageExceptionFilters;
- (void)setNetQuality:(long long)arg0;
- (id)initWithRequestURL:(id)arg0 error:(id)arg1;
- (void)setSdkDuration:(double)arg0;
- (void)setDecodeDuration:(double)arg0;
- (void)setCacheSeekDuration:(double)arg0;
- (void)setHitCDNCache:(long long)arg0;
- (void)setImageFrom:(long long)arg0;
- (void)setBizDuration:(double)arg0;
- (void)setLocalProcessDuration:(double)arg0;
- (void)setAbTestParams:(id)arg0;
- (void)setLargeImageType:(unsigned long long)arg0;
- (id)imageSDKVersion;
- (BOOL)isBizError;
- (double)DNSDuration;
- (struct CGSize { double x0; double x1; })imageSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setImageURL:(id)arg0;
- (id)imageType;
- (double)connectDuration;
- (double)fileSize;
- (id)imageURL;
- (void)setFileSize:(double)arg0;
- (BOOL)cancel;
- (void)setError:(id)arg0;
- (long long)imageCount;
- (void)setConnectDuration:(double)arg0;
- (double)sendDuration;
- (id)error;
- (void)setSendDuration:(double)arg0;
- (struct CGSize { double x0; double x1; })preferredSize;
- (void)setPreferredSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (double)downloadDuration;
- (void)setDownloadDuration:(double)arg0;
- (void)setQueueDuration:(double)arg0;
- (void)setReceiveDuration:(double)arg0;
- (double)receiveDuration;
- (double)queueDuration;
- (void)setPageName:(id)arg0;
- (id)pageName;

@end