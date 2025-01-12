//
//     Generated by private class-dump
//

@class UILabel, AWETemplateSeparatorView, UIImageView, NSString, UIView, AWETemplateBarModel, AWETemplateBarContext;
@protocol AWETemplateViewActionProtocol;

@interface AWETemplateCommonView : UIView <AWETemplateViewProtocol> {
    id<AWETemplateViewActionProtocol> _delegate;
    AWETemplateBarModel *_currentModel;
    AWETemplateBarContext *_barContext;
    UIView *_containerView;
    UIImageView *_headerIcon;
    UILabel *_titleLabel;
    AWETemplateSeparatorView *_separatorView;
    UILabel *_mainContent;
    UILabel *_subContentLabel;
    UIImageView *_tailImageView;
}

@property (retain, nonatomic) AWETemplateBarModel *currentModel;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *headerIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWETemplateSeparatorView *separatorView;
@property (retain, nonatomic) UILabel *mainContent;
@property (retain, nonatomic) UILabel *subContentLabel;
@property (retain, nonatomic) UIImageView *tailImageView;
@property (weak, nonatomic) id<AWETemplateViewActionProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configSubviews;
- (id)headerIcon;
- (void)setHeaderIcon:(id)arg0;
- (id)mainContent;
- (void)setMainContent:(id)arg0;
- (id)subContentLabel;
- (void)setSubContentLabel:(id)arg0;
- (void)setBarContext:(id)arg0;
- (id)barContext;
- (void)addSubViews;
- (void)layoutSubview;
- (void)updateSizeWithLayoutModel:(id)arg0 targetView:(id)arg1;
- (void)didClickCommonView;
- (id)initWithData:(id)arg0 context:(id)arg1;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setSeparatorView:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)delegate;
- (id)containerView;
- (void)updateWithData:(id)arg0;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)separatorView;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (void)setTitleLabel:(id)arg0;
- (id)initWithData:(id)arg0;
- (id)tailImageView;
- (void)setTailImageView:(id)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end
