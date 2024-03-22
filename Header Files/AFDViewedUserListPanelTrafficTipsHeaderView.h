//
//     Generated by private class-dump
//

@class AFDViewedUserListPanelTrafficTipsEditorView, UILabel, UIView, UIButton;

@interface AFDViewedUserListPanelTrafficTipsHeaderView : UIView {
    id /* block */ _closeBtnClickedActionBlock;
    id /* block */ _editorBtnClickedActionBlock;
    unsigned long long _style;
    unsigned long long _coldStartPlayCount;
    UIView *_containerView;
    UILabel *_fireworksLabel;
    UILabel *_tipsLabel;
    UIButton *_closeBtn;
    AFDViewedUserListPanelTrafficTipsEditorView *_editorBtn;
}

@property (nonatomic) unsigned long long coldStartPlayCount;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *fireworksLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) AFDViewedUserListPanelTrafficTipsEditorView *editorBtn;
@property (copy, nonatomic) id /* block */ closeBtnClickedActionBlock;
@property (copy, nonatomic) id /* block */ editorBtnClickedActionBlock;

- (id)tipsLabel;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)setTipsLabel:(id)arg0;
- (void)p_setupUI;
- (id)fireworksLabel;
- (id)editorBtn;
- (id /* block */)closeBtnClickedActionBlock;
- (id /* block */)editorBtnClickedActionBlock;
- (unsigned long long)coldStartPlayCount;
- (id)tipsWithColdStartPlayCount:(unsigned long long)arg0;
- (void)p_closeBtnClicked;
- (void)p_editorBtnClicked;
- (id)initWithColdStartPlayCount:(unsigned long long)arg0 headerViewStyle:(unsigned long long)arg1;
- (void)setCloseBtnClickedActionBlock:(id /* block */)arg0;
- (void)setEditorBtnClickedActionBlock:(id /* block */)arg0;
- (void)setColdStartPlayCount:(unsigned long long)arg0;
- (void)setFireworksLabel:(id)arg0;
- (void)setEditorBtn:(id)arg0;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setStyle:(unsigned long long)arg0;

@end