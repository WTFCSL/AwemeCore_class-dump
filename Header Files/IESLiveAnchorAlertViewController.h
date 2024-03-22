//
//     Generated by private class-dump
//

@class UIView, NSString, NSTimer, NSArray, UIImage, UIImageView, UIButton, LOTAnimationView, UILabel, UIScrollView;
@protocol IESLiveInternalRouter;

@interface IESLiveAnchorAlertViewController : UIViewController {
    BOOL _isScreenShotRoom;
    BOOL _needAnchorEducation;
    BOOL _isNotNeedBrackets;
    id /* block */ _actionBlock;
    id /* block */ _cancelBlock;
    NSString *_conventionURL;
    id /* block */ _countDownBlock;
    long long _remainTime;
    NSString *_actionButtonTitle;
    NSString *_cancelButtonTitle;
    UIImage *_headerImage;
    NSString *_titleString;
    NSString *_messageString;
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILabel *_rankLabel;
    UILabel *_durationLabel;
    UILabel *_rankTitleLabel;
    UILabel *_durationTitleLabel;
    UILabel *_countDownLabel;
    UIView *_backgroundView;
    UIView *_containerView;
    UIView *_separator;
    UIView *_separator2;
    UIButton *_conventionButton;
    UIButton *_actionButton;
    UIButton *_actionButton2;
    UIButton *_cancelButton;
    UIScrollView *_titlecrollview;
    UIScrollView *_messagescrollview;
    LOTAnimationView *_loadingView;
    UIImageView *_imageLoadingView;
    UIButton *_sensitiveButton;
    long long _rank;
    long long _duration;
    NSTimer *_blockTimer;
    NSString *_tipURL;
    NSString *_tipTitle;
    unsigned long long _stage;
    id<IESLiveInternalRouter> _internalRouter;
    double _backgroundTime;
    NSArray *_messageList;
    NSString *_buttonTitle;
    NSString *_topIconURL;
}

@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *messageString;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *rankTitleLabel;
@property (retain, nonatomic) UILabel *durationTitleLabel;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *separator2;
@property (retain, nonatomic) UIButton *conventionButton;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *actionButton2;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIScrollView *titlecrollview;
@property (retain, nonatomic) UIScrollView *messagescrollview;
@property (retain, nonatomic) LOTAnimationView *loadingView;
@property (retain, nonatomic) UIImageView *imageLoadingView;
@property (retain, nonatomic) UIButton *sensitiveButton;
@property (nonatomic) long long rank;
@property (nonatomic) long long duration;
@property (retain, nonatomic) NSTimer *blockTimer;
@property (copy, nonatomic) NSString *tipURL;
@property (copy, nonatomic) NSString *tipTitle;
@property (nonatomic) unsigned long long stage;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (nonatomic) double backgroundTime;
@property (copy, nonatomic) NSArray *messageList;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *topIconURL;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) NSString *conventionURL;
@property (copy, nonatomic) id /* block */ countDownBlock;
@property (nonatomic) long long remainTime;
@property (copy, nonatomic) NSString *actionButtonTitle;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (retain, nonatomic) UIImage *headerImage;
@property (nonatomic) BOOL isScreenShotRoom;
@property (nonatomic) BOOL needAnchorEducation;
@property (nonatomic) BOOL isNotNeedBrackets;

+ (id)anchorAlertControllerWithTitle:(id)arg0 message:(id)arg1 stage:(unsigned long long)arg2;
+ (id)anchorAlertControllerWithTitle:(id)arg0 message:(id)arg1 topIconURL:(id)arg2 stage:(unsigned long long)arg3;
+ (id)anchorAlertControllerWithTitle:(id)arg0 message:(id)arg1 tipTitle:(id)arg2 tipURL:(id)arg3 stage:(unsigned long long)arg4;
+ (id)anchorAlertControllerWithRank:(long long)arg0 duration:(long long)arg1 stage:(unsigned long long)arg2;
+ (id)anchorAlertControllerWithTitle:(id)arg0 messageList:(id)arg1 buttonTitle:(id)arg2 stage:(unsigned long long)arg3;

- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (id)countDownLabel;
- (void)setCountDownLabel:(id)arg0;
- (id)rankTitleLabel;
- (void)setRankTitleLabel:(id)arg0;
- (id)separator2;
- (void)setSeparator2:(id)arg0;
- (long long)remainTime;
- (void)setRemainTime:(long long)arg0;
- (void)setMessageList:(id)arg0;
- (void)setBackgroundTime:(double)arg0;
- (double)backgroundTime;
- (id)tipURL;
- (void)setTipURL:(id)arg0;
- (id)topIconURL;
- (void)setCountDownBlock:(id /* block */)arg0;
- (void)setIsScreenShotRoom:(BOOL)arg0;
- (void)setConventionURL:(id)arg0;
- (void)setNeedAnchorEducation:(BOOL)arg0;
- (void)setTipTitle:(id)arg0;
- (id)initWithTitle:(id)arg0 messageList:(id)arg1 buttonTitle:(id)arg2 stage:(unsigned long long)arg3;
- (id)initWithTitle:(id)arg0 message:(id)arg1 rank:(long long)arg2 duration:(long long)arg3 tipTitle:(id)arg4 tipURL:(id)arg5 stage:(unsigned long long)arg6;
- (id)initWithTitle:(id)arg0 message:(id)arg1 topIconURL:(id)arg2 rank:(long long)arg3 duration:(long long)arg4 tipTitle:(id)arg5 tipURL:(id)arg6 stage:(unsigned long long)arg7;
- (void)actionButtonDidClick:(id)arg0;
- (void)prepareContentWithStage:(unsigned long long)arg0;
- (void)layoutContentWithStage:(unsigned long long)arg0;
- (void)prepareNoticeStageContent:(unsigned long long)arg0;
- (void)prepareBlockedStageContent;
- (void)prepareTimeLimitBlockedStageContent;
- (void)prepareWaitingForReviewStageContent;
- (void)prepareInReviewStageContent;
- (void)prepareUploadCoverStageContent;
- (void)prepareUploadCoverReviewFailedStageContent;
- (void)prepareCommonStage;
- (void)prepareGuideStageContent;
- (void)prepareMessageListWithImage;
- (void)prepareMessageList;
- (void)layoutNoticeStageContent;
- (void)layoutBlockedStageContent;
- (void)layoutTimeLimitBlockedStageContent;
- (void)layoutWaitingForReviewStageContent;
- (void)layoutInReviewStageContent;
- (void)layoutUploadCoverStageContent;
- (void)layoutUploadCoverReviewFailedStageContent;
- (void)layoutCommonStageContent;
- (void)layoutGuideStageContent;
- (void)layoutMessageListWithImage;
- (void)layoutMessageList;
- (void)layoutSecurityInspectStageContent;
- (void)layoutEducationBeforePenaltyStageContent;
- (void)setTitlecrollview:(id)arg0;
- (id)titlecrollview;
- (void)setMessagescrollview:(id)arg0;
- (id)messagescrollview;
- (id /* block */)countDownBlock;
- (void)setupNoticeCountDownTimer;
- (void)cancelButtonDidClick:(id)arg0;
- (void)setActionButton2:(id)arg0;
- (void)setupBlockTimter;
- (id)countDownRichStrWithSeconds:(long long)arg0;
- (BOOL)isScreenShotRoom;
- (void)setupTimeLimitBlockTimter;
- (void)timeLimitBlockEnterBackground;
- (void)timeLimitBlockEnterForeground;
- (void)setDurationTitleLabel:(id)arg0;
- (void)conventionButtonDidClick:(id)arg0;
- (void)setConventionButton:(id)arg0;
- (void)setImageLoadingView:(id)arg0;
- (id)imageLoadingView;
- (void)setSensitiveButton:(id)arg0;
- (id)sensitiveButton;
- (void)sensitiveButtonClicked:(id)arg0;
- (id)conventionButton;
- (id)durationTitleLabel;
- (id)actionButton2;
- (void)setupActionButtonTitleWithRemainTime;
- (BOOL)needAnchorEducation;
- (BOOL)isNotNeedBrackets;
- (id)conventionURL;
- (void)setIsNotNeedBrackets:(BOOL)arg0;
- (void)setMessageString:(id)arg0;
- (void)setTopIconURL:(id)arg0;
- (void)setRank:(long long)arg0;
- (void)setCancelButton:(id)arg0;
- (long long)rank;
- (void)viewDidLayoutSubviews;
- (id)backgroundView;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)separator;
- (void)setSeparator:(id)arg0;
- (void)stopTimer;
- (id)titleLabel;
- (unsigned long long)stage;
- (void)setContainerView:(id)arg0;
- (void)setMessageLabel:(id)arg0;
- (long long)duration;
- (id)containerView;
- (id)buttonTitle;
- (id)description;
- (void)setCancelBlock:(id /* block */)arg0;
- (id /* block */)actionBlock;
- (id)messageLabel;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setStage:(unsigned long long)arg0;
- (void)setDuration:(long long)arg0;
- (void)setButtonTitle:(id)arg0;
- (id)titleString;
- (void)setTitleString:(id)arg0;
- (id)tipTitle;
- (void)setActionButtonTitle:(id)arg0;
- (id)actionButtonTitle;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;
- (void)setHeaderImage:(id)arg0;
- (id)headerImage;
- (id)messageString;
- (id)cancelButtonTitle;
- (void)setCancelButtonTitle:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg0;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;
- (id)blockTimer;
- (void)setBlockTimer:(id)arg0;
- (id)messageList;

@end
