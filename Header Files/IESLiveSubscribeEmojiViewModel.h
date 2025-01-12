//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, IESLiveSubscribeVIPEmoticonTabEntranceItem, NSMutableDictionary, NSDictionary, HTSLiveEmojiTabInfo, NSMutableArray, IESLiveSubscribeVIPEmoticonTabViewItem, NSNumber;
@protocol IESLiveRoomService;

@interface IESLiveSubscribeEmojiViewModel : NSObject <IESLiveMessageInteractionModuleCommentAction> {
    BOOL _newStyle;
    int _memberType;
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    NSDictionary *_extraTrackInfo;
    IESLiveSubscribeVIPEmoticonTabViewItem *_tabViewItem;
    IESLiveSubscribeVIPEmoticonTabEntranceItem *_tabEntranceItem;
    long long _emojiStatus;
    NSMutableArray *_subscribeEmojiList;
    HTSLiveEmojiTabInfo *_subscribeEmojiTabInfo;
    NSNumber *_danmakuSwitchON;
    NSNumber *_shouldUpdateEmojiView;
    long long _expireDate;
    NSString *_guideSchema;
    NSMutableDictionary *_isNewSubscribeEmojiDic;
}

@property (nonatomic) long long emojiStatus;
@property (retain, nonatomic) NSMutableArray *subscribeEmojiList;
@property (retain, nonatomic) HTSLiveEmojiTabInfo *subscribeEmojiTabInfo;
@property (retain, nonatomic) NSNumber *danmakuSwitchON;
@property (retain, nonatomic) NSNumber *shouldUpdateEmojiView;
@property (nonatomic) long long expireDate;
@property (nonatomic) int memberType;
@property (copy, nonatomic) NSString *guideSchema;
@property (retain, nonatomic) NSMutableDictionary *isNewSubscribeEmojiDic;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSDictionary *extraTrackInfo;
@property (nonatomic) BOOL newStyle;
@property (retain, nonatomic) IESLiveSubscribeVIPEmoticonTabViewItem *tabViewItem;
@property (retain, nonatomic) IESLiveSubscribeVIPEmoticonTabEntranceItem *tabEntranceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (id)extraTrackInfo;
- (BOOL)newStyle;
- (void)setNewStyle:(BOOL)arg0;
- (void)setExtraTrackInfo:(id)arg0;
- (void)commentDanmakuSwitchDidChange:(BOOL)arg0;
- (void)commentEmoticonPanelDidShow;
- (void)subscribeEmoticonDidSend:(long long)arg0 error:(id)arg1 duration:(double)arg2;
- (id)buildCommonTrackInfo;
- (id)guideSchema;
- (id)danmakuSwitchON;
- (void)setDanmakuSwitchON:(id)arg0;
- (long long)emojiStatus;
- (void)emoticonViewDidShowFromDraw:(BOOL)arg0 trackParams:(id)arg1;
- (BOOL)shouldShowAndUpdateSubscribeEmojiTipIfNeeded;
- (void)cleanSubscribeEmojiTip;
- (id)subscribeEmojiList;
- (BOOL)isNewEmojiWithEmojiID:(long long)arg0;
- (BOOL)canSendSubscribeEmoji:(id)arg0;
- (void)trackSubscribeEmojiSendWithEmoji:(id)arg0;
- (void)selectSubscribeEmojiAtIndex:(long long)arg0;
- (id)subscribeEmojiTabInfo;
- (void)tapSubscribeGuideButton;
- (id)tabEntranceItem;
- (void)setEmojiStatus:(long long)arg0;
- (void)setSubscribeEmojiList:(id)arg0;
- (void)setSubscribeEmojiTabInfo:(id)arg0;
- (void)setGuideSchema:(id)arg0;
- (void)setShouldUpdateEmojiView:(id)arg0;
- (void)updateIsNewSubscribeEmojiDicWith:(id)arg0;
- (BOOL)shouldShowSubscribeEmojiTapDot;
- (id)tabViewItem;
- (void)trackSubscribeGuideButton;
- (void)tapCommentGuideButton;
- (void)cleanSubscribeEmojiTabTip;
- (void)updateLocalShowNewSubscribeEmojiTabDotDate;
- (void)updateLocalSubscribeEmoji;
- (void)trackSubscribeEmojiTabClick;
- (void)trackSubscribeEmojiPanelShowWithDraw:(BOOL)arg0 trackParams:(id)arg1;
- (void)trackSubscribeEmojiTabShow;
- (void)monitor_sendSubscribeEmojiWithEmojiID:(long long)arg0 duration:(double)arg1 error:(id)arg2;
- (BOOL)shouldShowNewSubscribeEmojiTabDot;
- (BOOL)hasNewSubscribeEmoji;
- (id)subscribeVIPStatus;
- (BOOL)shouldShowSubscribeEmojiTabTip;
- (id)isNewSubscribeEmojiDic;
- (void)setIsNewSubscribeEmojiDic:(id)arg0;
- (void)updateSubscribeInfo:(id)arg0;
- (void)trackSubscribeEmojiSendWithEmoji:(long long)arg0 messageSource:(id)arg1;
- (void)setTabViewItem:(id)arg0;
- (void)setTabEntranceItem:(id)arg0;
- (id)shouldUpdateEmojiView;
- (id)init;
- (void).cxx_destruct;
- (void)setExpireDate:(long long)arg0;
- (long long)expireDate;
- (id)room;
- (void)setRoom:(id)arg0;
- (int)memberType;
- (void)setMemberType:(int)arg0;

@end
