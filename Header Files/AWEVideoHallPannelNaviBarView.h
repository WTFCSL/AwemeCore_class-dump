//
//     Generated by private class-dump
//

@class UILabel, UIButton;

@interface AWEVideoHallPannelNaviBarView : UIView {
    UILabel *_titleLable;
    UIButton *_backButton;
    id /* block */ _backBtnBlock;
}

@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIButton *backButton;
@property (copy, nonatomic) id /* block */ backBtnBlock;

- (void)handleBackButton;
- (id)titleLable;
- (void)setTitleLable:(id)arg0;
- (void)setBackBtnBlock:(id /* block */)arg0;
- (id /* block */)backBtnBlock;
- (id)init;
- (void).cxx_destruct;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)setupUI;

@end
