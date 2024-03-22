//
//     Generated by private class-dump
//

@class UIButton, UILabel, UIView;

@interface IESLiveKTVWillSingListWatingConnectView : UIView {
    UILabel *_titleLabel;
    UIView *_leftLine;
    UIView *_rightLine;
    UIButton *_clickButton;
    id /* block */ _clickCompletion;
}

@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) UIButton *clickButton;
@property (copy, nonatomic) id /* block */ clickCompletion;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)setClickButton:(id)arg0;
- (id)clickButton;
- (id)leftLine;
- (void)setLeftLine:(id)arg0;
- (id)rightLine;
- (void)setRightLine:(id)arg0;
- (id /* block */)clickCompletion;
- (void)setClickCompletion:(id /* block */)arg0;
- (void)changeTextContent:(id)arg0;
- (void)isShowLineStyle:(BOOL)arg0;
- (id)initWithWaitingPrompts:(id)arg0;
- (void)p_setupUIWithWaitingPrompts:(id)arg0;
- (void)p_setupUIWithWaitingOffset:(unsigned long long)arg0;
- (void)p_didClickButton;
- (id)initWithWaitingOffset:(unsigned long long)arg0 clickCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;

@end
