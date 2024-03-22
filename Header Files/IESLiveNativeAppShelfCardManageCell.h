//
//     Generated by private class-dump
//

@class UIView, ShelfCardInfo, IESLiveNativeAppShelfCellAnchorTitleLabel, IESLiveNativeAppShelfCellCommonEdgeView, IESLiveNativeAppShelfCellAnchorCouponInfoView, UIImageView, UIButton, NSString, UILabel, IESLiveNativeAppShelfCellAnchorCoverImageView;
@protocol IESLiveNativeAppShelfCardManageCellDelegate;

@interface IESLiveNativeAppShelfCardManageCell : UITableViewCell <UIGestureRecognizerDelegate> {
    BOOL _hasCommodity;
    id<IESLiveNativeAppShelfCardManageCellDelegate> _delegate;
    ShelfCardInfo *_cardInfo;
    unsigned long long _index;
    IESLiveNativeAppShelfCellCommonEdgeView *_edgeView;
    IESLiveNativeAppShelfCellAnchorTitleLabel *_titleLabel;
    UIImageView *_selectedImageView;
    UIView *_reviewingView;
    UILabel *_reviewingLabel;
    UIView *_reviewRejectView;
    UILabel *_reviewRejectLabel;
    UIImageView *_reviewRejectImageView;
    UIButton *_cardEditButton;
    UIButton *_dragButton;
    IESLiveNativeAppShelfCellAnchorCoverImageView *_coverImageView;
    IESLiveNativeAppShelfCellAnchorCouponInfoView *_couponInfoView;
}

@property (retain, nonatomic) ShelfCardInfo *cardInfo;
@property (nonatomic) unsigned long long index;
@property (weak, nonatomic) IESLiveNativeAppShelfCellCommonEdgeView *edgeView;
@property (weak, nonatomic) IESLiveNativeAppShelfCellAnchorTitleLabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIView *reviewingView;
@property (retain, nonatomic) UILabel *reviewingLabel;
@property (retain, nonatomic) UIView *reviewRejectView;
@property (retain, nonatomic) UILabel *reviewRejectLabel;
@property (retain, nonatomic) UIImageView *reviewRejectImageView;
@property (retain, nonatomic) UIButton *cardEditButton;
@property (retain, nonatomic) UIButton *dragButton;
@property (weak, nonatomic) IESLiveNativeAppShelfCellAnchorCoverImageView *coverImageView;
@property (weak, nonatomic) IESLiveNativeAppShelfCellAnchorCouponInfoView *couponInfoView;
@property (weak, nonatomic) id<IESLiveNativeAppShelfCardManageCellDelegate> delegate;
@property (nonatomic) BOOL hasCommodity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)edgeView;
- (void)setEdgeView:(id)arg0;
- (id)couponInfoView;
- (void)setCouponInfoView:(id)arg0;
- (BOOL)hasCommodity;
- (void)setHasCommodity:(BOOL)arg0;
- (id)reviewingView;
- (id)reviewingLabel;
- (id)reviewRejectView;
- (id)reviewRejectLabel;
- (id)reviewRejectImageView;
- (void)updateWithCardInfo:(id)arg0 index:(unsigned long long)arg1;
- (void)reviewRejectViewDidClick:(id)arg0;
- (void)setReviewingView:(id)arg0;
- (void)setReviewingLabel:(id)arg0;
- (void)setReviewRejectView:(id)arg0;
- (void)setReviewRejectLabel:(id)arg0;
- (void)setReviewRejectImageView:(id)arg0;
- (void)imageOrTitleDidClick:(id)arg0;
- (id)cardEditButton;
- (id)dragButton;
- (void)updateReviewStatus;
- (void)cardEditButtonDidClick:(id)arg0;
- (void)switchEditStatus:(BOOL)arg0;
- (void)setIsCardSelected:(BOOL)arg0;
- (void)setCardEditButton:(id)arg0;
- (void)setDragButton:(id)arg0;
- (void)setIndex:(unsigned long long)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (unsigned long long)index;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setUpUI;
- (id)cardInfo;
- (void)setCardInfo:(id)arg0;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg0;

@end