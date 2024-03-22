//
//     Generated by private class-dump
//

@class AWEPlayInteractionViewController, NSString, UIImage, UIView, AWEAwemeModel;
@protocol AWEPauseEntranceViewProtocol;

@interface AWEPauseEntranceViewManager : NSObject <AWEPauseEntranceViewManagerProtocol> {
    BOOL _AFDpauseShow;
    BOOL _feedPauseShow;
    BOOL _detailPauseShow;
    BOOL _detailTablePauseShow;
    BOOL _shouldShow;
    AWEAwemeModel *_currentModel;
    AWEAwemeModel *_currentFeedModel;
    AWEAwemeModel *_currentFamiliarModel;
    AWEAwemeModel *_currentDetailTableModel;
    UIView<AWEPauseEntranceViewProtocol> *_AFDpauseEntranceView;
    UIView<AWEPauseEntranceViewProtocol> *_feedPauseEntranceView;
    UIView<AWEPauseEntranceViewProtocol> *_detailPauseEntranceView;
    UIView<AWEPauseEntranceViewProtocol> *_detailTablePauseEntranceView;
    UIView *_AFDdiscoverEntranceView;
    UIView *_detailTableDiscoverEntranceView;
    AWEPlayInteractionViewController *_interactionVC;
    UIImage *_currentImage;
    AWEAwemeModel *_currentInteractiveModel;
}

@property (nonatomic) BOOL shouldShow;
@property (retain, nonatomic) UIImage *currentImage;
@property (weak, nonatomic) AWEAwemeModel *currentInteractiveModel;
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
@property (nonatomic) BOOL AFDpauseShow;
@property (nonatomic) BOOL feedPauseShow;
@property (nonatomic) BOOL detailPauseShow;
@property (nonatomic) BOOL detailTablePauseShow;
@property (weak, nonatomic) AWEPlayInteractionViewController *interactionVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

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
- (BOOL)exclusiveTag;
- (void)showWithModel:(id)arg0 withInterViewController:(id)arg1 withCompletion:(id /* block */)arg2 withBlock:(id /* block */)arg3;
- (void)dismissWithModel:(id)arg0 withInterViewController:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)trackChannelNotFoundForShowPauseEntrance:(BOOL)arg0 model:(id)arg1 interactionVC:(id)arg2;
- (void)setFeedPauseShow:(BOOL)arg0;
- (void)setCurrentFeedModel:(id)arg0;
- (id)AFDpauseEntranceView;
- (id)AFDdiscoverEntranceView;
- (void)setAFDpauseShow:(BOOL)arg0;
- (void)setCurrentFamiliarModel:(id)arg0;
- (id)detailTableDiscoverEntranceView;
- (void)setDetailTablePauseShow:(BOOL)arg0;
- (void)setCurrentDetailTableModel:(id)arg0;
- (id)pauseSearchTextSetting;
- (BOOL)enableDismissPauseEntranceForBusiness:(id)arg0;
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
- (id)currentInteractiveModel;
- (void)setCurrentInteractiveModel:(id)arg0;
- (void).cxx_destruct;
- (id)currentImage;
- (BOOL)shouldShow;
- (void)setCurrentImage:(id)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;
- (void)setShouldShow:(BOOL)arg0;

@end