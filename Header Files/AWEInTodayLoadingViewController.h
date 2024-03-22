//
//     Generated by private class-dump
//

@class UIView, NSString, NSTimer, AWEInTodaySchemaUIConfig, UIImageView, UIButton, CAGradientLayer, AWEMemoriesPlayerLoadingView, AWEMemoriesPlayerEmptyView, UILabel;
@protocol AWEInTodayLoadingViewControllerDelegate;

@interface AWEInTodayLoadingViewController : UIViewController {
    BOOL _isAppearing;
    BOOL _isFirstAppear;
    BOOL _hasUpdatedBGImage;
    id /* block */ _shootAction;
    NSString *_taskId;
    unsigned long long _status;
    id<AWEInTodayLoadingViewControllerDelegate> _delegate;
    id /* block */ _dismissBlock;
    AWEInTodaySchemaUIConfig *_uiConfig;
    UIImageView *_bgImageView;
    UIView *_maskView;
    UILabel *_aggregatingTextLabel;
    UILabel *_progressLabel;
    CAGradientLayer *_gradientLayer;
    UIView *_progressBG;
    UILabel *_illustrateLabel;
    UIButton *_backBtn;
    AWEMemoriesPlayerLoadingView *_logoLoadingView;
    UIView *_loadingView;
    UIView *_failedView;
    AWEMemoriesPlayerEmptyView *_emptyView;
    NSTimer *_aggregateTimer;
}

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) AWEInTodaySchemaUIConfig *uiConfig;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UILabel *aggregatingTextLabel;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *progressBG;
@property (retain, nonatomic) UILabel *illustrateLabel;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) AWEMemoriesPlayerLoadingView *logoLoadingView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView *failedView;
@property (retain, nonatomic) AWEMemoriesPlayerEmptyView *emptyView;
@property (nonatomic) BOOL hasUpdatedBGImage;
@property (retain, nonatomic) NSTimer *aggregateTimer;
@property (copy, nonatomic) id /* block */ shootAction;
@property (nonatomic) BOOL isAppearing;
@property (weak, nonatomic) id<AWEInTodayLoadingViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (id)uiConfig;
- (id)backBtn;
- (void)setBackBtn:(id)arg0;
- (void)setIsFirstAppear:(BOOL)arg0;
- (void)setUiConfig:(id)arg0;
- (void)buildLoadingView;
- (id)failedView;
- (void)setFailedView:(id)arg0;
- (void)backClicked;
- (id /* block */)shootAction;
- (void)setShootAction:(id /* block */)arg0;
- (id)aggregateTimer;
- (id)initWithUIConfig:(id)arg0 taskId:(id)arg1 status:(unsigned long long)arg2;
- (void)didCompleteLoading;
- (void)setAggregateTimer:(id)arg0;
- (void)updateBGIfNeededWithAssetId:(id)arg0;
- (void)setLogoLoadingView:(id)arg0;
- (id)logoLoadingView;
- (void)updateWithLoadingStatus:(unsigned long long)arg0;
- (void)startAggregateLoading;
- (BOOL)hasUpdatedBGImage;
- (void)setHasUpdatedBGImage:(BOOL)arg0;
- (id)aggregatingTextLabel;
- (id)progressBG;
- (id)illustrateLabel;
- (void)setAggregatingTextLabel:(id)arg0;
- (void)setProgressBG:(id)arg0;
- (void)setIllustrateLabel:(id)arg0;
- (id)gradientLayer;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setIsAppearing:(BOOL)arg0;
- (unsigned long long)status;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)maskView;
- (BOOL)isAppearing;
- (id)delegate;
- (void)setStatus:(unsigned long long)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (id)taskId;
- (void)setMaskView:(id)arg0;
- (id)defaultManager;
- (void)setGradientLayer:(id)arg0;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (void)setTaskId:(id)arg0;
- (id)progressLabel;
- (BOOL)isFirstAppear;
- (void)setProgressLabel:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
