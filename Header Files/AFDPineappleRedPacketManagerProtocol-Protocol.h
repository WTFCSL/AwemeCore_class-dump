//
//     Generated by private class-dump
//

@class AFDPineappleRedPacketConfig, NSString;

@protocol AFDPineappleRedPacketManagerProtocol <NSObject>

+ (BOOL)canShowByLuckySettings;
+ (id)sharedInstance;

@property (retain, nonatomic) AFDPineappleRedPacketConfig *config;
@property (readonly, copy, nonatomic) NSString *currentOpenRedPacketPageAwemeID;

- (void)addVideoPlayTrackParamsTo:(id)arg0 forAweme:(id)arg1;
- (void)trackRedPacketButtonEvent:(id)arg0 aweme:(id)arg1 referString:(id)arg2 trackContext:(id)arg3;
- (unsigned long long)redPacketStatusOnAweme:(id)arg0;
- (void)openRedPacketPageOnAweme:(id)arg0 trackParams:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)canPublishOpenRedPacketPageForAweme:(id)arg0;
- (void)markAwemeAsHasAutoOpened:(id)arg0;
- (void)openRedPacketPageOnAweme:(id)arg0 trackParams:(id)arg1 directOpen:(BOOL)arg2 canBeBlocked:(BOOL)arg3 completion:(id /* block */)arg4;
- (unsigned long long)redPacketSubTypeWithAweme:(id)arg0;
- (id)currentOpenRedPacketPageAwemeID;
- (void)cancelRedPacketPageRequest;
- (void)publishOpenRedPacketPageWithAweme:(id)arg0 redPacketSchema:(id)arg1 trackParams:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)shouldShowRedPacketButtonWithAweme:(id)arg0;
- (BOOL)isAnswerToQuestionVideoWithAweme:(id)arg0;
- (BOOL)isQuickFlashVideoWithAweme:(id)arg0;
- (void)markAwemeAsCommentedWithID:(id)arg0;
- (void)startPlayingAweme:(id)arg0;
- (void)endPlayingAweme:(id)arg0;
- (void)debug_clearAllStroage;
- (BOOL)debug_canShow;
- (void)setConfig:(id)arg0;
- (id)config;

@end
