//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCMusicModelProtocol;

@interface APCDTOMusic : MTLModel <MTLJSONSerializing> {
    BOOL _postDownload;
    BOOL _isMute;
    BOOL _needLoad;
    BOOL _isEnable;
    BOOL _isImageBeat;
    BOOL _loop;
    BOOL _showMusicCapsule;
    BOOL _needAiClip;
    long long _strategy;
    NSString *_musicId;
    double _start;
    long long _musicType;
}

@property (nonatomic) BOOL isCommercialScene;
@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (nonatomic) BOOL forbiddenMusicWhenImagePreferred;
@property (nonatomic) BOOL voiceVolumeDisable;
@property (nonatomic) long long strategy;
@property (copy, nonatomic) NSString *musicId;
@property (nonatomic) double start;
@property (nonatomic) BOOL postDownload;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL needLoad;
@property (nonatomic) long long musicType;
@property (nonatomic) BOOL isEnable;
@property (nonatomic) BOOL isImageBeat;
@property (nonatomic) BOOL loop;
@property (nonatomic) BOOL showMusicCapsule;
@property (nonatomic) BOOL needAiClip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strategyJSONTransformer;
+ (id)musicTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsEnable:(BOOL)arg0;
- (void)setMusicId:(id)arg0;
- (void)setShowMusicCapsule:(BOOL)arg0;
- (id)musicId;
- (long long)musicType;
- (void)setMusicType:(long long)arg0;
- (BOOL)voiceVolumeDisable;
- (void)setVoiceVolumeDisable:(BOOL)arg0;
- (BOOL)postDownload;
- (void)setPostDownload:(BOOL)arg0;
- (BOOL)showMusicCapsule;
- (BOOL)needAiClip;
- (void)setNeedAiClip:(BOOL)arg0;
- (void)setIsMute:(BOOL)arg0;
- (BOOL)isEnable;
- (BOOL)needLoad;
- (BOOL)isImageBeat;
- (void)setIsImageBeat:(BOOL)arg0;
- (void)setIsCommercialScene:(BOOL)arg0;
- (void)setForbiddenMusicWhenImagePreferred:(BOOL)arg0;
- (BOOL)isCommercialScene;
- (BOOL)forbiddenMusicWhenImagePreferred;
- (void)setNeedLoad:(BOOL)arg0;
- (void)syncToPublishViewModel:(id)arg0;
- (id)music;
- (long long)strategy;
- (id)init;
- (void)setStart:(double)arg0;
- (void).cxx_destruct;
- (void)setMusic:(id)arg0;
- (double)start;
- (void)setStrategy:(long long)arg0;
- (BOOL)loop;
- (BOOL)isMute;
- (void)setLoop:(BOOL)arg0;

@end