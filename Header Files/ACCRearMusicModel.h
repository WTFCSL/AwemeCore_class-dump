//
//     Generated by private class-dump
//

@protocol ACCMusicModelProtocol;

@interface ACCRearMusicModel : NSObject {
    id<ACCMusicModelProtocol> _music;
    unsigned long long _defaultRearApplyMusicType;
}

@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (nonatomic) unsigned long long defaultRearApplyMusicType;

- (BOOL)isOffLine;
- (id)initWithMusic:(id)arg0;
- (BOOL)isEmptyModel;
- (id)rearApplyMusic;
- (void)setupRearApplyMusicModel:(id)arg0;
- (id)initWithMusic:(id)arg0 originSoundModel:(id)arg1 currentType:(unsigned long long)arg2;
- (unsigned long long)defaultRearApplyMusicType;
- (void)setDefaultRearApplyMusicType:(unsigned long long)arg0;
- (id)music;
- (void).cxx_destruct;
- (void)setMusic:(id)arg0;
- (void)reset;

@end
