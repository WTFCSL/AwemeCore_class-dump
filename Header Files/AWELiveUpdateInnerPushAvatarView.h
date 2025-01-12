//
//     Generated by private class-dump
//

@class AWEButton, AWELiveInnerPushContentModel, UIView;
@protocol AWELiveUserAvatarPreviewProtocol, AWEFeedLiveMarkViewProtocol;

@interface AWELiveUpdateInnerPushAvatarView : UIView {
    UIView<AWEFeedLiveMarkViewProtocol> *_liveMarkView;
    AWEButton *_avatarButton;
    id<AWELiveUserAvatarPreviewProtocol> _avatarPreview;
    AWELiveInnerPushContentModel *_livePushModel;
}

@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) AWEButton *avatarButton;
@property (retain, nonatomic) id<AWELiveUserAvatarPreviewProtocol> avatarPreview;
@property (retain, nonatomic) AWELiveInnerPushContentModel *livePushModel;

+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;

- (void)startPlay;
- (void)stopPlay;
- (id)liveMarkView;
- (void)setLiveMarkView:(id)arg0;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (void)setLivePushModel:(id)arg0;
- (id)livePushModel;
- (BOOL)enablePreview;
- (long long)p_generateCustomConfigFromPushModel;
- (id)avatarPreview;
- (void)setAvatarPreview:(id)arg0;
- (void)addLivePlayerPreview;
- (void)updatePushViewWithLivePush:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUpViews;
- (id)avatarButton;
- (void)setAvatarButton:(id)arg0;

@end
