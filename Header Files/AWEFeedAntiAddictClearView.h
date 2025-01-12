//
//     Generated by private class-dump
//

@class UIView, NSString, UIImageView, NSTimer, AWEGradientView, UILabel, UIButton;
@protocol AWEFeedAntiAddictClearViewDisplayProtocol;

@interface AWEFeedAntiAddictClearView : UIView <UIGestureRecognizerDelegate, AWEAntiAddictNoticeMessage, AWEFeedAntiAddictClearViewProtocol> {
    BOOL _showPlaceHolder;
    BOOL _isAnimating;
    BOOL _alreadyShrink;
    BOOL _originalClipsToBounds;
    AWEGradientView *_placeHolderBackgroundView;
    UIImageView *_placeHolderImageView;
    UILabel *_titleLabel;
    UILabel *_blockAfterLabel;
    UILabel *_subTitleLabel;
    UIButton *_confirmBtn;
    UIButton *_cancelBtn;
    UIView *_boardView;
    UIButton *_playerBtn;
    AWEGradientView *_gradientView;
    NSTimer *_timer;
    double _countDownValue;
    long long _antiAddictType;
    unsigned long long _noticeType;
    long long _antiAddictCountDownTime;
    long long _antiAddictBlockToTime;
    id<AWEFeedAntiAddictClearViewDisplayProtocol> _delegate;
    double _originalBorderWidth;
    double _originalCornerRadius;
}

@property (retain, nonatomic) AWEGradientView *placeHolderBackgroundView;
@property (retain, nonatomic) UIImageView *placeHolderImageView;
@property (nonatomic) BOOL showPlaceHolder;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *blockAfterLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIView *boardView;
@property (retain, nonatomic) UIButton *playerBtn;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double countDownValue;
@property (nonatomic) long long antiAddictType;
@property (nonatomic) unsigned long long noticeType;
@property (nonatomic) long long antiAddictCountDownTime;
@property (nonatomic) long long antiAddictBlockToTime;
@property (weak, nonatomic) id<AWEFeedAntiAddictClearViewDisplayProtocol> delegate;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL alreadyShrink;
@property (nonatomic) BOOL originalClipsToBounds;
@property (nonatomic) double originalBorderWidth;
@property (nonatomic) double originalCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNoticeType:(unsigned long long)arg0;
- (id)confirmBtn;
- (id)cancelBtn;
- (void)setConfirmBtn:(id)arg0;
- (void)setCancelBtn:(id)arg0;
- (long long)antiAddictType;
- (void)setAntiAddictType:(long long)arg0;
- (long long)antiAddictCountDownTime;
- (void)setAntiAddictCountDownTime:(long long)arg0;
- (long long)antiAddictBlockToTime;
- (void)setAntiAddictBlockToTime:(long long)arg0;
- (void)confirmBtnAction;
- (void)systemBlockMaskConfigDidChange;
- (id)boardView;
- (void)setBoardView:(id)arg0;
- (void)setBlockAfterLabel:(id)arg0;
- (id)blockAfterLabel;
- (void)catchGesture:(id)arg0;
- (void)trackUserAction:(id)arg0;
- (id)timeStringFrom:(double)arg0;
- (void)setShowPlaceHolder:(BOOL)arg0;
- (void)setAlreadyShrink:(BOOL)arg0;
- (id)placeHolderBackgroundView;
- (id)placeHolderImageView;
- (id)playerBtn;
- (void)didClickPlayer;
- (void)updateAntiBlockTypeTitle;
- (BOOL)alreadyShrink;
- (void)setPlaceHolderBackgroundView:(id)arg0;
- (void)setPlaceHolderImageView:(id)arg0;
- (void)setPlayerBtn:(id)arg0;
- (void)actionClicked:(long long)arg0;
- (BOOL)showPlaceHolder;
- (BOOL)originalClipsToBounds;
- (double)originalCornerRadius;
- (void)beginAnimateWithView:(id)arg0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 isShrink:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setOriginalClipsToBounds:(BOOL)arg0;
- (void)setOriginalCornerRadius:(double)arg0;
- (void)defaultShowInfo;
- (void)defaultShrink;
- (void)handleSwip:(struct CGPoint { double x0; double x1; })arg0;
- (void)showWithDelayTime:(double)arg0;
- (void)updateWithAntiModel:(id)arg0;
- (void)onApplicationDidChangeStatusBarOrientation;
- (void)leave;
- (id)timer;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)stopTimer;
- (id)titleLabel;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setTimer:(id)arg0;
- (void)cancelAction;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setUp;
- (id)gradientView;
- (void)setTitleLabel:(id)arg0;
- (void)setupTimer;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setDisplayDelegate:(id)arg0;
- (double)originalBorderWidth;
- (void)setOriginalBorderWidth:(double)arg0;
- (unsigned long long)noticeType;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)countDown;
- (void)setCountDownValue:(double)arg0;
- (double)countDownValue;

@end
