//
//     Generated by private class-dump
//

@class UIView, IESLiveKTVMidiScoreBoardView, NSArray, NSString, UIImageView, IESLiveKTVMidiViewModel, UICollectionView, IESLiveKTVMidiLevelComboView, IESLiveKTVScoreQuartzView;

@interface IESLiveKTVMIDIView : HTSEventForwardingView <UICollectionViewDataSource, UICollectionViewDelegate, CAAnimationDelegate, IESLiveKTVDecorateMidiProtocol> {
    BOOL _pitchViewAnimated;
    BOOL _isSelected;
    BOOL _trailAnimating;
    BOOL _scoreLevelShown;
    BOOL _enableDecorate;
    BOOL _isCPUOptimize;
    IESLiveKTVMidiViewModel *_viewModel;
    UIImageView *_pitchImageView;
    UIImageView *_trailImageView;
    UIView *_cursorContainer;
    UICollectionView *_collectionView;
    IESLiveKTVScoreQuartzView *_quartzView;
    UIImageView *_selectedBgView;
    IESLiveKTVMidiLevelComboView *_hitComboView;
    long long _style;
    unsigned long long _feature;
    IESLiveKTVMidiScoreBoardView *_scorePanelUp;
    IESLiveKTVMidiScoreBoardView *_scorePanelDown;
    NSArray *_toneLineColors;
    NSString *_dressId;
}

@property (retain, nonatomic) IESLiveKTVMidiViewModel *viewModel;
@property (nonatomic) BOOL pitchViewAnimated;
@property (retain, nonatomic) UIImageView *pitchImageView;
@property (retain, nonatomic) UIImageView *trailImageView;
@property (retain, nonatomic) UIView *cursorContainer;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveKTVScoreQuartzView *quartzView;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIImageView *selectedBgView;
@property (nonatomic) BOOL trailAnimating;
@property (retain, nonatomic) IESLiveKTVMidiLevelComboView *hitComboView;
@property (nonatomic) BOOL scoreLevelShown;
@property (nonatomic) long long style;
@property (nonatomic) unsigned long long feature;
@property (retain, nonatomic) IESLiveKTVMidiScoreBoardView *scorePanelUp;
@property (retain, nonatomic) IESLiveKTVMidiScoreBoardView *scorePanelDown;
@property (retain, nonatomic) NSArray *toneLineColors;
@property (copy, nonatomic) NSString *dressId;
@property (nonatomic) BOOL enableDecorate;
@property (nonatomic) BOOL isCPUOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_bindViewModel;
- (id)dressId;
- (void)setDressId:(id)arg0;
- (id)trailImageView;
- (void)setIsCPUOptimize:(BOOL)arg0;
- (BOOL)isCPUOptimize;
- (void)p_setupUIs;
- (void)updateDecorate:(id)arg0;
- (BOOL)enableDecorate;
- (void)setEnableDecorate:(BOOL)arg0;
- (id)scorePanelUp;
- (id)scorePanelDown;
- (id)cursorContainer;
- (BOOL)enableAdvancedMidi;
- (id)selectedBgView;
- (id)hitComboView;
- (id)pitchImageView;
- (id)quartzView;
- (double)p_startTimePosition;
- (BOOL)pitchViewAnimated;
- (void)setPitchViewAnimated:(BOOL)arg0;
- (BOOL)trailAnimating;
- (void)changeTrailShowStatus:(BOOL)arg0;
- (void)p_removeScoreEmitter;
- (BOOL)scoreLevelShown;
- (void)setScoreLevelShown:(BOOL)arg0;
- (void)p_resetScoreEmitter;
- (void)setTrailAnimating:(BOOL)arg0;
- (id)toneLineColors;
- (void)setToneLineColors:(id)arg0;
- (id)initWithViewModel:(id)arg0 style:(long long)arg1 feature:(unsigned long long)arg2;
- (void)addChallengeBubbleView:(id)arg0;
- (void)setPitchImageView:(id)arg0;
- (void)setTrailImageView:(id)arg0;
- (void)setCursorContainer:(id)arg0;
- (void)setQuartzView:(id)arg0;
- (void)setSelectedBgView:(id)arg0;
- (void)setHitComboView:(id)arg0;
- (void)setScorePanelUp:(id)arg0;
- (void)setScorePanelDown:(id)arg0;
- (long long)style;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)setIsSelected:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (unsigned long long)feature;
- (id)initWithViewModel:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)setFeature:(unsigned long long)arg0;
- (id)viewModel;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)dealloc;
- (void)setStyle:(long long)arg0;
- (BOOL)isSelected;

@end
