//
//     Generated by private class-dump
//

@class UIView, HTSLiveGroupPhotoJumpDetail, NSArray, UIImage, UIImageView, UIButton, UILabel, IESLiveGroupPhotoStore;
@protocol IESLiveRoomService, IESLiveURLSchemaHandler, CAAnimationDelegate;

@interface IESLiveGroupPhotoPanelView : UIView {
    UIImageView<CAAnimationDelegate> *_groupPhotoImageView;
    NSArray *_urlList;
    UIImageView *_qrCodeImageView;
    UILabel *_qrCodeTipsLabel;
    UIView *_userAvatarImageMaskView;
    UIView *_userAvatarIconMaskView;
    UIImageView *_userAvatarArrowView;
    UIImageView *_userAvatarIconView;
    UIImageView *_userAvatarImageView;
    UILabel *_shareToFriendsLabel;
    UIView *_shareGroupPhotoView;
    UIButton *_shareToIMButton;
    UILabel *_shareToIMLabel;
    UIButton *_shareToWeChatButton;
    UILabel *_shareToWeChatLabel;
    UIButton *_shareToQQButton;
    UILabel *_shareToQQLabel;
    UIButton *_saveToAlbumButton;
    UILabel *_saveToAlbumLabel;
    UIImage *_groupPhotoImage;
    UIButton *_closeButton;
    double _offset_top;
    id<IESLiveRoomService> _room;
    id<IESLiveURLSchemaHandler> _schemaHandler;
    IESLiveGroupPhotoStore *_store;
    HTSLiveGroupPhotoJumpDetail *_groupPhotoInfo;
}

@property (retain, nonatomic) NSArray *urlList;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (retain, nonatomic) UILabel *qrCodeTipsLabel;
@property (retain, nonatomic) UIView *userAvatarImageMaskView;
@property (retain, nonatomic) UIView *userAvatarIconMaskView;
@property (retain, nonatomic) UIImageView *userAvatarArrowView;
@property (retain, nonatomic) UIImageView *userAvatarIconView;
@property (retain, nonatomic) UIImageView *userAvatarImageView;
@property (retain, nonatomic) UILabel *shareToFriendsLabel;
@property (retain, nonatomic) UIView *shareGroupPhotoView;
@property (retain, nonatomic) UIButton *shareToIMButton;
@property (retain, nonatomic) UILabel *shareToIMLabel;
@property (retain, nonatomic) UIButton *shareToWeChatButton;
@property (retain, nonatomic) UILabel *shareToWeChatLabel;
@property (retain, nonatomic) UIButton *shareToQQButton;
@property (retain, nonatomic) UILabel *shareToQQLabel;
@property (retain, nonatomic) UIButton *saveToAlbumButton;
@property (retain, nonatomic) UILabel *saveToAlbumLabel;
@property (retain, nonatomic) UIImage *groupPhotoImage;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) double offset_top;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) IESLiveGroupPhotoStore *store;
@property (retain, nonatomic) HTSLiveGroupPhotoJumpDetail *groupPhotoInfo;
@property (retain, nonatomic) UIImageView<CAAnimationDelegate> *groupPhotoImageView;

- (id)urlList;
- (void)setUrlList:(id)arg0;
- (void)setupView:(id)arg0;
- (void)showWithAnimation;
- (id)userAvatarImageView;
- (void)setUserAvatarImageView:(id)arg0;
- (id)schemaHandler;
- (void)setSchemaHandler:(id)arg0;
- (id)groupPhotoInfo;
- (void)setGroupPhotoInfo:(id)arg0;
- (void)loadGroupPhoto;
- (id)groupPhotoImageView;
- (void)setOffset_top:(double)arg0;
- (double)offset_top;
- (id)userAvatarImageMaskView;
- (id)userAvatarArrowView;
- (id)userAvatarIconView;
- (id)userAvatarIconMaskView;
- (id)shareToFriendsLabel;
- (id)shareGroupPhotoView;
- (id)shareToIMButton;
- (id)shareToIMLabel;
- (id)shareToWeChatButton;
- (id)shareToWeChatLabel;
- (id)shareToQQButton;
- (id)shareToQQLabel;
- (id)saveToAlbumButton;
- (id)saveToAlbumLabel;
- (id)alphaAnimation;
- (id)groupPhotoImageForSave;
- (void)setGroupPhotoImage:(id)arg0;
- (id)groupPhotoImage;
- (void)closeGroupPhotoView;
- (void)saveGroupPhotoToAlbum;
- (void)handleShareToIM;
- (void)handleShareToWeChat;
- (void)handleShareToQQ;
- (void)saveGroupPhotoToAlbumDirectly;
- (id)qrCodeTipsLabel;
- (void)setGroupPhotoImageView:(id)arg0;
- (void)setQrCodeTipsLabel:(id)arg0;
- (void)setUserAvatarImageMaskView:(id)arg0;
- (void)setUserAvatarIconMaskView:(id)arg0;
- (void)setUserAvatarArrowView:(id)arg0;
- (void)setUserAvatarIconView:(id)arg0;
- (void)setShareToFriendsLabel:(id)arg0;
- (void)setShareGroupPhotoView:(id)arg0;
- (void)setShareToIMButton:(id)arg0;
- (void)setShareToIMLabel:(id)arg0;
- (void)setShareToWeChatButton:(id)arg0;
- (void)setShareToWeChatLabel:(id)arg0;
- (void)setShareToQQButton:(id)arg0;
- (void)setShareToQQLabel:(id)arg0;
- (void)setSaveToAlbumButton:(id)arg0;
- (void)setSaveToAlbumLabel:(id)arg0;
- (id)initWithStore:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)qrCodeImageView;
- (void)setQrCodeImageView:(id)arg0;
- (void)image:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(void *)arg2;

@end
