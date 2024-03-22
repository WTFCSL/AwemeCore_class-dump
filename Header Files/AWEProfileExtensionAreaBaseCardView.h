//
//     Generated by private class-dump
//

@class AWEProfileExtensionAreaCardModel, NSString, UILabel, UIView, BDImageView;

@interface AWEProfileExtensionAreaBaseCardView : UIView <AWEProfileExtensionAreaCardViewProtocol, AWEProfileExtensionAreaCardViewInternalProtocol> {
    id /* block */ reloadTitleBlock;
    id /* block */ reloadSubTitleBlock;
    id /* block */ reloadCustomDetailViewBlock;
    BDImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_dotView;
    UIView *_customDetailView;
    AWEProfileExtensionAreaCardModel *_cardModel;
    UIView *_accessView;
    unsigned long long _cardStyle;
}

@property (retain, nonatomic) UIView *accessView;
@property (nonatomic) unsigned long long cardStyle;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIView *customDetailView;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ reloadTitleBlock;
@property (copy, nonatomic) id /* block */ reloadSubTitleBlock;
@property (copy, nonatomic) id /* block */ reloadCustomDetailViewBlock;

- (id)getImageView;
- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (unsigned long long)extensionAreaCardType;
- (void)updateTitleLabelWithText:(id)arg0;
- (void)updateSubTitleLabelWithText:(id)arg0;
- (void)updateImageViewWithLightUrlArray:(id)arg0 darkUrlArray:(id)arg1;
- (void)updateImageViewWithLightUrlArray:(id)arg0 darkUrlArray:(id)arg1 completion:(id /* block */)arg2;
- (void)updateDotViewState:(BOOL)arg0;
- (void)enableAnimateImage:(BOOL)arg0 infinityLoop:(BOOL)arg1;
- (void)updateAnimateImageWithLastFrame;
- (void)updateSubTitleLabelWithText:(id)arg0 subTitleColor:(id)arg1;
- (void)updateCustomDetailViewWithView:(id)arg0 width:(double)arg1;
- (void)configWithCardModel:(id)arg0;
- (BOOL)isRedDotShow;
- (id)customDetailView;
- (void)setCustomDetailView:(id)arg0;
- (void)setupAccessView;
- (void)handleLiveAppointment;
- (void)refreshAccessLabel;
- (id /* block */)reloadTitleBlock;
- (id /* block */)reloadSubTitleBlock;
- (id /* block */)reloadCustomDetailViewBlock;
- (void)setAccessView:(id)arg0;
- (id)accessView;
- (void)configCardStyle:(unsigned long long)arg0;
- (void)setReloadTitleBlock:(id /* block */)arg0;
- (void)setReloadSubTitleBlock:(id /* block */)arg0;
- (void)setReloadCustomDetailViewBlock:(id /* block */)arg0;
- (void)setSubtitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)dotView;
- (void)setDotView:(id)arg0;
- (unsigned long long)cardStyle;
- (void)setCardStyle:(unsigned long long)arg0;

@end