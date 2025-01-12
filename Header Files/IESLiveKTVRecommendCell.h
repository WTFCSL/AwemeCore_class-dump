//
//     Generated by private class-dump
//

@class IESLiveKTVGradientLabel, UIImageView, NSString, UILabel, IESLiveKTVRequestButton, UIView;
@protocol IESLiveCompoundSubscription, IESLiveKTVRecommendCellDelegate;

@interface IESLiveKTVRecommendCell : IESLiveSongBaseCell <IESLiveKTVAddSongAnimationViewContext> {
    float _progress;
    IESLiveKTVRequestButton *_downloadButton;
    id<IESLiveCompoundSubscription> _compoundDisposable;
    UILabel *_preloadProgressLabel;
    IESLiveKTVGradientLabel *_midiScoreLabel;
    UIView *_midiScoreView;
    UILabel *_orderLabel;
    UILabel *_songChooserNameLabel;
    UIImageView *_songChooserAvatar;
    UIView *_songChooserAvatarBackView;
    UIView *_challengeBg;
    UIView *_challengeTypeView;
    UILabel *_challengeScore;
}

@property (retain, nonatomic) IESLiveKTVRequestButton *downloadButton;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> compoundDisposable;
@property (nonatomic) float progress;
@property (retain, nonatomic) UILabel *preloadProgressLabel;
@property (retain, nonatomic) IESLiveKTVGradientLabel *midiScoreLabel;
@property (retain, nonatomic) UIView *midiScoreView;
@property (retain, nonatomic) UILabel *orderLabel;
@property (retain, nonatomic) UILabel *songChooserNameLabel;
@property (retain, nonatomic) UIImageView *songChooserAvatar;
@property (retain, nonatomic) UIView *songChooserAvatarBackView;
@property (retain, nonatomic) UIView *challengeBg;
@property (retain, nonatomic) UIView *challengeTypeView;
@property (retain, nonatomic) UILabel *challengeScore;
@property (weak, nonatomic) id<IESLiveKTVRecommendCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForItem:(id)arg0;

- (id)compoundDisposable;
- (void)addDownloadObserver;
- (void)setCompoundDisposable:(id)arg0;
- (id)orderLabel;
- (void)setOrderLabel:(id)arg0;
- (void)renderWithItem:(id)arg0;
- (id)getSongItem:(BOOL)arg0;
- (void)setChallengeTypeView:(id)arg0;
- (id)challengeTypeView;
- (void)setChallengeScore:(id)arg0;
- (id)favoriteStartPostionView;
- (id)orderStartPostionView;
- (void)p_addFavoriteStatusChangeObserverIfNeeded;
- (void)p_relayoutUIAndHighLightSearchMatchIfNeededWithItem:(id)arg0;
- (void)p_addSelfOrderListObserverifNeeded;
- (void)p_addDebugPreloadObserverIfNeeded;
- (void)refreshDownloadButtonUI;
- (void)p_updateClipStyle;
- (void)p_cleanClipStyle;
- (void)p_renderMidiScoreViewWithIsHighScore:(BOOL)arg0;
- (void)updateWantListenInfoWithRecmmendItem:(id)arg0;
- (void)hideWantListenInfo;
- (void)updateChallengeInfoWith:(id)arg0;
- (id)challengeBg;
- (id)challengeScore;
- (id)midiScoreView;
- (id)songChooserAvatarBackView;
- (id)songChooserAvatar;
- (id)songChooserNameLabel;
- (void)p_addObserverWithTask:(id)arg0;
- (void)p_renderProgress:(id)arg0;
- (void)p_renderDebugProgress:(id)arg0;
- (id)preloadProgressLabel;
- (void)setPreloadProgressLabel:(id)arg0;
- (id)midiScoreLabel;
- (void)setMidiScoreLabel:(id)arg0;
- (void)setMidiScoreView:(id)arg0;
- (void)setSongChooserNameLabel:(id)arg0;
- (void)setSongChooserAvatar:(id)arg0;
- (void)setSongChooserAvatarBackView:(id)arg0;
- (void)setChallengeBg:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (float)progress;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setProgress:(float)arg0;
- (id)coverImage;
- (id)downloadButton;
- (void)setDownloadButton:(id)arg0;

@end
