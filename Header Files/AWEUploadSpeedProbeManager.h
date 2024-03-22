//
//     Generated by private class-dump
//

@class NSString, AWEBDUploadClientService, AWEBDUploadRoutClientDelegate, AWEVideoUploadSpeedModel, NSObject;
@protocol OS_dispatch_queue;

@interface AWEUploadSpeedProbeManager : NSObject <BDFileSpeedTestClientDelegate, ACCSpeedProbeProtocol> {
    BOOL _probeState;
    BOOL _running;
    unsigned long long _mode;
    NSString *_probeContext;
    long long _probeSpeed;
    AWEVideoUploadSpeedModel *_speedInfo;
    AWEBDUploadClientService *_BDUploadService;
    AWEBDUploadRoutClientDelegate *_routDelegate;
    double _lastTimestamp;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) AWEVideoUploadSpeedModel *speedInfo;
@property (nonatomic) BOOL probeState;
@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSString *probeContext;
@property (nonatomic) long long probeSpeed;
@property (retain, nonatomic) AWEBDUploadClientService *BDUploadService;
@property (retain, nonatomic) AWEBDUploadRoutClientDelegate *routDelegate;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) BOOL running;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;

- (void)uploadVideo:(id)arg0 speed:(int)arg1 videoContext:(id)arg2 error:(id)arg3;
- (long long)speedTestGetNetState:(id)arg0;
- (id)BDUploadService;
- (void)setBDUploadService:(id)arg0;
- (BOOL)dataValid;
- (void)setSpeedInfo:(id)arg0;
- (id)speedInfo;
- (void)setProbeState:(BOOL)arg0;
- (void)configVideoUploadClient:(id)arg0;
- (void)_stopIfNeed;
- (void)setProbeContext:(id)arg0;
- (void)setProbeSpeed:(long long)arg0;
- (BOOL)probeState;
- (long long)probeSpeed;
- (id)probeContext;
- (void)setRoutDelegate:(id)arg0;
- (id)routDelegate;
- (int)preuploadEncryptionMode:(id)arg0;
- (BOOL)running;
- (void)setRunning:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)mode;
- (void)setLastTimestamp:(double)arg0;
- (void)setMode:(unsigned long long)arg0;
- (double)lastTimestamp;
- (id)queue;
- (void)setQueue:(id)arg0;
- (void)invalidateData;
- (void)startIfNeeded;
- (void)stopIfNeeded;

@end