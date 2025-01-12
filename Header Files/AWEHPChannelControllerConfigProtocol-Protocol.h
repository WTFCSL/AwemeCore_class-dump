//
//     Generated by private class-dump
//

@class NSString, NSDictionary;
@protocol AWEHPChannelEditAbility, AWEHPChannelPageAbility, AWEHPChannelThemeAbility, AWEHPChannelBadgeAbility, AWEHPChannelBubbleAbility, AWEHPChannelTabItemAbility, AWEHPChannelCornerAbility, AWEHPChannelRefreshAbility, AWEHPChannelTopBarAbility;

@protocol AWEHPChannelControllerConfigProtocol <NSObject>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *channelType;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *referString;
@property (readonly, nonatomic) NSDictionary *channelInfo;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) unsigned long long reloadType;
@property (weak, nonatomic) id<AWEHPChannelTopBarAbility> topBarAbility;
@property (weak, nonatomic) id<AWEHPChannelPageAbility> pageAbility;
@property (weak, nonatomic) id<AWEHPChannelBubbleAbility> bubbleAbility;
@property (weak, nonatomic) id<AWEHPChannelTabItemAbility> tabItemAbility;
@property (weak, nonatomic) id<AWEHPChannelEditAbility> editAbility;
@property (weak, nonatomic) id<AWEHPChannelRefreshAbility> refreshAbility;
@property (weak, nonatomic) id<AWEHPChannelBadgeAbility> badgeAbility;
@property (weak, nonatomic) id<AWEHPChannelThemeAbility> themeAbility;
@property (weak, nonatomic) id<AWEHPChannelCornerAbility> cornerAbility;

- (id)referString;
- (id)topBarAbility;
- (id)pageAbility;
- (id)editAbility;
- (id)refreshAbility;
- (id)tabItemAbility;
- (id)bubbleAbility;
- (void)setTopBarAbility:(id)arg0;
- (void)setPageAbility:(id)arg0;
- (void)setBubbleAbility:(id)arg0;
- (void)setTabItemAbility:(id)arg0;
- (void)setEditAbility:(id)arg0;
- (unsigned long long)reloadType;
- (void)setRefreshAbility:(id)arg0;
- (void)setBadgeAbility:(id)arg0;
- (void)setThemeAbility:(id)arg0;
- (void)setCornerAbility:(id)arg0;
- (id)badgeAbility;
- (id)themeAbility;
- (id)cornerAbility;
- (id)channelType;
- (id)channelID;
- (id)title;
- (long long)index;
- (id)channelInfo;

@end
