//
//     Generated by private class-dump
//

@protocol SAMICoreCallbackListener;

@interface SAMICore : NSObject {
    void *_handle;
    int _identify;
    struct audioBlock { int dataType; unsigned int numberAudioData; void *audioData; } _in_audio_block;
    struct audioBlock { int dataType; unsigned int numberAudioData; void *audioData; } _out_audio_block;
    id<SAMICoreCallbackListener> _serverCallback_;
}

@property (retain, nonatomic) id<SAMICoreCallbackListener> serverCallback_;

+ (void)SAMICoreRegisterPrintStr2Log:(void /* function */ *)arg0;
+ (int)initContextWithType:(long long)arg0 parameter:(id)arg1;
+ (int)releaseContext:(long long)arg0;
+ (int)SAMICoreSetLogCallBack:(void /* function */ *)arg0;
+ (void)SAMICoreUnregisterPrintStr2Log:(void /* function */ *)arg0;

- (int)processWithInBlock:(id)arg0 outBlock:(id)arg1;
- (int)setProperty:(id)arg0 withId:(int)arg1;
- (id)initWithIdentify:(long long)arg0 param:(id)arg1 result:(int *)arg2;
- (int)prepareBufferWithIdentify:(long long)arg0 numInBuffer:(int)arg1 maxBlockSize:(int)arg2 numChannel:(int)arg3 isInterleave:(BOOL)arg4;
- (int)getProperty:(id)arg0 withId:(int)arg1;
- (int)initDebugWithConfig:(id)arg0;
- (int)releaseDebugConfig;
- (id)serverCallback_;
- (void)setServerCallback_:(id)arg0;
- (void)destroy;
- (void)dealloc;

@end
