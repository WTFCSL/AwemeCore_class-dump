//
//     Generated by private class-dump
//

@class NSString, IESLiveVoiceWave, UIImageView, UIImage, UIView, HTSLiveAudioSpeakingImageList, IESLiveScreencastLinkAvatarViewConfig;
@protocol IESLiveWebPPlayer;

@interface IESLiveScreencastLinkAvatarView : UIView {
    BOOL _stopAnimation;
    BOOL _needUpdateSpeakingImage;
    UIImageView *_avatar;
    HTSLiveAudioSpeakingImageList *_speakingImageList;
    IESLiveScreencastLinkAvatarViewConfig *_config;
    UIView *_silenceView;
    UIView *_silenceContainer;
    UIImageView<IESLiveWebPPlayer> *_animationViewStart;
    UIImageView<IESLiveWebPPlayer> *_animationViewLoop;
    UIView *_containerBelowEmojiContainer;
    long long _gender;
    unsigned long long _speakingType;
    unsigned long long _previousSpeakingType;
    IESLiveVoiceWave *_limitVoiceWave;
    UIImage *_normalSpeakingImage;
    NSString *_currentScene;
}

@property (retain, nonatomic) IESLiveScreencastLinkAvatarViewConfig *config;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UIView *silenceView;
@property (retain, nonatomic) UIView *silenceContainer;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationViewStart;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationViewLoop;
@property (retain, nonatomic) UIView *containerBelowEmojiContainer;
@property (nonatomic) BOOL stopAnimation;
@property (nonatomic) long long gender;
@property (nonatomic) unsigned long long speakingType;
@property (nonatomic) unsigned long long previousSpeakingType;
@property (retain, nonatomic) HTSLiveAudioSpeakingImageList *speakingImageList;
@property (retain, nonatomic) IESLiveVoiceWave *limitVoiceWave;
@property (retain, nonatomic) UIImage *normalSpeakingImage;
@property (nonatomic) BOOL needUpdateSpeakingImage;
@property (copy, nonatomic) NSString *currentScene;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 config:(id)arg1;
- (void)setCurrentScene:(id)arg0;
- (id)speakingImageList;
- (void)setSpeakingImageList:(id)arg0;
- (void)setStopAnimation:(BOOL)arg0;
- (id)animationViewLoop;
- (void)startMultiTalkingAnimation;
- (void)stopMultiTalkingAnimation;
- (void)loopSpeakingAnimationIfNeeded;
- (void)setAnimationViewLoop:(id)arg0;
- (void)updateSoundAnimationDidChangeWithSpeakingImageList:(id)arg0;
- (void)layoutBaseUI;
- (id)animationViewStart;
- (void)setContainerBelowEmojiContainer:(id)arg0;
- (id)containerBelowEmojiContainer;
- (BOOL)needUpdateSpeakingImage;
- (id)normalSpeakingImage;
- (void)setNeedUpdateSpeakingImage:(BOOL)arg0;
- (void)setSpeakingType:(unsigned long long)arg0;
- (void)setPreviousSpeakingType:(unsigned long long)arg0;
- (void)updateSoundAnimationWithSpeakingType:(unsigned long long)arg0;
- (unsigned long long)speakingType;
- (unsigned long long)previousSpeakingType;
- (id)limitVoiceWave;
- (id)voiceImageWithVoiceWave:(id)arg0 :(unsigned long long)arg1;
- (void)setNormalSpeakingImage:(id)arg0;
- (id)defaultStartWebpImage;
- (id)defaultLoopWebpImage;
- (void)startTalkingAnimation;
- (void)stopTalkingAnimation;
- (void)startMultiTalkingAnimationIfNeededWithSpeakingType:(unsigned long long)arg0;
- (BOOL)isSpeakingImageListValid:(id)arg0;
- (void)updateGender:(long long)arg0;
- (void)updateSoundAnimationWithStartURLs:(id)arg0 loopURLs:(id)arg1;
- (id)silenceView;
- (void)setSilenceView:(id)arg0;
- (id)silenceContainer;
- (void)setSilenceContainer:(id)arg0;
- (void)setAnimationViewStart:(id)arg0;
- (void)setLimitVoiceWave:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)currentScene;
- (long long)gender;
- (void)setGender:(long long)arg0;
- (BOOL)stopAnimation;
- (id)avatar;
- (void)setAvatar:(id)arg0;

@end
