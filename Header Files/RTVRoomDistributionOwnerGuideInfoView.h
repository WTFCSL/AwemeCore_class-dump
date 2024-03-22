//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;
@protocol RTVVoipResourceFetcherInterface, RxInjector, RTVUserProfileManagerInterface;

@interface RTVRoomDistributionOwnerGuideInfoView : UIImageView {
    id<RxInjector> _injector;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RTVVoipResourceFetcherInterface> _resourceFetcher;
    UIImageView *_avatarImageView;
    UIView *_iconContainerView;
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_watchTogetherLabel;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, nonatomic) UIImageView *avatarImageView;
@property (readonly, nonatomic) UIView *iconContainerView;
@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (readonly, nonatomic) UILabel *watchTogetherLabel;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (id)resourceFetcher;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (id)watchTogetherLabel;
- (void).cxx_destruct;
- (id)injector;
- (id)nameLabel;
- (id)iconImageView;
- (id)avatarImageView;
- (id)profileManager;
- (id)iconContainerView;

@end