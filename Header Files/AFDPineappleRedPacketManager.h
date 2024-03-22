//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, BDXBridgeEventSubscriber, AWEAwemeModel, NSMutableArray, AFDPineappleRedPacketConfig;
@protocol AWEHttpTask;

@interface AFDPineappleRedPacketManager : NSObject <AWEUserMessage, AWEPublishTaskMessage, AFDPineappleRedPacketManagerProtocol> {
    AFDPineappleRedPacketConfig *_config;
    NSString *_currentOpenRedPacketPageAwemeID;
    NSMutableDictionary *_localRedPacketInfoDict;
    BDXBridgeEventSubscriber *_redPacketEventSubscriber;
    id<AWEHttpTask> _currentOpenRedPacketPageRequest;
    NSString *_currentDisplayingAwemeID;
    NSMutableArray *_publishOpeningAwemeIDs;
    AWEAwemeModel *_currentCreatorAweme;
    NSString *_flashNameText;
}

@property (retain, nonatomic) NSMutableDictionary *localRedPacketInfoDict;
@property (retain, nonatomic) BDXBridgeEventSubscriber *redPacketEventSubscriber;
@property (retain, nonatomic) id<AWEHttpTask> currentOpenRedPacketPageRequest;
@property (copy, nonatomic) NSString *currentOpenRedPacketPageAwemeID;
@property (copy, nonatomic) NSString *currentDisplayingAwemeID;
@property (retain, nonatomic) NSMutableArray *publishOpeningAwemeIDs;
@property (retain, nonatomic) AWEAwemeModel *currentCreatorAweme;
@property (copy, nonatomic) NSString *flashNameText;
@property (retain, nonatomic) AFDPineappleRedPacketConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowByLuckySettings;
+ (id)p_currentTabName;
+ (id)trackStringForRedPacketStatus:(unsigned long long)arg0;
+ (id)trackStringForRedPacketSubType:(unsigned long long)arg0;
+ (id)sharedInstance;

- (void)addVideoPlayTrackParamsTo:(id)arg0 forAweme:(id)arg1;
- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)didFinishLogout;
- (void)trackRedPacketButtonEvent:(id)arg0 aweme:(id)arg1 referString:(id)arg2 trackContext:(id)arg3;
- (unsigned long long)redPacketStatusOnAweme:(id)arg0;
- (void)openRedPacketPageOnAweme:(id)arg0 trackParams:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)canPublishOpenRedPacketPageForAweme:(id)arg0;
- (id)p_getCustomStickerDictWithAweme:(id)arg0;
- (BOOL)p_isAnswerToQuestionVideoWithAweme:(id)arg0;
- (id)p_getAnswerToQuestionAwemeIDWithAweme:(id)arg0;
- (id)p_getQuestionStickerIDWithAweme:(id)arg0;
- (id)p_getQuestionCustomStickerIDWithAweme:(id)arg0;
- (void)markAwemeAsHasAutoOpened:(id)arg0;
- (BOOL)p_isAnsweringQuestionWithAweme:(id)arg0;
- (void)routeToAnswerQuestionPageWithAweme:(id)arg0 response:(id)arg1 trackParams:(id)arg2 completion:(id /* block */)arg3;
- (id)p_getQuickFlashCreatorAwemeIDWithAweme:(id)arg0;
- (void)p_addQuickFlashExtraParamsTo:(id)arg0 withAweme:(id)arg1;
- (void)p_modifyQuickFlashShootWayInParams:(id)arg0;
- (BOOL)p_isQuickFlashVideoWithAweme:(id)arg0;
- (BOOL)p_isResponsingToQuickFlashWithAweme:(id)arg0;
- (void)routeToQuickFlashPageWithAweme:(id)arg0 response:(id)arg1 trackParams:(id)arg2 completion:(id /* block */)arg3;
- (void)p_redPacketStateEventCallBackWithParams:(id)arg0;
- (void)setRedPacketEventSubscriber:(id)arg0;
- (id)redPacketEventSubscriber;
- (void)p_luckySettingsDidChange:(id)arg0;
- (void)p_updateRedPacketStatusForAwemeID:(id)arg0 status:(unsigned long long)arg1;
- (void)openRedPacketPageOnAweme:(id)arg0 trackParams:(id)arg1 directOpen:(BOOL)arg2 canBeBlocked:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)routeToRedPacketPageWithSubType:(unsigned long long)arg0 aweme:(id)arg1 response:(id)arg2 trackParams:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)redPacketSubTypeWithAweme:(id)arg0;
- (void)p_showNeedDenyAlertDialogWithSubType:(unsigned long long)arg0 confirmAction:(id /* block */)arg1;
- (void)p_followAuthorWithAweme:(id)arg0 completion:(id /* block */)arg1;
- (void)p_showNeedFollowAlertDialogWithSubType:(unsigned long long)arg0 confirmAction:(id /* block */)arg1;
- (void)requestRedPacketStatusWithAweme:(id)arg0 isAutoOpen:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setCurrentCreatorAweme:(id)arg0;
- (void)p_routeToRedPacketPageWithAweme:(id)arg0 response:(id)arg1 trackParams:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)hasCommentedAwemeWithID:(id)arg0;
- (BOOL)p_sanityCheckBeforeRequestingRedPacketPageForAweme:(id)arg0;
- (id)currentOpenRedPacketPageRequest;
- (id)currentOpenRedPacketPageAwemeID;
- (void)cancelRedPacketPageRequest;
- (void)setCurrentOpenRedPacketPageRequest:(id)arg0;
- (void)setCurrentOpenRedPacketPageAwemeID:(id)arg0;
- (id)publishOpeningAwemeIDs;
- (BOOL)p_sanityCheckBeforePublishOpenRedPacketPageForAweme:(id)arg0 shouldForbidTabRestrict:(BOOL)arg1;
- (id)currentCreatorAweme;
- (id)p_getLocalRedPacketInfoWithAwemeID:(id)arg0 force:(BOOL)arg1;
- (id)currentDisplayingAwemeID;
- (void)setCurrentDisplayingAwemeID:(id)arg0;
- (void)setLocalRedPacketInfoDict:(id)arg0;
- (id)localRedPacketInfoDict;
- (void)p_trackFollowAuthorWithAweme:(id)arg0;
- (id)p_replaceFlashNameIfNeededInString:(id)arg0;
- (id)flashNameText;
- (void)publishOpenRedPacketPageWithAweme:(id)arg0 redPacketSchema:(id)arg1 trackParams:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)shouldShowRedPacketButtonWithAweme:(id)arg0;
- (BOOL)isAnswerToQuestionVideoWithAweme:(id)arg0;
- (BOOL)isQuickFlashVideoWithAweme:(id)arg0;
- (void)markAwemeAsCommentedWithID:(id)arg0;
- (void)startPlayingAweme:(id)arg0;
- (void)endPlayingAweme:(id)arg0;
- (void)debug_clearAllStroage;
- (BOOL)debug_canShow;
- (BOOL)hasAutoOpenedOnAwemeWithID:(id)arg0;
- (void)setPublishOpeningAwemeIDs:(id)arg0;
- (void)setFlashNameText:(id)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)dealloc;

@end