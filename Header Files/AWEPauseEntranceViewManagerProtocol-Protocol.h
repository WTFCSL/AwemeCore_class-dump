//
//     Generated by private class-dump
//

@class UIView, AWEPlayInteractionViewController, AWEAwemeModel;
@protocol AWEPauseEntranceViewProtocol;

@protocol AWEPauseEntranceViewManagerProtocol <NSObject>

@property (weak, nonatomic) AWEAwemeModel *currentModel;
@property (weak, nonatomic) AWEAwemeModel *currentFeedModel;
@property (weak, nonatomic) AWEAwemeModel *currentFamiliarModel;
@property (weak, nonatomic) AWEAwemeModel *currentDetailTableModel;
@property (weak, nonatomic) UIView<AWEPauseEntranceViewProtocol> *AFDpauseEntranceView;
@property (weak, nonatomic) UIView<AWEPauseEntranceViewProtocol> *feedPauseEntranceView;
@property (weak, nonatomic) UIView<AWEPauseEntranceViewProtocol> *detailPauseEntranceView;
@property (weak, nonatomic) UIView<AWEPauseEntranceViewProtocol> *detailTablePauseEntranceView;
@property (weak, nonatomic) UIView *AFDdiscoverEntranceView;
@property (weak, nonatomic) UIView *detailTableDiscoverEntranceView;
@property (weak, nonatomic) AWEPlayInteractionViewController *interactionVC;
@property (nonatomic) BOOL AFDpauseShow;
@property (nonatomic) BOOL feedPauseShow;
@property (nonatomic) BOOL detailPauseShow;
@property (nonatomic) BOOL detailTablePauseShow;

- (id)interactionVC;
- (void)setInteractionVC:(id)arg0;
- (void)dismissPauseSearchEntranceIfNeedWithIdentifier:(id)arg0;
- (BOOL)pauseSearchEnable;
- (id)pauseEntranceView;
- (void)setDetailTablePauseEntranceView:(id)arg0;
- (void)setDetailTableDiscoverEntranceView:(id)arg0;
- (double)pauseSearchViewWidth;
- (double)pauseSearchViewHeight;
- (double)pauseSearchTopMargin;
- (unsigned long long)pauseSearchType;
- (id)detailTablePauseEntranceView;
- (id)detailPauseEntranceView;
- (double)pauseSearchCornerRadius;
- (id)pauseViewBackgroundARGB;
- (id)pauseSearchTextContent;
- (double)pauseSearchTextFontSize;
- (BOOL)enableSkylightAvoidForPauseSearchEntrance;
- (void)setAFDpauseEntranceView:(id)arg0;
- (void)setAFDdiscoverEntranceView:(id)arg0;
- (id)storageKeyWithCurrentID;
- (BOOL)pauseSearchEnableWithModel:(id)arg0;
- (void)pauseSearchWithView:(id)arg0 withModel:(id)arg1 withPlayTime:(long long)arg2;
- (BOOL)pauseSearchSettingSwitchOn;
- (void)setFeedPauseShow:(BOOL)arg0;
- (void)setCurrentFeedModel:(id)arg0;
- (id)AFDpauseEntranceView;
- (id)AFDdiscoverEntranceView;
- (void)setAFDpauseShow:(BOOL)arg0;
- (void)setCurrentFamiliarModel:(id)arg0;
- (id)detailTableDiscoverEntranceView;
- (void)setDetailTablePauseShow:(BOOL)arg0;
- (void)setCurrentDetailTableModel:(id)arg0;
- (void)showWithView:(id)arg0 withInterViewController:(id)arg1 withModel:(id)arg2 withCompletion:(id /* block */)arg3 withBlock:(id /* block */)arg4;
- (void)dismissWithView:(id)arg0 withInterViewController:(id)arg1 withModel:(id)arg2 withCompletion:(id /* block */)arg3;
- (BOOL)avoidPauseSearchViewWithModel:(id)arg0;
- (id)currentFeedModel;
- (id)currentFamiliarModel;
- (id)currentDetailTableModel;
- (id)feedPauseEntranceView;
- (void)setFeedPauseEntranceView:(id)arg0;
- (void)setDetailPauseEntranceView:(id)arg0;
- (BOOL)AFDpauseShow;
- (BOOL)feedPauseShow;
- (BOOL)detailPauseShow;
- (void)setDetailPauseShow:(BOOL)arg0;
- (BOOL)detailTablePauseShow;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end