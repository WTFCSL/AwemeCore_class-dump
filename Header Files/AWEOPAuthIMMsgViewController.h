//
//     Generated by private class-dump
//

@class AWEUILoadingView, NSString, UIImageView, NSDictionary, UIView, UILabel, UIButton;

@interface AWEOPAuthIMMsgViewController : UIViewController {
    NSString *_clientKey;
    NSString *_openID;
    NSString *_enterFrom;
    NSDictionary *_attribution;
    NSDictionary *_dataDict;
    NSDictionary *_trackInfoDict;
    id /* block */ _completeBlock;
    UIView *_containerView;
    UIButton *_closeButton;
    UIImageView *_avatarImageView;
    UIImageView *_avatarIconImageView;
    UILabel *_nameLabel;
    UILabel *_titleLabel;
    UIImageView *_clientIconImageView;
    UIButton *_descButton;
    UIButton *_okButton;
    UIButton *_rejectButton;
    AWEUILoadingView *_loadingView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *avatarIconImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *clientIconImageView;
@property (retain, nonatomic) UIButton *descButton;
@property (retain, nonatomic) UIButton *okButton;
@property (retain, nonatomic) UIButton *rejectButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *openID;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *attribution;
@property (retain, nonatomic) NSDictionary *dataDict;
@property (retain, nonatomic) NSDictionary *trackInfoDict;
@property (copy, nonatomic) id /* block */ completeBlock;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)descButton;
- (void)setDescButton:(id)arg0;
- (void)setDataDict:(id)arg0;
- (id)dataDict;
- (id)trackInfoDict;
- (void)setTrackInfoDict:(id)arg0;
- (void)setCompleteBlock:(id /* block */)arg0;
- (id /* block */)completeBlock;
- (id)openID;
- (void)setOpenID:(id)arg0;
- (id)commonTrackInfo;
- (double)maxContentWidth;
- (void)onClickCloseButton:(id)arg0;
- (void)refreshUIWithDataDict:(id)arg0;
- (void)trackShowPannel;
- (id)avatarIconImageView;
- (void)updateDescWithIconUrl:(id)arg0 clientName:(id)arg1 otherText:(id)arg2;
- (void)trackClickType:(long long)arg0;
- (void)willDismissWithType:(long long)arg0;
- (void)requestWhenClickWithType:(long long)arg0 customSuccBlock:(id /* block */)arg1;
- (id)clientIconImageView;
- (void)showOrHideLoading:(BOOL)arg0;
- (void)onClickRejectButton;
- (void)onClickOKButton:(id)arg0;
- (void)dismissFromJSB;
- (void)setAvatarIconImageView:(id)arg0;
- (void)setClientIconImageView:(id)arg0;
- (id)clientKey;
- (void)dismiss;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)okButton;
- (void)setOkButton:(id)arg0;
- (id)containerView;
- (id)nameLabel;
- (void)setClientKey:(id)arg0;
- (id)attribution;
- (void)setAttribution:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)rejectButton;
- (void)setRejectButton:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
