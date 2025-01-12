//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIView;

@interface IESLiveKTVLotteryPipView : UIView {
    BOOL _isLinking;
    BOOL _isChooseAutoOpen;
    id /* block */ _openBlock;
    id /* block */ _closeBlock;
    id /* block */ _autoSwtichBlock;
    UIView *_container;
    UILabel *_titleView;
    UIButton *_oneChooseBtn;
    UIButton *_cancelBtn;
    UIButton *_openBtn;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UIButton *oneChooseBtn;
@property (nonatomic) BOOL isChooseAutoOpen;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *openBtn;
@property (nonatomic) BOOL isLinking;
@property (copy, nonatomic) id /* block */ openBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ autoSwtichBlock;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg0;
- (void)setOpenBlock:(id /* block */)arg0;
- (id /* block */)openBlock;
- (id)openBtn;
- (void)setOpenBtn:(id)arg0;
- (BOOL)isLinking;
- (void)setIsLinking:(BOOL)arg0;
- (void)setUpLayouts;
- (void)setIsChooseAutoOpen:(BOOL)arg0;
- (void)onTapOnchooes;
- (void)setOneChooseBtn:(id)arg0;
- (void)onTapCancelBtn;
- (void)onTapOpenBtn;
- (id)oneChooseBtn;
- (BOOL)isChooseAutoOpen;
- (id /* block */)autoSwtichBlock;
- (void)setAutoSwtichBlock:(id /* block */)arg0;
- (id)container;
- (id)init;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)setTitleView:(id)arg0;
- (id)titleView;
- (void)setupViews;
- (double)totalHeight;

@end
