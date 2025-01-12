//
//     Generated by private class-dump
//

@class UIView, NSString, AWEPOICollectObject, AWEPOIDetailStore, AWEGradientView, UIImageView, AWEPOIDetailResponse, UIButton, UILabel;
@protocol AWEPOIDetailInfoSimilarPOIShareDelegate;

@interface AWEPOIDetailInfoSimilarPOIShareViewModel : AWEPOIDetailInfoBaseViewModel {
    id<AWEPOIDetailInfoSimilarPOIShareDelegate> _delegate;
    AWEPOIDetailResponse *_poiDetail;
    AWEPOIDetailStore *_store;
    NSString *_poiID;
    AWEPOICollectObject *_collectObject;
    UIImageView *_closeImageView;
    UIView *_containerView;
    AWEGradientView *_topBannerView;
    UILabel *_topBannerTitleLabel;
    UIImageView *_topBannerTitleArrowView;
    UIImageView *_atmosBGView;
    UIButton *_shareButton;
    UIView *_avatarViews;
}

@property (retain, nonatomic) AWEPOIDetailResponse *poiDetail;
@property (retain, nonatomic) AWEPOIDetailStore *store;
@property (copy, nonatomic) NSString *poiID;
@property (retain, nonatomic) AWEPOICollectObject *collectObject;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEGradientView *topBannerView;
@property (retain, nonatomic) UILabel *topBannerTitleLabel;
@property (retain, nonatomic) UIImageView *topBannerTitleArrowView;
@property (retain, nonatomic) UIImageView *atmosBGView;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIView *avatarViews;
@property (weak, nonatomic) id<AWEPOIDetailInfoSimilarPOIShareDelegate> delegate;

+ (double)preferredHeightForDataModel:(id)arg0 width:(double)arg1 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg3 cellIdentifier:(id)arg4;

- (void)setupViewModel;
- (id)poiID;
- (void)setPoiID:(id)arg0;
- (id)poiDetail;
- (void)setPoiDetail:(id)arg0;
- (void)setTopBannerView:(id)arg0;
- (void)p_createSubviewsIfNeed;
- (void)p_refreshDataWithCompletion;
- (id)topBannerTitleLabel;
- (void)p_didTapOnCollect;
- (void)setTopBannerTitleLabel:(id)arg0;
- (id)topBannerTitleArrowView;
- (void)setTopBannerTitleArrowView:(id)arg0;
- (void)p_setCollectCount:(long long)arg0;
- (id)collectObject;
- (void)setCollectObject:(id)arg0;
- (id)topBannerTextFromCollectConfig;
- (void)didTapToClose;
- (id)atmosBGView;
- (void)setAtmosBGView:(id)arg0;
- (void)onTapShareAction;
- (void).cxx_destruct;
- (id)store;
- (void)setContainerView:(id)arg0;
- (void)setStore:(id)arg0;
- (id)delegate;
- (id)containerView;
- (id)topBannerView;
- (void)setDelegate:(id)arg0;
- (void)layoutAvatars;
- (id)avatarViews;
- (void)setAvatarViews:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (id)shareButton;
- (void)setShareButton:(id)arg0;
- (id)closeImageView;
- (void)setCloseImageView:(id)arg0;

@end
