//
//     Generated by private class-dump
//

@class UIView, UIFont, IESECShopMomentsVideoModel, NSString, UIImageView, IESECPriceLabel, IESECGoodsPriceLabel, YYLabel, UILabel;
@protocol IESECShopMomentsVideoCardDelegate, IESECAwemeVideoViewProtocol;

@interface IESECShopMomentsVideoCard : UICollectionViewCell <IESECShopMomentsVideoCardProtocol> {
    BOOL _videoLandscapeMode;
    UIView<IESECAwemeVideoViewProtocol> *_playerView;
    id<IESECShopMomentsVideoCardDelegate> _delegate;
    id /* block */ _titleAction;
    UIView *_productContainerView;
    UIFont *_titleLabelFont;
    unsigned long long _titleLabelCollapsedLines;
    unsigned long long _titleLabelExpandedLines;
    double _videoPlayerHeight;
    IESECShopMomentsVideoModel *_cellModel;
    UILabel *_dateLabel;
    YYLabel *_titleLabel;
    UIView *_playerContainerView;
    UIImageView *_videoCoverImageView;
    UIImageView *_playMuteImageView;
    UIImageView *_productCoverImageView;
    IESECGoodsPriceLabel *_productPriceLabel;
    UILabel *_productTitleLabel;
    UILabel *_productTipLabel;
    IESECPriceLabel *_priceLabel;
}

@property (retain, nonatomic) IESECShopMomentsVideoModel *cellModel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) UIImageView *videoCoverImageView;
@property (retain, nonatomic) UIImageView *playMuteImageView;
@property (retain, nonatomic) UIView *productContainerView;
@property (retain, nonatomic) UIImageView *productCoverImageView;
@property (retain, nonatomic) IESECGoodsPriceLabel *productPriceLabel;
@property (retain, nonatomic) UILabel *productTitleLabel;
@property (retain, nonatomic) UILabel *productTipLabel;
@property (retain, nonatomic) IESECPriceLabel *priceLabel;
@property (weak, nonatomic) id<IESECShopMomentsVideoCardDelegate> delegate;
@property (copy, nonatomic) id /* block */ titleAction;
@property (retain, nonatomic) UIFont *titleLabelFont;
@property (nonatomic) BOOL titleLabelExpanded;
@property (nonatomic) unsigned long long titleLabelCollapsedLines;
@property (nonatomic) unsigned long long titleLabelExpandedLines;
@property (nonatomic) BOOL videoLandscapeMode;
@property (nonatomic) double videoPlayerHeight;
@property (weak, nonatomic) UIView<IESECAwemeVideoViewProtocol> *playerView;
@property (nonatomic) BOOL videoMute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleAttributedString:(id)arg0 withFont:(id)arg1;

- (void)setCellModel:(id)arg0;
- (void)setVideoMute:(BOOL)arg0;
- (BOOL)videoMute;
- (id)videoCoverImageView;
- (void)setVideoCoverImageView:(id)arg0;
- (double)videoPlayerHeight;
- (void)setVideoPlayerHeight:(double)arg0;
- (void)didTapVideoView;
- (id /* block */)titleAction;
- (id)productTitleLabel;
- (void)setProductTitleLabel:(id)arg0;
- (unsigned long long)titleLabelCollapsedLines;
- (id)playMuteImageView;
- (id)productContainerView;
- (id)productCoverImageView;
- (id)productPriceLabel;
- (id)productTipLabel;
- (void)updateSubviewsStyle;
- (void)remakeConstraints;
- (id)p_titleAttributedString:(id)arg0 withFont:(id)arg1 textColor:(id)arg2;
- (BOOL)titleLabelExpanded;
- (id)p_titleLabelTruncationWithFont:(id)arg0 textColor:(id)arg1 expand:(BOOL)arg2;
- (unsigned long long)titleLabelExpandedLines;
- (void)didChangeVideoMute:(BOOL)arg0;
- (BOOL)videoLandscapeMode;
- (void)didTapTitleCollapseLabel;
- (void)didTapTitleExpandLabel;
- (id)p_titleLabelTruncationWithFont:(id)arg0 textColor:(id)arg1;
- (void)didTapTitleLabel;
- (void)didTapPlayMuteView;
- (void)didTapProdudctView;
- (void)playerDidRecycle;
- (void)setTitleLabelExpanded:(BOOL)arg0;
- (void)setVideoLandscapeMode:(BOOL)arg0;
- (void)setTitleAction:(id /* block */)arg0;
- (void)setProductContainerView:(id)arg0;
- (void)setTitleLabelCollapsedLines:(unsigned long long)arg0;
- (void)setTitleLabelExpandedLines:(unsigned long long)arg0;
- (void)setPlayMuteImageView:(id)arg0;
- (void)setProductCoverImageView:(id)arg0;
- (void)setProductPriceLabel:(id)arg0;
- (void)setProductTipLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)prepareForReuse;
- (id)playerView;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setPlayerView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)titleLabelFont;
- (id)dateLabel;
- (void)setTitleLabelFont:(id)arg0;
- (void)setupViews;
- (void)setDateLabel:(id)arg0;
- (id)cellModel;
- (void)updateWithModel:(id)arg0;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;
- (id)playerContainerView;
- (void)setPlayerContainerView:(id)arg0;

@end