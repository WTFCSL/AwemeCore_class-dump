//
//     Generated by private class-dump
//

@class UIView, AWELongPressDoubleAvatarView, UIImageView, UIButton, BDImageView, YYLabel, AWELongPressPanelBaseViewModel, UILabel;
@protocol AWELongPressInteractiveShareCellDelegate;

@interface AWELongPressInteractiveShareCell : UICollectionViewCell {
    id<AWELongPressInteractiveShareCellDelegate> _delegate;
    AWELongPressPanelBaseViewModel *_InteractiveViewModel;
    UIImageView *_avatarImageView;
    id /* block */ _trackShowConsecutiveChatBlock;
    UIView *_iconBackView;
    AWELongPressDoubleAvatarView *_doubleAvatarView;
    UIImageView *_activeDot;
    UIImageView *_activeDotContainer;
    BDImageView *_webPImageV;
    UIImageView *_iconImageV;
    UIView *_airplaneBackView;
    UIImageView *_airplaneImageV;
    UIView *_userActiveBackView;
    UIView *_userActiveView;
    UILabel *_titleLable;
    UILabel *_userActiveLable;
    YYLabel *_subtitleLabel;
    UIButton *_shareTextButton;
    UIImageView *_hasShareDotCheckMark;
    UIImageView *_hasShareDotCheckMarkBackView;
    unsigned long long _uiStyle;
}

@property (retain, nonatomic) UIView *iconBackView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AWELongPressDoubleAvatarView *doubleAvatarView;
@property (retain, nonatomic) UIImageView *activeDot;
@property (retain, nonatomic) UIImageView *activeDotContainer;
@property (retain, nonatomic) BDImageView *webPImageV;
@property (retain, nonatomic) UIImageView *iconImageV;
@property (retain, nonatomic) UIView *airplaneBackView;
@property (retain, nonatomic) UIImageView *airplaneImageV;
@property (retain, nonatomic) UIView *userActiveBackView;
@property (retain, nonatomic) UIView *userActiveView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UILabel *userActiveLable;
@property (retain, nonatomic) YYLabel *subtitleLabel;
@property (retain, nonatomic) UIButton *shareTextButton;
@property (retain, nonatomic) UIImageView *hasShareDotCheckMark;
@property (retain, nonatomic) UIImageView *hasShareDotCheckMarkBackView;
@property (nonatomic) unsigned long long uiStyle;
@property (weak, nonatomic) id<AWELongPressInteractiveShareCellDelegate> delegate;
@property (retain, nonatomic) AWELongPressPanelBaseViewModel *InteractiveViewModel;
@property (copy, nonatomic) id /* block */ trackShowConsecutiveChatBlock;

- (id)titleLable;
- (void)setTitleLable:(id)arg0;
- (void)setTrackShowConsecutiveChatBlock:(id /* block */)arg0;
- (id /* block */)trackShowConsecutiveChatBlock;
- (id)iconImageV;
- (void)setIconImageV:(id)arg0;
- (id)doubleAvatarView;
- (void)setActiveDot:(id)arg0;
- (id)activeDot;
- (void)setActiveDotContainer:(id)arg0;
- (id)activeDotContainer;
- (void)setHasShareDotCheckMark:(id)arg0;
- (id)hasShareDotCheckMark;
- (BOOL)enableSharePanelShowSingleConsecutiveChat;
- (BOOL)enableSharePanelShowGroupConsecutiveChat;
- (void)setInteractiveViewModel:(id)arg0;
- (id)InteractiveViewModel;
- (id)iconBackView;
- (void)setIconBackView:(id)arg0;
- (void)setDoubleAvatarView:(id)arg0;
- (void)setAirplaneBackView:(id)arg0;
- (void)setAirplaneImageV:(id)arg0;
- (void)setUserActiveBackView:(id)arg0;
- (id)userActiveBackView;
- (void)setUserActiveView:(id)arg0;
- (BOOL)enableSharePanelShowRecentlyChat;
- (void)setUserActiveLable:(id)arg0;
- (void)setHasShareDotCheckMarkBackView:(id)arg0;
- (void)setShareTextButton:(id)arg0;
- (id)shareTextButton;
- (void)p_addLongPressGesForAvatar;
- (id)userActiveLable;
- (id)airplaneBackView;
- (id)hasShareDotCheckMarkBackView;
- (id)airplaneImageV;
- (void)updateCommontUI;
- (void)addWebPToView:(id)arg0;
- (void)updateFlowUI;
- (id)webPImageV;
- (void)p_longPressGesHandler:(id)arg0;
- (void)shareDailyImageDynamic;
- (void)setWebPImageV:(id)arg0;
- (id)userActiveView;
- (void)setSubtitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)subtitleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setUiStyle:(unsigned long long)arg0;
- (unsigned long long)uiStyle;
- (void)setDelegate:(id)arg0;
- (void)setHighlighted:(BOOL)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)updateUI;
- (void)setUpUI;

@end