//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEFeedChannelObject;
@protocol AWEHPChannelEditAbility, AWEHPChannelPageAbility, AWEHPChannelThemeAbility, AWEHPChannelBadgeAbility, AWEHPChannelBubbleAbility, AWEHPChannelTabItemAbility, AWEHPChannelCornerAbility, AWEHPChannelRefreshAbility, AWEHPChannelTopBarAbility;

@interface AWEHPChannelControllerConfig : NSObject <AWEHPChannelControllerConfigProtocol> {
    id<AWEHPChannelTopBarAbility> _topBarAbility;
    id<AWEHPChannelPageAbility> _pageAbility;
    id<AWEHPChannelTabItemAbility> _tabItemAbility;
    id<AWEHPChannelBubbleAbility> _bubbleAbility;
    id<AWEHPChannelEditAbility> _editAbility;
    id<AWEHPChannelRefreshAbility> _refreshAbility;
    id<AWEHPChannelBadgeAbility> _badgeAbility;
    id<AWEHPChannelThemeAbility> _themeAbility;
    id<AWEHPChannelCornerAbility> _cornerAbility;
    NSString *_title;
    NSString *_channelType;
    NSString *_channelID;
    NSDictionary *_channelInfo;
    long long _index;
    unsigned long long _reloadType;
    NSString *_referString;
    AWEFeedChannelObject *_selfChannel;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *channelType;
@property (retain, nonatomic) NSString *channelID;
@property (retain, nonatomic) NSDictionary *channelInfo;
@property (nonatomic) long long index;
@property (nonatomic) unsigned long long reloadType;
@property (retain, nonatomic) NSString *referString;
@property (weak, nonatomic) AWEFeedChannelObject *selfChannel;
@property (weak, nonatomic) id<AWEHPChannelTopBarAbility> topBarAbility;
@property (weak, nonatomic) id<AWEHPChannelPageAbility> pageAbility;
@property (weak, nonatomic) id<AWEHPChannelBubbleAbility> bubbleAbility;
@property (weak, nonatomic) id<AWEHPChannelTabItemAbility> tabItemAbility;
@property (weak, nonatomic) id<AWEHPChannelEditAbility> editAbility;
@property (weak, nonatomic) id<AWEHPChannelRefreshAbility> refreshAbility;
@property (weak, nonatomic) id<AWEHPChannelBadgeAbility> badgeAbility;
@property (weak, nonatomic) id<AWEHPChannelThemeAbility> themeAbility;
@property (weak, nonatomic) id<AWEHPChannelCornerAbility> cornerAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
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
- (void)setChannelInfo:(id)arg0;
- (void)setSelfChannel:(id)arg0;
- (id)selfChannel;
- (unsigned long long)reloadType;
- (void)setReloadType:(unsigned long long)arg0;
- (void)setRefreshAbility:(id)arg0;
- (void)setBadgeAbility:(id)arg0;
- (void)setThemeAbility:(id)arg0;
- (void)setCornerAbility:(id)arg0;
- (id)badgeAbility;
- (id)themeAbility;
- (id)cornerAbility;
- (void)setIndex:(long long)arg0;
- (id)channelType;
- (id)channelID;
- (void).cxx_destruct;
- (id)title;
- (long long)index;
- (id)description;
- (void)setChannelID:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)channelInfo;
- (void)setChannelType:(id)arg0;

@end
