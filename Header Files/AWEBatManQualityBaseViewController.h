//
//     Generated by private class-dump
//

@class UIButton, UILabel;
@protocol AWEBatManManagerProtocol;

@interface AWEBatManQualityBaseViewController : UIViewController {
    BOOL _switching;
    id<AWEBatManManagerProtocol> _delegate;
    id /* block */ _completion;
    UILabel *_titleLbl;
    UIButton *_SDBtn;
    UIButton *_HDBtn;
    UIButton *_FHDBtn;
    UIButton *_buttonSelected;
}

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIButton *buttonSelected;
@property (nonatomic, getter=isSwitching) BOOL switching;
@property (weak, nonatomic) UILabel *titleLbl;
@property (weak, nonatomic) UIButton *SDBtn;
@property (weak, nonatomic) UIButton *HDBtn;
@property (weak, nonatomic) UIButton *FHDBtn;
@property (weak, nonatomic) id<AWEBatManManagerProtocol> delegate;

- (void)configUI;
- (void)setTitleLbl:(id)arg0;
- (id)titleLbl;
- (void)onSDBtnClicked:(id)arg0;
- (id)createQualityBtnWithTitle:(id)arg0 tag:(long long)arg1 defaultIndex:(long long)arg2 action:(SEL)arg3;
- (void)setSDBtn:(id)arg0;
- (void)onHDBtnClicked:(id)arg0;
- (void)setHDBtn:(id)arg0;
- (void)onFHDBtnClicked:(id)arg0;
- (void)setFHDBtn:(id)arg0;
- (void)setButtonSelected:(id)arg0;
- (id)buttonSelected;
- (void)onQualityChangedWithSender:(id)arg0 index:(long long)arg1;
- (id)SDBtn;
- (id)HDBtn;
- (id)FHDBtn;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setCompletion:(id /* block */)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)initWithCompletion:(id /* block */)arg0;
- (id)delegate;
- (void)dismissAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setSwitching:(BOOL)arg0;
- (BOOL)isSwitching;

@end
