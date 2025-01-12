//
//     Generated by private class-dump
//

@class BDPVideoEditProcessInfo, NSMutableArray, NSString;

@interface BDPPluginVideoEditImpl : NSObject <BDPVideoEditPluginDelegate> {
    NSMutableArray *_videoProcessList;
    BDPVideoEditProcessInfo *_currentProcessInfo;
}

@property (retain, nonatomic) NSMutableArray *videoProcessList;
@property (retain) BDPVideoEditProcessInfo *currentProcessInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)setVideoProcessList:(id)arg0;
- (void)onFinishEditingWithVideoEditID:(unsigned long long)arg0 resultVideoPath:(id)arg1 errorMessage:(id)arg2 errorCode:(long long)arg3 innerError:(id)arg4 completion:(id /* block */)arg5;
- (id)parseClipInfosWithTrimParams:(id)arg0;
- (id)parseClipInfosWithAudioMixParams:(id)arg0;
- (void)prepareToProcessVideoWithInfo:(id)arg0;
- (id)videoProcessList;
- (void)setCurrentProcessInfo:(id)arg0;
- (BOOL)checkTimestampsWithInfo:(id)arg0;
- (void)configClipSpeedWithList:(id)arg0 totalDuration:(double)arg1 effectConfig:(id)arg2;
- (void)configClipTransitionWithList:(id)arg0 effectConfig:(id)arg1;
- (void)parseStickerInfosWithInfo:(id)arg0;
- (void)processNextVideo;
- (void)loadResourceForProcessInfo:(id)arg0 completion:(id /* block */)arg1;
- (double)convertToDouble:(id)arg0;
- (unsigned long long)bdp_startVideoEditWithType:(long long)arg0 paramInfo:(id)arg1 effectConfig:(id)arg2 progressCallback:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)bdp_setCallbackWithVideoPath:(id)arg0 progressCallback:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)bdp_isVideoEditing:(id)arg0;
- (void)bdp_cancelAllVideoEditProcess;
- (id)init;
- (void).cxx_destruct;
- (id)currentProcessInfo;

@end
