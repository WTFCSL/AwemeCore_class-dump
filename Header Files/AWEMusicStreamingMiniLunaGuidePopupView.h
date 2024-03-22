//
//     Generated by private class-dump
//

@class UIImageView, AWEMusicDSPEventModel, UILabel, UIView, UIButton;
@protocol AWESettingSwitchProtocol;

@interface AWEMusicStreamingMiniLunaGuidePopupView : AWEMusicStreamingBasePopupView {
    AWEMusicDSPEventModel *_eventModel;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView<AWESettingSwitchProtocol> *_activeTipsSwitch;
    UILabel *_hintLabel;
    UIButton *_linkBtn;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *activeTipsSwitch;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIButton *linkBtn;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)showInView:(id)arg0 duration:(double)arg1;
- (id)eventModel;
- (void)setEventModel:(id)arg0;
- (id)initWithEventModel:(id)arg0;
- (id)activeTipsSwitch;
- (void)switchControlDidChanged:(id)arg0;
- (void)setActiveTipsSwitch:(id)arg0;
- (id)customConfirmButton;
- (void)p_trackClickWithClickArea:(id)arg0;
- (id)linkBtn;
- (void)p_trackShowDiversion;
- (void)guideLinkJump;
- (void)setLinkBtn:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupSubviews;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;

@end