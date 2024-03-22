//
//     Generated by private class-dump
//

@class AFDPineappleRedPacketConfig, NSString, AWEAwemeModel;
@protocol AWEPlayInteractionPineappleRedPacketElementProtocol;

@protocol AFDSocialPromotionRedPacketManagerProtocol <NSObject>

+ (id)sharedInstance;

@property (retain, nonatomic) AFDPineappleRedPacketConfig *config;
@property (readonly, copy, nonatomic) NSString *currentOpenRedPacketPageAwemeID;
@property (weak, nonatomic) id<AWEPlayInteractionPineappleRedPacketElementProtocol> currentShowingRedPacketElement;
@property (retain, nonatomic) AWEAwemeModel *ecAssistButtonClickedAweme;

- (void)addVideoPlayTrackParamsTo:(id)arg0 forAweme:(id)arg1;
- (void)reportECAssistButtonShowViaNative;
- (void)recordECAssistInfoFromChatWithDictionary:(id)arg0;
- (id)ecAssistInfoFromChat;
- (void)clearECAssistInfo;
- (void)trackRedPacketButtonEvent:(id)arg0 aweme:(id)arg1 referString:(id)arg2 trackContext:(id)arg3;
- (unsigned long long)redPacketStatusOnAweme:(id)arg0;
- (void)openRedPacketPageOnAweme:(id)arg0 trackParams:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)canPublishOpenRedPacketPageForAweme:(id)arg0;
- (void)openRedPacketPageOnAweme:(id)arg0 trackParams:(id)arg1 directOpen:(BOOL)arg2 canBeBlocked:(BOOL)arg3 completion:(id /* block */)arg4;
- (unsigned long long)redPacketSubTypeWithAweme:(id)arg0;
- (id)currentOpenRedPacketPageAwemeID;
- (void)cancelRedPacketPageRequest;
- (BOOL)shouldShowRedPacketButtonWithAweme:(id)arg0;
- (void)markAwemeAsCommentedWithID:(id)arg0;
- (void)startPlayingAweme:(id)arg0;
- (void)endPlayingAweme:(id)arg0;
- (void)debug_clearAllStroage;
- (void)setEcAssistButtonClickedAweme:(id)arg0;
- (void)showECAssistIMSharePanelWithAweme:(id)arg0;
- (void)didFinishedPlayWithAweme:(id)arg0 referString:(id)arg1;
- (void)addGeneralRedButtonActionBlockIfNeededWithAweme:(id)arg0 enterFrom:(id)arg1;
- (id)currentShowingRedPacketElement;
- (void)setCurrentShowingRedPacketElement:(id)arg0;
- (id)ecAssistButtonClickedAweme;
- (void)setConfig:(id)arg0;
- (id)config;

@end
