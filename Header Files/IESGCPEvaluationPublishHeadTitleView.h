//
//     Generated by private class-dump
//

@class UIButton, IESGCPImageButton, UIView;

@interface IESGCPEvaluationPublishHeadTitleView : UIView {
    id /* block */ _closeActionBlock;
    id /* block */ _publishActionBlock;
    UIButton *_publishBtn;
    UIView *_contentView;
    UIButton *_closeBtn;
    IESGCPImageButton *_titleBtn;
    UIView *_bottomLine;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) IESGCPImageButton *titleBtn;
@property (retain, nonatomic) UIView *bottomLine;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (copy, nonatomic) id /* block */ publishActionBlock;
@property (retain, nonatomic) UIButton *publishBtn;

- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)setPublishBtn:(id)arg0;
- (id)publishBtn;
- (void)configModel:(id)arg0;
- (id /* block */)closeActionBlock;
- (void)setCloseActionBlock:(id /* block */)arg0;
- (void)didClickCloseBtn:(id)arg0;
- (id)titleBtn;
- (id /* block */)publishActionBlock;
- (void)didClickPublishBtn:(id)arg0;
- (void)updatePublishEvaluationBtn:(BOOL)arg0;
- (void)updateLeftButtonImage:(id)arg0;
- (void)setPublishActionBlock:(id /* block */)arg0;
- (void)setTitleBtn:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (void)setupViews;
- (void)updateWithModel:(id)arg0;
- (id)bottomLine;
- (void)setBottomLine:(id)arg0;

@end
