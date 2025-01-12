//
//     Generated by private class-dump
//

@class NSString, IESEffectModel;

@interface ACCMVAudioBeatTrackManager : NSObject {
    BOOL _isAudioBeatTrack;
    float _srcIn;
    float _srcOut;
    float _dstIn;
    float _dstOut;
    NSString *_musicFileName;
    IESEffectModel *_effectModel;
}

@property (retain, nonatomic) IESEffectModel *effectModel;
@property (nonatomic) float srcIn;
@property (nonatomic) float srcOut;
@property (nonatomic) float dstIn;
@property (nonatomic) float dstOut;
@property (nonatomic) BOOL isAudioBeatTrack;
@property (copy, nonatomic) NSString *musicFileName;

- (id)effectModel;
- (void)setEffectModel:(id)arg0;
- (id)initWithMVEffectModel:(id)arg0;
- (BOOL)isAudioBeatTrack;
- (float)dstOut;
- (float)dstIn;
- (float)srcIn;
- (float)srcOut;
- (id)modelRelativePathForAlgorithm;
- (id)musicFileName;
- (void)configAudioBeatTrackManagerWithMVEffectModel:(id)arg0;
- (void)setIsAudioBeatTrack:(BOOL)arg0;
- (void)setSrcIn:(float)arg0;
- (void)setSrcOut:(float)arg0;
- (void)setDstIn:(float)arg0;
- (void)setDstOut:(float)arg0;
- (void)setMusicFileName:(id)arg0;
- (void).cxx_destruct;

@end
