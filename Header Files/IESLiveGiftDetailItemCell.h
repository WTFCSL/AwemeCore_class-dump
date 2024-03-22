//
//     Generated by private class-dump
//

@class NSString, UIImageView, IESLiveGiftPanelDataSharing, UILabel, UIView;

@interface IESLiveGiftDetailItemCell : UICollectionViewCell {
    NSString *_clickURLString;
    IESLiveGiftPanelDataSharing *_giftPanelDataSharing;
    UIView *_containerView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *clickURLString;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;

- (void)didClick;
- (void)didSetAttachingDIContext;
- (id)clickURLString;
- (void)setClickURLString:(id)arg0;
- (id)giftPanelDataSharing;
- (void)setGiftPanelDataSharing:(id)arg0;
- (void)trackWhenPropDetailEntranceShow:(id)arg0;
- (void)trackWhenPropDetailEntranceClicked:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (void)setImageView:(id)arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;

@end