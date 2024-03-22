//
//     Generated by private class-dump
//

@class NLEMediaWrapper, NSString, HTSVideoData;

@interface NLEAudioSession : NSObject {
    BOOL _audioExportCancelled;
    int _NLEChainSelection;
    NSString *_audioExportDir;
    HTSVideoData *_veVideoData;
    NLEMediaWrapper *_nleMediaWrapper;
    id /* block */ _commitBlock;
}

@property (retain, nonatomic) HTSVideoData *veVideoData;
@property (retain, nonatomic) NLEMediaWrapper *nleMediaWrapper;
@property (nonatomic) int NLEChainSelection;
@property (nonatomic) BOOL audioExportCancelled;
@property (copy, nonatomic) id /* block */ commitBlock;
@property (retain, nonatomic) NSString *audioExportDir;

+ (int)detachAudioStreamFile:(id)arg0 videoFiles:(id)arg1 timeStarts:(id)arg2 timeEnds:(id)arg3 timeClipStarts:(id)arg4 timeClipEnds:(id)arg5 videoSpeeds:(id)arg6 dataProgress:(id /* block */)arg7 completion:(id /* block */)arg8;
+ (int)detachAudioStreamFile:(id)arg0 videoFiles:(id)arg1 timeStarts:(id)arg2 timeEnds:(id)arg3 videoSpeeds:(id)arg4;
+ (void)p_getVolumnWaveForVideoWithVideoData:(id)arg0 pointCount:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (void)getVolumnWaveForVideoWithVideoPath:(id)arg0 pointCount:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (id)getVolumnWaveForAudioWithAudioPath:(id)arg0 duration:(double)arg1 pointsCount:(unsigned long long)arg2 useVEPublic:(BOOL)arg3;
+ (void)getVoiceBalanceDetectConfigForAsset:(id)arg0 trimIn:(double)arg1 trimOut:(double)arg2 completion:(id /* block */)arg3;

- (id)volumeInfo;
- (id)veVideoData;
- (void)setVeVideoData:(id)arg0;
- (void)exportAllAudioSoundInNLEModel:(id)arg0 draftFolder:(id)arg1 useVEPublic:(BOOL)arg2 timeAlignment:(BOOL)arg3 alignmentDuration:(double)arg4 completion:(id /* block */)arg5;
- (void)exportAllAudioSoundInNLEModel:(id)arg0 draftFolder:(id)arg1 useVEPublic:(BOOL)arg2 timeAlignment:(BOOL)arg3 alignmentDuration:(double)arg4 dataProgress:(id /* block */)arg5 completion:(id /* block */)arg6;
- (id)audioExportDir;
- (void)getVolumnWaveForVideoWithPointsCount:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)exportAllAudioSoundInNLEModel:(id)arg0 draftFolder:(id)arg1 useVEPublic:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)cancelAudioExport;
- (void)exportAllAudioSound:(id /* block */)arg0;
- (void)exportVideoTrackAudio:(id /* block */)arg0;
- (void)getVoiceBalanceDetectConfigForVideoAssets:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setAudioExportDir:(id)arg0;
- (id)initWithNLEMediaWrapper:(id)arg0;
- (void)setNLEChainSelection:(int)arg0;
- (int)NLEChainSelection;
- (id)initWithVideoData:(id)arg0;
- (void)p_updateVideoDataWithCompletion:(id /* block */)arg0;
- (BOOL)audioExportCancelled;
- (void)setAudioExportCancelled:(BOOL)arg0;
- (void)setNleMediaWrapper:(id)arg0;
- (id)nleMediaWrapper;
- (id)initWithNLEMedia:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)commitBlock;
- (void)setCommitBlock:(id /* block */)arg0;

@end
