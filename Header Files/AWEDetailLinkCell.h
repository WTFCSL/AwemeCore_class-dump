//
//     Generated by private class-dump
//

@class UIImageView, IESServiceProvider, UIView, UILabel;

@interface AWEDetailLinkCell : UICollectionViewCell {
    UIView *_linkContainerView;
    UIImageView *_iconImageView;
    UILabel *_linkLabel;
    IESServiceProvider *_provider;
    id _model;
}

@property (retain, nonatomic) IESServiceProvider *provider;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) UIView *linkContainerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *linkLabel;

- (void)setLinkLabel:(id)arg0;
- (void)configWithModel:(id)arg0 serviceProvider:(id)arg1;
- (void)p_addSubviews;
- (void)p_CMCEventRouteWithModel:(id)arg0;
- (void)clickedLinkView:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setProvider:(id)arg0;
- (id)provider;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)linkLabel;
- (id)linkContainerView;
- (void)setLinkContainerView:(id)arg0;

@end
