//
//     Generated by private class-dump
//

@class NSURL;
@protocol AWELeftSideBarIMEntranceConfigProtocol;

@protocol AWELeftSideBarIMEntranceViewModelProtocol <NSObject>

+ (id)new;

@property (readonly, nonatomic) int preUnreadCount;
@property (readonly, nonatomic) BOOL tabbarChangeEnabel;
@property (readonly, nonatomic) long long allIMUnreadCount;
@property (readonly, nonatomic) BOOL shouldShowIMBubble;
@property (readonly, nonatomic) BOOL leftSideBarIMEntranceShow;
@property (readonly, nonatomic) NSURL *intimacyChatAvatarURL;
@property (readonly, nonatomic) BOOL hasShowNewMessageText;
@property (nonatomic) BOOL isShowingNewMessageText;
@property (readonly, nonatomic) id<AWELeftSideBarIMEntranceConfigProtocol> config;

- (void)dispatch_feedContainerViewDidAppear;
- (void)dispatch_feedContainerViewDidDisappear;
- (void)jumpToIMListWithEnterTab:(unsigned long long)arg0 extModel:(id)arg1;
- (BOOL)enableAddBackground;
- (long long)allIMUnreadCount;
- (int)preUnreadCount;
- (BOOL)enableShowNewMessageText;
- (id)intimacyChatAvatarURL;
- (BOOL)isShowingNewMessageText;
- (void)setIsShowingNewMessageText:(BOOL)arg0;
- (void)didShowNewMessageText;
- (BOOL)leftSideBarIMEntranceShow;
- (BOOL)currentSelectedTabbarTypeIsEqualEntranceType;
- (BOOL)hasShowNewMessageText;
- (BOOL)tabbarChangeEnabel;
- (BOOL)shouldShowIMBubble;
- (id)init;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (double)iconImageScale;

@end
