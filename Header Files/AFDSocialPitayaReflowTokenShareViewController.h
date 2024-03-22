//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, NSString, UIImageView, AWEAnimatedButton, AFDSocialPitayaReflowTokenShareConfig, UIButton, UILabel;

@interface AFDSocialPitayaReflowTokenShareViewController : UIViewController <UIGestureRecognizerDelegate> {
    AWEAwemeModel *_model;
    long long _previousType;
    AFDSocialPitayaReflowTokenShareConfig *_config;
    id /* block */ _dismissBlock;
    long long _shareType;
    UIView *_maskView;
    UIView *_contentView;
    UIButton *_closeButton;
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    AWEAnimatedButton *_wechatButton;
    AWEAnimatedButton *_qqButton;
    AWEAnimatedButton *_linkButton;
    UIButton *_infoButton;
}

@property (nonatomic) long long shareType;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEAnimatedButton *wechatButton;
@property (retain, nonatomic) AWEAnimatedButton *qqButton;
@property (retain, nonatomic) AWEAnimatedButton *linkButton;
@property (retain, nonatomic) UIButton *infoButton;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long previousType;
@property (retain, nonatomic) AFDSocialPitayaReflowTokenShareConfig *config;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)maskViewTapped:(id)arg0;
- (void)trackSocialPitayaPublishTokenShareWithAction:(id)arg0;
- (id)wechatButton;
- (id)qqButton;
- (void)openTencentApp;
- (void)trackWithPlatform:(id)arg0;
- (void)fetchTokenAndTrans:(BOOL)arg0 transCompletion:(id /* block */)arg1;
- (void)wechatButtonTapped:(id)arg0;
- (void)qqButtonTapped:(id)arg0;
- (void)setWechatButton:(id)arg0;
- (void)setQqButton:(id)arg0;
- (void)setSubtitleLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)dismiss;
- (void)setConfig:(id)arg0;
- (long long)previousType;
- (void)setPreviousType:(long long)arg0;
- (void).cxx_destruct;
- (void)updateContents;
- (id)model;
- (id)config;
- (id)titleLabel;
- (id)maskView;
- (id)subtitleLabel;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)contentView;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)infoButton;
- (id)linkButton;
- (void)setupUI;
- (void)closeButtonTapped:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)infoButtonTapped:(id)arg0;
- (void)setInfoButton:(id)arg0;
- (void)setShareType:(long long)arg0;
- (long long)shareType;
- (void)setLinkButton:(id)arg0;
- (id)shareButton;
- (void)linkButtonTapped:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end