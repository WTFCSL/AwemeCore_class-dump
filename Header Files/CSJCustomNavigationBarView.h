//
//     Generated by private class-dump
//

@class CSJMaterialMeta, UILabel, UIView, UIButton;
@protocol CSJCustomNavigationBarDelegate;

@interface CSJCustomNavigationBarView : UIView {
    UIButton *_backButton;
    UIButton *_closeButton;
    UIButton *_dislikeButton;
    UILabel *_titleLabel;
    UIView *_line;
    id<CSJCustomNavigationBarDelegate> _delegate;
    CSJMaterialMeta *_materialMeta;
    unsigned long long _navBarStyle;
}

@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (nonatomic) unsigned long long navBarStyle;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *line;
@property (weak, nonatomic) id<CSJCustomNavigationBarDelegate> delegate;

- (void)closeAction:(id)arg0;
- (void)layoutVideoLandingpage;
- (void)layoutNormalLandingpage;
- (void)layoutNormalLandingpageNew;
- (double)getDislikeButtonWidthWithHeight:(double)arg0;
- (id)materialMeta;
- (void)setMaterialMeta:(id)arg0;
- (id)dislikeButton;
- (void)setDislikeButton:(id)arg0;
- (void)updateTitleLabel:(id)arg0;
- (void)dislikeButtonTapped:(id)arg0;
- (id)initWithMaterial:(id)arg0 style:(unsigned long long)arg1;
- (unsigned long long)navBarStyle;
- (void).cxx_destruct;
- (void)setNavBarStyle:(unsigned long long)arg0;
- (id)titleLabel;
- (void)setup;
- (id)delegate;
- (id)line;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)goBack:(id)arg0;
- (void)setLine:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end