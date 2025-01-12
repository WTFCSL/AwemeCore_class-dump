//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSTimer, UILabel, UIView;

@interface IESLiveMSequenceAnchorProgrammeView : UIView <HTSLivePluginLayoutView> {
    id /* block */ _action;
    UIView *_programmeBackView;
    UIImageView *_programmeImageView;
    UIView *_backView;
    UILabel *_descLabel;
    NSTimer *_timerCount;
    UILabel *_countDownLabel;
}

@property (retain, nonatomic) UIView *programmeBackView;
@property (retain, nonatomic) UIImageView *programmeImageView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) NSTimer *timerCount;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)countDownLabel;
- (void)setCountDownLabel:(id)arg0;
- (void)setTimerCount:(id)arg0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)updateContent:(id)arg0 countDownTime:(long long)arg1 countDownMsg:(id)arg2;
- (id)programmeBackView;
- (id)programmeImageView;
- (double)backViewWidth:(id)arg0;
- (void)startCountWithDuration:(long long)arg0 countDownMsg:(id)arg1 completion:(id /* block */)arg2;
- (void)setProgrammeBackView:(id)arg0;
- (void)setProgrammeImageView:(id)arg0;
- (void)programmeViewTapped:(id)arg0;
- (void)setBackView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)backView;
- (void)setAction:(id /* block */)arg0;
- (id /* block */)action;
- (id)viewType;
- (void)dealloc;
- (void)setupViews;
- (void)updateContent:(id)arg0;
- (id)timerCount;

@end
