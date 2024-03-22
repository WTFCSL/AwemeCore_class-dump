//
//     Generated by private class-dump
//

@class AWENearbyShopCardBySyncMsgInfo, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface AWENearbyShopCardManager : NSObject {
    AWENearbyShopCardBySyncMsgInfo *_lastMsgInfo;
    long long _lastMsgType;
    AWENearbyShopCardBySyncMsgInfo *_lastMallMsgInfo;
    double _lastMallFresh;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableDictionary *_triggerSceneDict;
    NSMutableDictionary *_inShopStatusDict;
    NSMutableDictionary *_shopCardExposeStatusDict;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSMutableDictionary *triggerSceneDict;
@property (retain, nonatomic) NSMutableDictionary *inShopStatusDict;
@property (retain, nonatomic) NSMutableDictionary *shopCardExposeStatusDict;
@property (retain, nonatomic) AWENearbyShopCardBySyncMsgInfo *lastMsgInfo;
@property (nonatomic) long long lastMsgType;
@property (retain, nonatomic) AWENearbyShopCardBySyncMsgInfo *lastMallMsgInfo;
@property (nonatomic) double lastMallFresh;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (long long)lastMsgType;
- (void)setLastMsgType:(long long)arg0;
- (void)setLastMallFresh:(double)arg0;
- (id)lastMsgInfo;
- (void)recordTriggerScene:(unsigned long long)arg0 forLogId:(id)arg1;
- (void)trackReqSettingsByWithMsgInfo:(id)arg0 tirggerScene:(unsigned long long)arg1 errMsg:(id)arg2;
- (id)lastMallMsgInfo;
- (void)handleByteSyncBubbleData:(id)arg0;
- (void)handleByteSyncMallCardMsg:(id)arg0;
- (void)handleByteSyncShopCardMsg:(id)arg0;
- (id)shopCardExposeStatusDict;
- (id)inShopStatusDict;
- (void)setLastMsgInfo:(id)arg0;
- (void)trackClientRCVDResultWithMsgInfo:(id)arg0;
- (void)__trackRefreshSettingsWithMsgInfo:(id)arg0 isFullScreen:(BOOL)arg1 isRoam:(BOOL)arg2 tirggerScene:(unsigned long long)arg3 errMsg:(id)arg4;
- (BOOL)hasShopCard;
- (void)setLastMallMsgInfo:(id)arg0;
- (id)triggerSceneDict;
- (void)handleByteSyncBubbleData:(id)arg0 noticeType:(long long)arg1 msgLogId:(id)arg2 isFromPull:(BOOL)arg3;
- (void)removeDotWhenOvertimeWithDotScene:(unsigned long long)arg0;
- (BOOL)shouldMallGuideRefreshWithGuide:(id)arg0;
- (id)shouldShowMallBubbleWithBubbleType:(long long)arg0;
- (double)lastMallFresh;
- (void)trackShopCardShowWithMsgInfo:(id)arg0 url:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)setTriggerSceneDict:(id)arg0;
- (void)setInShopStatusDict:(id)arg0;
- (void)setShopCardExposeStatusDict:(id)arg0;
- (id)timer;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setTimer:(id)arg0;
- (void)addObserver;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end