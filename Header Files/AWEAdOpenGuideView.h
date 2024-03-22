//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, UIView, AWEButton, UIImageView, UIButton, UIVisualEffectView, UILabel;

@interface AWEAdOpenGuideView : UIView <BDATMAutoTrackerViewProtocol, AWEAdOpenGuideView> {
    BOOL _isShowBottomAdBarNewStyle;
    UIImageView *_avatarImageView;
    UILabel *_contentLabel;
    NSString *_enterFrom;
    AWEAwemeModel *_model;
    UILabel *_nameLabel;
    AWEButton *_openButton;
    NSString *_referString;
    UILabel *_describeLabel;
    UIButton *_closeButton;
    UIVisualEffectView *_effectView;
    UIView *_accessibilityBackgroundView;
}

@property (nonatomic) BOOL isShowBottomAdBarNewStyle;
@property (retain, nonatomic) UILabel *describeLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *accessibilityBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEButton *openButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *contentLabel;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (void)openClickAutoTracker;
- (void)openShowAutoTracker;
- (void)openLearnMoreBtnClicked:(id)arg0;
- (void)closeBtnClicked:(id)arg0;
- (BOOL)isFromSearchResult;
- (void)updateNameAndAvatar:(id)arg0;
- (BOOL)isShowBottomAdBarNewStyle;
- (id)describeLabel;
- (id)accessibilityBackgroundView;
- (void)updateBottomAdBarWithNewStyle;
- (void)addDynamicBlurEffect:(unsigned long long)arg0;
- (void)bottomBarClick:(id)arg0;
- (id)defaultLabelText;
- (void)setIsShowBottomAdBarNewStyle:(BOOL)arg0;
- (void)setDescribeLabel:(id)arg0;
- (void)setAccessibilityBackgroundView:(id)arg0;
- (void)setModel:(id)arg0;
- (id)effectView;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setEffectView:(id)arg0;
- (id)nameLabel;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg0;
- (long long)indexOfAccessibilityElement:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)openButton;
- (void)setOpenButton:(id)arg0;

@end
