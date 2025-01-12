//
//     Generated by private class-dump
//

@class UILabel, AWEButton, AWEAwemeModel;
@protocol AWEAdWebViewGuideDelegate;

@interface AWEAdWebViewGuideView : UIView {
    AWEAwemeModel *_model;
    id<AWEAdWebViewGuideDelegate> _delegate;
    UILabel *_descLabel;
    UILabel *_tipsLabel;
    AWEButton *_openButton;
}

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) AWEButton *openButton;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEAdWebViewGuideDelegate> delegate;

- (id)tipsLabel;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)setTipsLabel:(id)arg0;
- (void)closeBtnClicked:(id)arg0;
- (void)openBtnClicked:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)openButton;
- (void)setOpenButton:(id)arg0;
- (void)_setupUI;

@end
