//
//     Generated by private class-dump
//

@class UIViewController, NSString, AWEAwemeModel, UIView, AWEFeedHotSpotCellViewController;
@protocol UIScrollViewDelegate;

@interface AWEFeedHotSpotCell : AWEAwemeDetailTableViewCell <AWEFeedTableViewCellProtocol> {
    BOOL _hadPrepareToDisplay;
    BOOL _isShowing;
    long long _indexPath;
    AWEFeedHotSpotCellViewController *_viewController;
    UIViewController *_parentVC;
    NSString *_referString;
    UIView *_feedTableViewCellMaskView;
    AWEAwemeModel *_registerElementModel;
    long long _cellDisplayState;
    long long _cellPageAppearState;
    id /* block */ _currentCellPageAppearStateBlock;
    struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *_audioWrapper;
    struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *_videoWrapper;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWEFeedHotSpotCellViewController *viewController;
@property (nonatomic) long long indexPath;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (nonatomic) long long cellDisplayState;
@property (nonatomic) long long cellPageAppearState;
@property (copy, nonatomic) id /* block */ currentCellPageAppearStateBlock;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *videoWrapper;
@property (retain, nonatomic) UIView *feedTableViewCellMaskView;
@property (readonly, weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setIsShowing:(BOOL)arg0;
- (void)setReferString:(id)arg0;
- (void)prepareForDisplayWithoutCoverImage;
- (BOOL)isScrolledAutomatically;
- (void)setIsScrolledAutomatically:(BOOL)arg0;
- (struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)audioWrapper;
- (void)setAudioWrapper:(struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)arg0;
- (struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)videoWrapper;
- (void)setVideoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)arg0;
- (BOOL)isCommentPanelShowing;
- (BOOL)isLikeUserPanelShowing;
- (BOOL)isRelatedVideoPanelShowing;
- (void)configWithModel:(id)arg0;
- (void)updateAntiAddictedOptStrongRemindView:(BOOL)arg0;
- (BOOL)hadPrepareToDisplay;
- (void)setHadPrepareToDisplay:(BOOL)arg0;
- (id)registerElementModel;
- (void)setRegisterElementModel:(id)arg0;
- (long long)cellDisplayState;
- (void)setCellDisplayState:(long long)arg0;
- (long long)cellPageAppearState;
- (void)setCellPageAppearState:(long long)arg0;
- (id /* block */)currentCellPageAppearStateBlock;
- (void)setCurrentCellPageAppearStateBlock:(id /* block */)arg0;
- (void)resetRefreshFlag;
- (void)addFeedTableViewCellMaskView:(id)arg0;
- (void)removeFeedTableViewCellMaskView;
- (id)feedTableViewCellMaskView;
- (void)setFeedTableViewCellMaskView:(id)arg0;
- (void)_removeChildVC;
- (void)_addChildVC;
- (void)replaceCurrentViewContoller:(id)arg0;
- (void)detailViewWillDisappear;
- (void)setAntiAddictPureMode:(BOOL)arg0;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (id)scrollViewDelegate;
- (double)currentPlaybackTime;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)model;
- (void)setIndexPath:(long long)arg0;
- (void)stop;
- (BOOL)isShowing;
- (long long)indexPath;
- (void)prepareForReuse;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)reset;
- (void)configureWithModel:(id)arg0;
- (void)didEndDisplaying;
- (void)_setupChildVC;
- (void)willDisplay;
- (id)parentVC;
- (void)setParentVC:(id)arg0;

@end
