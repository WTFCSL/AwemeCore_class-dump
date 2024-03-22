//
//     Generated by private class-dump
//

@class NSString, iconTextView, UIImageView, AWEPLVCardCornerIconView, AWEGradientView, UILabel, AWEPadPolymericChannelCoverFavoriteTagView;

@interface AWEPLVTitleBottomCard : UICollectionViewCell <DUXGridBreakPointResponder, AWEPadCollectionReusableViewLayoutProtocol> {
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    AWEPadPolymericChannelCoverFavoriteTagView *_favoritTagView;
    UIImageView *_avatarImage;
    AWEGradientView *_topGradientView;
    AWEGradientView *_bottomGradientView;
    UILabel *_cardTypeTagLabel;
    UILabel *_bottomRightLabel;
    iconTextView *_bottomLeftTag;
    UIImageView *_coverImageView;
    AWEPLVCardCornerIconView *_cornerIcon;
    double _cardHeightPercent;
    unsigned long long _cardType;
}

@property (retain, nonatomic) UIImageView *avatarImage;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UILabel *cardTypeTagLabel;
@property (retain, nonatomic) UILabel *bottomRightLabel;
@property (retain, nonatomic) iconTextView *bottomLeftTag;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEPLVCardCornerIconView *cornerIcon;
@property (nonatomic) double cardHeightPercent;
@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEPadPolymericChannelCoverFavoriteTagView *favoritTagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })arg0 toBreakPoint:(struct { long long x0; long long x1; })arg1;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setSubTitleFontSize:(long long)arg0;
- (id)bottomRightLabel;
- (void)setBottomRightLabel:(id)arg0;
- (void)updateCoverImageWithUrlArray:(id)arg0;
- (double)cardHeightPercent;
- (void)updateTitle:(id)arg0 subTitle:(id)arg1;
- (void)updateCardCoverHeightPercent:(double)arg0;
- (void)updateBottomLeftTagWithImage:(id)arg0 text:(id)arg1;
- (void)updateAvatarImageWithUrlArray:(id)arg0;
- (id)favoritTagView;
- (void)updateBottomRightText:(id)arg0;
- (void)updateTopLeftLabel:(id)arg0;
- (void)configCardTitleStyle:(long long)arg0;
- (void)setCardHeightPercent:(double)arg0;
- (void)updateCornerIcon:(unsigned long long)arg0;
- (void)updateCardType:(unsigned long long)arg0;
- (void)updateViewWithBreakPoint:(struct { long long x0; long long x1; })arg0;
- (id)cornerIcon;
- (void)setCornerIcon:(id)arg0;
- (id)bottomLeftTag;
- (id)cardTypeTagLabel;
- (void)setFavoritTagView:(id)arg0;
- (void)setCardTypeTagLabel:(id)arg0;
- (void)setBottomLeftTag:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (void)setupView;
- (void)setAvatarImage:(id)arg0;
- (id)avatarImage;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg0;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg0;
- (void)setTitleFontSize:(long long)arg0;

@end
