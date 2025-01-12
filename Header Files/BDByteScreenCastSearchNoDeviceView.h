//
//     Generated by private class-dump
//

@class UIView, BDByteScreenCastSearchNoDeviceModel, BDByteScreenCastBannerPageControl, NSString, BDSCResearchCardView, NSMutableArray, UILabel, UIScrollView;

@interface BDByteScreenCastSearchNoDeviceView : UIView <UIScrollViewDelegate, BDSCSearchDeviceNoDeviceViewProtocol> {
    BOOL _didUseResearchCard;
    BDByteScreenCastSearchNoDeviceModel *_model;
    id /* block */ _airPlayBlock;
    UILabel *_bannerHeaderLabel;
    UIScrollView *_bannerContainer;
    BDByteScreenCastBannerPageControl *_pageControl;
    UILabel *_tipsHeaderLabel;
    UIView *_tipsView;
    NSMutableArray *_tipsSubViewArray;
    BDSCResearchCardView *_researchCardView;
}

@property (retain, nonatomic) UILabel *bannerHeaderLabel;
@property (retain, nonatomic) UIScrollView *bannerContainer;
@property (retain, nonatomic) BDByteScreenCastBannerPageControl *pageControl;
@property (retain, nonatomic) UILabel *tipsHeaderLabel;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) NSMutableArray *tipsSubViewArray;
@property (retain, nonatomic) BDSCResearchCardView *researchCardView;
@property (nonatomic) BOOL didUseResearchCard;
@property (retain, nonatomic) BDByteScreenCastSearchNoDeviceModel *model;
@property (copy, nonatomic) id /* block */ airPlayBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isLandscape;

- (id)tipsView;
- (void)setTipsView:(id)arg0;
- (void)refreshSubviews;
- (void)setAirPlayBlock:(id /* block */)arg0;
- (id)bannerHeaderLabel;
- (id)bannerContainer;
- (id)tipsHeaderLabel;
- (BOOL)didUseResearchCard;
- (void)updateSubviewsStatus;
- (void)configBannerSubviews;
- (void)configResearchCardView;
- (id)researchCardView;
- (void)configTipsSubviews;
- (BOOL)useLandscapeUI;
- (id)tipsSubViewArray;
- (void)updateForTipView:(id)arg0;
- (void)jumpToNetSetting;
- (id /* block */)airPlayBlock;
- (void)setDidUseResearchCard:(BOOL)arg0;
- (void)setResearchCardView:(id)arg0;
- (void)adjustScrollViewContentOffset;
- (void)handleBannerSingleTapped:(id)arg0;
- (void)setBannerHeaderLabel:(id)arg0;
- (void)setBannerContainer:(id)arg0;
- (void)setTipsHeaderLabel:(id)arg0;
- (void)setTipsSubViewArray:(id)arg0;
- (void)setModel:(id)arg0;
- (void)removeFromSuperview;
- (void).cxx_destruct;
- (void)setPageControl:(id)arg0;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)model;
- (void)setIsLandscape:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (BOOL)isLandscape;
- (void)layoutSubviews;
- (id)pageControl;

@end
