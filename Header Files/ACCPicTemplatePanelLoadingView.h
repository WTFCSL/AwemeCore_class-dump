//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIView;
@protocol ACCLoadingViewProtocol;

@interface ACCPicTemplatePanelLoadingView : UIView {
    unsigned long long _loadingStatus;
    id /* block */ _reloadBlk;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    UILabel *_tipsLabel;
    UIButton *_reloadBtn;
}

@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *reloadBtn;
@property (nonatomic) unsigned long long loadingStatus;
@property (copy, nonatomic) id /* block */ reloadBlk;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (void)setReloadBlk:(id /* block */)arg0;
- (id)reloadBtn;
- (id /* block */)reloadBlk;
- (void)reloadBtnClick:(id)arg0;
- (void)setReloadBtn:(id)arg0;
- (void).cxx_destruct;
- (void)setLoadingStatus:(unsigned long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)loadingStatus;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
