//
//     Generated by private class-dump
//

@class AWEPlayInteractionMusicInfoElementViewModel, AWEAwemeMusicInfoView, NSString, AWEPlayInteractionAITextEntranceView;

@interface AWEPlayInteractionMusicInfoElement : AWEPlayInteractionLeftElement <AWEAwemeMusicInfoViewDelegate> {
    AWEAwemeMusicInfoView *_musicInfoView;
    NSString *_musicLabelString;
    AWEPlayInteractionMusicInfoElementViewModel *_viewModel;
    double _bottomOffset;
    AWEPlayInteractionAITextEntranceView *_aiTextEntranceView;
}

@property (retain, nonatomic) AWEPlayInteractionMusicInfoElementViewModel *viewModel;
@property (nonatomic) double bottomOffset;
@property (retain, nonatomic) AWEPlayInteractionAITextEntranceView *aiTextEntranceView;
@property (retain, nonatomic) AWEAwemeMusicInfoView *musicInfoView;
@property (retain, nonatomic) NSString *musicLabelString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_shouldShowLunaAnchorWithModel:(id)arg0;
+ (BOOL)_shouldMusicInfoActiveWithData:(id)arg0 context:(id)arg1;
+ (BOOL)shouldHideMusicInfoWithAwemeModel:(id)arg0;
+ (BOOL)shouldMusicInfoActiveWithData:(id)arg0 context:(id)arg1;

- (void)initializeElement;
- (void)setAppear:(BOOL)arg0;
- (void)viewDidDisposed;
- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (void)enterMusicDetail:(id)arg0;
- (id)currentInfoForSubUnits;
- (void)handleElementWhenPriorityAvoid;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (id)musicInfoView;
- (void)updateMusicInfoView;
- (void)setMusicLabelString:(id)arg0;
- (void)p_layoutMusicInfoViewWithModel:(id)arg0;
- (id)musicLabelString;
- (void)setMusicInfoView:(id)arg0;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)viewController_viewDidAppear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realFrame;
- (void)layoutElementView;
- (BOOL)musicTrackAlertIfNotValid;
- (BOOL)karaokeDuetSingEnabled;
- (void)musicInfoView:(id)arg0 didClickFollowShootAnchor:(id)arg1;
- (void)musicInfoView:(id)arg0 didClickKaraokeButton:(id)arg1;
- (void)musicInfoView:(id)arg0 enterMusicDetail:(id)arg1;
- (void)onAITextEntranceViewClicked:(id)arg0;
- (id)aiTextEntranceView;
- (void)setAiTextEntranceView:(id)arg0;
- (BOOL)bizDowngradeMusicAnimations;
- (void)musicInfoShowTrackWithModel:(id)arg0;
- (BOOL)musicIsOriginal;
- (BOOL)hasTranscribeText:(id)arg0;
- (void)enterMusicDetailWithTrackerDict:(id)arg0;
- (void)resume;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (id)currentInfo;
- (double)bottomOffset;
- (void)setBottomOffset:(double)arg0;

@end