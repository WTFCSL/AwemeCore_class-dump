//
//     Generated by private class-dump
//

@protocol LSLiveEffectProcessProtocol <NSObject>

+ (id)effectVersion;

@optional

- (void *)getEffectHandle;
- (void)updateConfig:(id)arg0;
- (int)getFaceCount;
- (id)initWithConfig:(id)arg0 context:(id)arg1;
- (BOOL)releaseSDK;
- (BOOL)effectProcessingWithTexture:(unsigned int)arg0 dstTexture:(unsigned int)arg1 timeStamp:(double)arg2;
- (BOOL)effectProcessingWithFBO:(id)arg0 dstFBO:(id)arg1 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2 forceDetect:(BOOL)arg3;
- (BOOL)setAuxWithTexture:(unsigned int)arg0 key:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (void)getFaceInfo:(void *)arg0;
- (void)getAnimatedEmoticonsInfo:(void *)arg0;
- (void)getExpressionInfo:(void *)arg0;
- (void)setAudioPlayerFactory:(void *)arg0;
- (int)setEffectInputText:(id)arg0 arg1:(int)arg1 arg2:(int)arg2 arg3:(id)arg3;
- (int)setEffectNotifyKeyboardHide:(BOOL)arg0;
- (int)effectGetETData:(id *)arg0 withType:(int)arg1;
- (int)effectResetETDataWithType:(int)arg0;
- (id)acquireEffectTrackHandle;
- (void)recycleEffectTrackHandle:(id)arg0;
- (void)updateAlgorithmUsedEffectFlagByTrackHandle;
- (void)setLogLevel:(int)arg0;
- (void)initial;

@end