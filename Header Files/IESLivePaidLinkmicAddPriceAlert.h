//
//     Generated by private class-dump
//

@class NSString, UIImageView, IESLiveGCDTimer, UILabel, UIButton;

@interface IESLivePaidLinkmicAddPriceAlert : UIView {
    id /* block */ _onClickAddBtn;
    id /* block */ _onClickSubBtn;
    id /* block */ _onClickConfirmBtn;
    long long _nextPrice;
    long long _lastPrice;
    NSString *_alertTitlePrefix;
    UILabel *_titleLabel;
    UIImageView *_coinIcon;
    UILabel *_coinLabel;
    UILabel *_rankLabel;
    UIButton *_subBtn;
    UIButton *_addBtn;
    UIButton *_confirmBtn;
    long long _rank;
    long long _coin;
    IESLiveGCDTimer *_limitTimer;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *coinIcon;
@property (retain, nonatomic) UILabel *coinLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UIButton *subBtn;
@property (retain, nonatomic) UIButton *addBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (nonatomic) long long rank;
@property (nonatomic) long long coin;
@property (retain, nonatomic) IESLiveGCDTimer *limitTimer;
@property (copy, nonatomic) id /* block */ onClickAddBtn;
@property (copy, nonatomic) id /* block */ onClickSubBtn;
@property (copy, nonatomic) id /* block */ onClickConfirmBtn;
@property (nonatomic) long long nextPrice;
@property (nonatomic) long long lastPrice;
@property (copy, nonatomic) NSString *alertTitlePrefix;

- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg0;
- (void)setAddBtn:(id)arg0;
- (id)addBtn;
- (void)p_setupUI;
- (id /* block */)onClickConfirmBtn;
- (void)setCoin:(long long)arg0;
- (void)setCoinIcon:(id)arg0;
- (id)coinIcon;
- (id)coinLabel;
- (void)setCoinLabel:(id)arg0;
- (long long)lastPrice;
- (void)setLastPrice:(long long)arg0;
- (id)limitTimer;
- (void)setLimitTimer:(id)arg0;
- (id)p_rankAttributeString;
- (id)subBtn;
- (long long)nextPrice;
- (void)p_updateSubAndAddBtnEnabled:(BOOL)arg0;
- (void)p_clearLimitTimer;
- (id)alertTitlePrefix;
- (void)setSubBtn:(id)arg0;
- (void)p_subBtnClick;
- (void)p_addBtnClick;
- (void)p_confirmBtnClick;
- (void)p_startLimitTimer;
- (id /* block */)onClickAddBtn;
- (id /* block */)onClickSubBtn;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 rank:(long long)arg1 coin:(long long)arg2;
- (void)updateCoin:(long long)arg0 rank:(long long)arg1;
- (void)updateMultiAddPriceEnabled:(BOOL)arg0;
- (void)setAlertTitlePrefix:(id)arg0;
- (void)setNextPrice:(long long)arg0;
- (void)setOnClickAddBtn:(id /* block */)arg0;
- (void)setOnClickSubBtn:(id /* block */)arg0;
- (void)setOnClickConfirmBtn:(id /* block */)arg0;
- (void)setRank:(long long)arg0;
- (long long)rank;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;
- (long long)coin;

@end