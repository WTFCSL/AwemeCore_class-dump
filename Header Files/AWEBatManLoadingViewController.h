//
//     Generated by private class-dump
//

@class AWEBatManCustomTransition, UIView, NSTimer, NSAttributedString, NSString, UIImageView, AWEBatManLoadingProgressView, NSObject, NSMutableArray, AWEBatManModel, UILabel, AWEUIAlertView;
@protocol OS_dispatch_source, AWEBatManManagerProtocol;

@interface AWEBatManLoadingViewController : UIViewController <AWERouterViewControllerProtocol> {
    BOOL _isArchivedGame;
    BOOL _isQueue;
    BOOL _isVipQueue;
    BOOL _shouldShowButtonMap;
    AWEBatManModel *_batManModel;
    UIImageView *_gameIconView;
    id<AWEBatManManagerProtocol> _delegate;
    UIView *_vipFeedbackView;
    UILabel *_feedbackLabel;
    AWEBatManCustomTransition *_transition;
    unsigned long long _originOrientation;
    AWEUIAlertView *_alertView;
    AWEBatManLoadingProgressView *_loadingProgressView;
    UIImageView *_buttonMapView;
    UILabel *_stateLabel;
    UILabel *_progressLabel;
    UILabel *_gameNameLabel;
    UIView *_officalBgView;
    UILabel *_officalLbl;
    UILabel *_descLbl;
    UILabel *_adLabel;
    UIImageView *_logoBgImgView;
    UIImageView *_notiImgView;
    UILabel *_notiLbl;
    double _progress;
    NSObject<OS_dispatch_source> *_sourceTimer;
    NSTimer *_notiTimer;
    NSAttributedString *_attributedRanking;
    NSAttributedString *_attributedRankTotal;
    UIView *_blueView;
    UIView *_rankView;
    UIView *_expandView;
    UIView *_subscribeView;
    UIView *_vipShowTextView;
    UIView *_vipBlueView;
    UIView *_adShowTextView;
    UILabel *_rankTextFirst;
    UILabel *_rankTextSecond;
    UILabel *_rankTextThird;
    UILabel *_rankTextFourth;
    UILabel *_rankTextFifth;
    UILabel *_rankConfig;
    UILabel *_waitTime;
    UILabel *_subscribeText;
    NSMutableArray *_notiArray;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (retain, nonatomic) AWEBatManCustomTransition *transition;
@property (nonatomic) unsigned long long originOrientation;
@property (retain, nonatomic) AWEUIAlertView *alertView;
@property (retain, nonatomic) AWEBatManLoadingProgressView *loadingProgressView;
@property (retain, nonatomic) UIImageView *buttonMapView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UILabel *gameNameLabel;
@property (weak, nonatomic) UIView *officalBgView;
@property (weak, nonatomic) UILabel *officalLbl;
@property (weak, nonatomic) UILabel *descLbl;
@property (weak, nonatomic) UILabel *adLabel;
@property (weak, nonatomic) UIImageView *logoBgImgView;
@property (weak, nonatomic) UIImageView *notiImgView;
@property (weak, nonatomic) UILabel *notiLbl;
@property (nonatomic) BOOL isQueue;
@property (nonatomic) BOOL isVipQueue;
@property (nonatomic) BOOL shouldShowButtonMap;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sourceTimer;
@property (retain, nonatomic) NSTimer *notiTimer;
@property (copy, nonatomic) NSAttributedString *attributedRanking;
@property (copy, nonatomic) NSAttributedString *attributedRankTotal;
@property (weak, nonatomic) UIView *blueView;
@property (weak, nonatomic) UIView *rankView;
@property (weak, nonatomic) UIView *expandView;
@property (weak, nonatomic) UIView *subscribeView;
@property (weak, nonatomic) UIView *vipShowTextView;
@property (weak, nonatomic) UIView *vipBlueView;
@property (weak, nonatomic) UIView *adShowTextView;
@property (weak, nonatomic) UILabel *rankTextFirst;
@property (weak, nonatomic) UILabel *rankTextSecond;
@property (weak, nonatomic) UILabel *rankTextThird;
@property (weak, nonatomic) UILabel *rankTextFourth;
@property (weak, nonatomic) UILabel *rankTextFifth;
@property (weak, nonatomic) UILabel *rankConfig;
@property (weak, nonatomic) UILabel *waitTime;
@property (weak, nonatomic) UILabel *subscribeText;
@property (retain, nonatomic) NSMutableArray *notiArray;
@property (retain, nonatomic) AWEBatManModel *batManModel;
@property (retain, nonatomic) UIImageView *gameIconView;
@property (weak, nonatomic) id<AWEBatManManagerProtocol> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (weak, nonatomic) UIView *vipFeedbackView;
@property (weak, nonatomic) UILabel *feedbackLabel;
@property (nonatomic) BOOL isArchivedGame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)adLabel;
- (void)setAdLabel:(id)arg0;
- (void)setSubscribeView:(id)arg0;
- (id)subscribeView;
- (void)setRankView:(id)arg0;
- (id)rankView;
- (void)setOriginOrientation:(unsigned long long)arg0;
- (unsigned long long)originOrientation;
- (void)setWaitTime:(id)arg0;
- (id)waitTime;
- (BOOL)isArchivedGame;
- (void)setIsArchivedGame:(BOOL)arg0;
- (void)setIsVipQueue:(BOOL)arg0;
- (BOOL)isVipQueue;
- (void)configUI;
- (void)setFeedbackLabel:(id)arg0;
- (id)feedbackLabel;
- (id)expandView;
- (id)rankConfig;
- (void)setRankConfig:(id)arg0;
- (id)descLbl;
- (void)setDescLbl:(id)arg0;
- (id)loadingProgressView;
- (void)setLoadingProgressView:(id)arg0;
- (void)setBatManModel:(id)arg0;
- (id)batManModel;
- (void)updateBatManModel:(id)arg0;
- (void)hideQueueView;
- (void)updateNotiLbl;
- (id)notiTimer;
- (void)setShouldShowButtonMap:(BOOL)arg0;
- (id)buttonMapView;
- (BOOL)shouldShowButtonMap;
- (void)setLogoBgImgView:(id)arg0;
- (void)setBlueView:(id)arg0;
- (void)setVipBlueView:(id)arg0;
- (void)setOfficalBgView:(id)arg0;
- (void)setOfficalLbl:(id)arg0;
- (id)officalLbl;
- (void)setRankTextFirst:(id)arg0;
- (void)setRankTextSecond:(id)arg0;
- (void)setRankTextThird:(id)arg0;
- (void)setRankTextFourth:(id)arg0;
- (void)setRankTextFifth:(id)arg0;
- (void)setSubscribeText:(id)arg0;
- (void)setNotiImgView:(id)arg0;
- (void)setNotiLbl:(id)arg0;
- (void)setExpandView:(id)arg0;
- (void)setVipFeedbackView:(id)arg0;
- (void)setVipShowTextView:(id)arg0;
- (void)setAdShowTextView:(id)arg0;
- (id)gameNameLabel;
- (id)gameIconView;
- (void)configLandscapeUI;
- (void)configPortraitUI;
- (void)configCommonUI;
- (id)blueView;
- (id)vipBlueView;
- (id)logoBgImgView;
- (id)notiLbl;
- (id)notiImgView;
- (id)subscribeText;
- (id)officalBgView;
- (id)rankTextFirst;
- (id)rankTextSecond;
- (id)rankTextThird;
- (id)rankTextFourth;
- (id)rankTextFifth;
- (id)vipFeedbackView;
- (id)vipShowTextView;
- (id)adShowTextView;
- (void)setNotiArray:(id)arg0;
- (id)notiArray;
- (void)setNotiTimer:(id)arg0;
- (void)progressIncreaseOnce;
- (void)setQueueUI:(BOOL)arg0;
- (void)setLoadingUI:(BOOL)arg0;
- (void)changeToVipAndAdQueueView;
- (void)viewDidReload;
- (void)progressBegin;
- (void)progressIncreaseContinually;
- (void)progressEnd;
- (void)quitAction;
- (void)setAttributedRanking:(id)arg0;
- (void)setAttributedRankTotal:(id)arg0;
- (void)changeToQueueView;
- (void)changeToLoadingView;
- (void)updateQueueView:(id)arg0 rankTotal:(id)arg1;
- (void)changeToVipQueueView;
- (void)changeToAdQueueView:(int)arg0 rank:(int)arg1;
- (void)setGameIconView:(id)arg0;
- (void)setButtonMapView:(id)arg0;
- (void)setGameNameLabel:(id)arg0;
- (BOOL)isQueue;
- (void)setIsQueue:(BOOL)arg0;
- (id)attributedRanking;
- (id)attributedRankTotal;
- (void)setTransition:(id)arg0;
- (BOOL)shouldAutorotate;
- (id)sourceTimer;
- (void)viewDidAppear:(BOOL)arg0;
- (id)transition;
- (void).cxx_destruct;
- (void)setAlertView:(id)arg0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setSourceTimer:(id)arg0;
- (id)delegate;
- (double)progress;
- (void)setProgressPercent:(double)arg0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setProgress:(double)arg0;
- (void)viewDidLoad;
- (id)alertView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg0;
- (id)stateLabel;
- (void)setStateLabel:(id)arg0;

@end