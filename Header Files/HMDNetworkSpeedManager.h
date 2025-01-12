//
//     Generated by private class-dump
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface HMDNetworkSpeedManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_blockArray;
    NSMutableArray *_uploadBytesArray_WIFI;
    NSMutableArray *_downloadBytesArray_WIFI;
    NSMutableArray *_uploadBytesArray_cellular;
    NSMutableArray *_downloadBytesArray_cellular;
    NSMutableArray *_dataTimeArray;
    BOOL _repeat;
    BOOL _cellularAvailable;
    BOOL _WIFIAvailable;
    double _interval;
    double _intendedAverageTime;
    double _uploadSpeed_WIFI;
    double _downloadSpeed_WIFI;
    double _uploadSpeed_cellular;
    double _downloadSpeed_cellular;
}

@property (nonatomic) double uploadSpeed_WIFI;
@property (nonatomic) double downloadSpeed_WIFI;
@property (nonatomic) double uploadSpeed_cellular;
@property (nonatomic) double downloadSpeed_cellular;
@property (nonatomic, getter=isCellularAvailable) BOOL cellularAvailable;
@property (nonatomic, getter=isWIFIAvailable) BOOL WIFIAvailable;
@property (nonatomic) double interval;
@property (nonatomic) double intendedAverageTime;
@property (nonatomic) BOOL repeat;
@property (readonly, nonatomic, getter=isStarted) BOOL started;

+ (void)averageSpeedOverTimeDuration:(double)arg0 withBlockNoRepeat:(id /* block */)arg1;

- (id)initWithInterval:(double)arg0 intendedAverageTime:(double)arg1 repeat:(BOOL)arg2;
- (void)removeTimer_async;
- (id)addRegisterWithBlock:(id /* block */)arg0;
- (void)addTimerAndCleanDataArray_async;
- (void)updateSpeedInformation_async;
- (double)uploadSpeed_WIFI;
- (void)setUploadSpeed_WIFI:(double)arg0;
- (double)downloadSpeed_WIFI;
- (void)setDownloadSpeed_WIFI:(double)arg0;
- (double)uploadSpeed_cellular;
- (void)setUploadSpeed_cellular:(double)arg0;
- (double)downloadSpeed_cellular;
- (void)setDownloadSpeed_cellular:(double)arg0;
- (BOOL)isWIFIAvailable;
- (void)setWIFIAvailable:(BOOL)arg0;
- (BOOL)isCellularAvailable;
- (void)setCellularAvailable:(BOOL)arg0;
- (void)cleanDataAndSetTheFirstObject_async;
- (double)intendedAverageTime;
- (void)setIntendedAverageTime:(double)arg0;
- (void)removeRegistedBlock:(id)arg0;
- (void)removeAllRegistedBlock;
- (id)init;
- (BOOL)isStarted;
- (void).cxx_destruct;
- (double)interval;
- (void)setInterval:(double)arg0;
- (void)dealloc;
- (void)timerCallback;
- (BOOL)repeat;
- (void)setRepeat:(BOOL)arg0;

@end
