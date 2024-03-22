//
//     Generated by private class-dump
//

@class UILabel, NSTimer, UIView;

@interface AWEVideoPlayControlTipsController : AWEVideoPlayControlBaseController {
    UIView *_tipsView;
    UILabel *_tipsLabel;
    NSTimer *_timer;
}

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) NSTimer *timer;

- (void)setHide:(BOOL)arg0;
- (id)tipsLabel;
- (id)tipsView;
- (void)setTipsView:(id)arg0;
- (void)setTipsLabel:(id)arg0;
- (void)bindEvent;
- (void)updateTipsViewLayOut;
- (void)showContinuePlayReminderView:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)showMovieTicketPaymentInfoWithModel:(id)arg0;
- (void)showReminderView:(id)arg0 duration:(double)arg1 withCompletion:(id /* block */)arg2;
- (id)timer;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;

@end