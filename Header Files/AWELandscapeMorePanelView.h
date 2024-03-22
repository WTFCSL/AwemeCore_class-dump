//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, NSString, AWELandscapePlaybackSettingView, AWELandscapeMorePanelViewModel, AWELandscapeControlView, DUXSwitch, UICollectionView, AWELandscapePageContext, UILabel;
@protocol AWELandscapeMorePanelViewDelegate, AWELanscapePlayerControlViewDelegate;

@interface AWELandscapeMorePanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    id<AWELanscapePlayerControlViewDelegate> _delegate;
    id<AWELandscapeMorePanelViewDelegate> _interactionDelegate;
    AWELandscapeControlView *_controlView;
    id /* block */ _dismissBlock;
    id /* block */ _switchBlock;
    id /* block */ _landScapeStartTimestampBlock;
    AWEAwemeModel *_model;
    AWELandscapeMorePanelViewModel *_viewModel;
    AWELandscapePageContext *_pageContext;
    UIView *_dismissView;
    UIView *_panelContainer;
    UIView *_effectView;
    UICollectionView *_collectionView;
    UIView *_splitLine;
    UILabel *_skipSwitchTitleLabel;
    UILabel *_skipSwitchSubTitleLabel;
    DUXSwitch *_skipSwitch;
    AWELandscapePlaybackSettingView *_playbackSettingView;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapeMorePanelViewModel *viewModel;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) UIView *dismissView;
@property (retain, nonatomic) UIView *panelContainer;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *skipSwitchTitleLabel;
@property (retain, nonatomic) UILabel *skipSwitchSubTitleLabel;
@property (retain, nonatomic) DUXSwitch *skipSwitch;
@property (retain, nonatomic) AWELandscapePlaybackSettingView *playbackSettingView;
@property (weak, nonatomic) id<AWELanscapePlayerControlViewDelegate> delegate;
@property (weak, nonatomic) id<AWELandscapeMorePanelViewDelegate> interactionDelegate;
@property (weak, nonatomic) AWELandscapeControlView *controlView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (copy, nonatomic) id /* block */ landScapeStartTimestampBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithModel:(id)arg0 pageContext:(id)arg1;
- (id /* block */)switchBlock;
- (void)setSwitchBlock:(id /* block */)arg0;
- (id)splitLine;
- (void)setSplitLine:(id)arg0;
- (void)showMorePanelOnView:(id)arg0 completion:(id /* block */)arg1;
- (void)setLandScapeStartTimestampBlock:(id /* block */)arg0;
- (void)dismissMorePanelWithCompletion:(id /* block */)arg0;
- (double)panelViewWidth;
- (id)panelContainer;
- (void)trackWatchLaterAddShowIfNeeded;
- (BOOL)longVideoSkipOpeningEndingEnable;
- (void)setupUIForSwitchButtonWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setupUIForPlaybackSettingWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setupDefaultUIWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (id)playbackSettingView;
- (id)skipSwitch;
- (id)skipSwitchTitleLabel;
- (id)skipSwitchSubTitleLabel;
- (void)trackSkipSwitchClick:(BOOL)arg0;
- (void)handleClickDismissView:(id)arg0;
- (void)trackPlaybackSettingChangeFrom:(id)arg0 to:(id)arg1;
- (void)trackPlaybackSettingChanged:(id)arg0;
- (id /* block */)landScapeStartTimestampBlock;
- (void)setPanelContainer:(id)arg0;
- (void)setSkipSwitchTitleLabel:(id)arg0;
- (void)setSkipSwitchSubTitleLabel:(id)arg0;
- (void)setSkipSwitch:(id)arg0;
- (void)setPlaybackSettingView:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setModel:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)effectView;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)model;
- (void)setInteractionDelegate:(id)arg0;
- (id)interactionDelegate;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (void)setEffectView:(id)arg0;
- (id)viewModel;
- (id)controlView;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (id)dismissView;
- (void)setDismissView:(id)arg0;
- (struct CGSize { double x0; double x1; })collectionViewSize;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)setControlView:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
