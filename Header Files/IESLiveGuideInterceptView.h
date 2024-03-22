//
//     Generated by private class-dump
//

@class UIImageView, NSTimer, UILabel, BlockDetail;

@interface IESLiveGuideInterceptView : UIView {
    long long _timeDiff;
    id /* block */ _clickedView;
    id /* block */ _countDownCompletion;
    UIImageView *_statusImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_arrowImageView;
    NSTimer *_countDownTimer;
    long long _unBlockTime;
    BlockDetail *_blockDetail;
}

@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) long long unBlockTime;
@property (copy, nonatomic) BlockDetail *blockDetail;
@property (nonatomic) long long timeDiff;
@property (copy, nonatomic) id /* block */ clickedView;
@property (copy, nonatomic) id /* block */ countDownCompletion;

- (void)viewClicked;
- (id /* block */)countDownCompletion;
- (void)setCountDownCompletion:(id /* block */)arg0;
- (void)addGesture;
- (void)removeTimer;
- (void)setTimeDiff:(long long)arg0;
- (long long)timeDiff;
- (long long)unBlockTime;
- (void)setUnBlockTime:(long long)arg0;
- (void)updateBlockDetailModel:(id)arg0;
- (void)setClickedView:(id /* block */)arg0;
- (void)setupInterceptView;
- (id)blockDetail;
- (id /* block */)clickedView;
- (void)setBlockDetail:(id)arg0;
- (void)showCountDownPrompts:(id)arg0;
- (void)endCountDown;
- (id)calCountDown:(long long)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)statusImageView;
- (void)setStatusImageView:(id)arg0;
- (void)setCountDownTimer:(id)arg0;
- (id)countDownTimer;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end