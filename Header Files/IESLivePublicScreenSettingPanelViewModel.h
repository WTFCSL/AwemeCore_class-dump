//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, NSArray, HTSLiveScreenChatSetting, NSMutableDictionary, IESLiveAudioChatSettingApi, HTSLiveAnchorAudioConf, ChatSettingGetResponse_ResponseData, IESLivePublicScreenSettingPanelView, NSMutableArray, IESLivePrivilegeScreenChatApi, IESLiveAnchorSpeechCommentApi;
@protocol IESLiveRoomService;

@interface IESLivePublicScreenSettingPanelViewModel : NSObject <IESLiveVocalizationAuthorityProtocol, IESLiveGuideActions, IESLiveComponentLifeCycleNotifier, UITableViewDelegate, UITableViewDataSource> {
    BOOL _beforeLiving;
    id /* block */ _popupBack;
    IESLivePublicScreenSettingPanelView *_view;
    NSString *_enterFrom;
    HTSEventContext *_trackContext;
    NSMutableArray *_baseSettingItems;
    NSMutableArray *_interactionSettingItems;
    unsigned long long _liveType;
    id<IESLiveRoomService> _room;
    NSMutableDictionary *_registerItems;
    NSArray *_sections;
    IESLiveAudioChatSettingApi *_audioChatSettingApi;
    ChatSettingGetResponse_ResponseData *_audioChatSettingModel;
    ChatSettingGetResponse_ResponseData *_audioChatSettingModelForShow;
    HTSLiveScreenChatSetting *_screenChatSetting;
    IESLivePrivilegeScreenChatApi *_screenChatApi;
    long long _anchorSpeechAuth;
    HTSLiveAnchorAudioConf *_anchorSpeechSetting;
    IESLiveAnchorSpeechCommentApi *_anchorSpeechApi;
    NSString *_helpSchema;
}

@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL beforeLiving;
@property (retain, nonatomic) NSMutableDictionary *registerItems;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) IESLiveAudioChatSettingApi *audioChatSettingApi;
@property (retain, nonatomic) ChatSettingGetResponse_ResponseData *audioChatSettingModel;
@property (retain, nonatomic) ChatSettingGetResponse_ResponseData *audioChatSettingModelForShow;
@property (retain, nonatomic) HTSLiveScreenChatSetting *screenChatSetting;
@property (retain, nonatomic) IESLivePrivilegeScreenChatApi *screenChatApi;
@property (nonatomic) long long anchorSpeechAuth;
@property (retain, nonatomic) HTSLiveAnchorAudioConf *anchorSpeechSetting;
@property (retain, nonatomic) IESLiveAnchorSpeechCommentApi *anchorSpeechApi;
@property (copy, nonatomic) NSString *helpSchema;
@property (copy, nonatomic) id /* block */ popupBack;
@property (weak, nonatomic) IESLivePublicScreenSettingPanelView *view;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSMutableArray *baseSettingItems;
@property (retain, nonatomic) NSMutableArray *interactionSettingItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)enterFrom;
- (void)didSetAttachingDIContext;
- (void)setLiveType:(unsigned long long)arg0;
- (unsigned long long)liveType;
- (BOOL)hasRedDot;
- (void)liveTypeChangeAction:(unsigned long long)arg0;
- (id)registerItems;
- (void)setRegisterItems:(id)arg0;
- (id)helpSchema;
- (void)setHelpSchema:(id)arg0;
- (void)componentCreateDidFinishForLevel:(long long)arg0;
- (id)audioChatSettingApi;
- (void)setAudioChatSettingModel:(id)arg0;
- (id)audioChatSettingModel;
- (void)setAudioChatSettingModelForShow:(id)arg0;
- (id)screenChatApi;
- (void)setScreenChatSetting:(id)arg0;
- (id)audioChatSettingModelForShow;
- (void)trackAnchorInteractRightClick;
- (void)showVocalizationAuthoritySheet;
- (void)trackAnchorInteractRightShow;
- (id)screenChatSetting;
- (void)trackAnchorInteractRightLeave;
- (void)setVocalizationAuthorityStatusIfNeeded;
- (void)updateShowingAudioChatSettingModel:(id)arg0;
- (void)setAudioChatSettingApi:(id)arg0;
- (void)setScreenChatApi:(id)arg0;
- (id /* block */)popupBack;
- (void)setPopupBack:(id /* block */)arg0;
- (void)panelDismiss;
- (id)initWithDIContext:(id)arg0 liveType:(unsigned long long)arg1;
- (void)setBeforeLiving:(BOOL)arg0;
- (void)setAnchorSpeechApi:(id)arg0;
- (id)anchorSpeechApi;
- (BOOL)beforeLiving;
- (void)setBaseSettingItems:(id)arg0;
- (void)setInteractionSettingItems:(id)arg0;
- (void)addHeightFontSettingItem;
- (void)addCommentAuthSettingItem;
- (void)addAnchorSpeechSettingItem;
- (void)reloadAvailItemsFromRegisterItems;
- (void)setAnchorSpeechAuth:(long long)arg0;
- (void)setAnchorSpeechItemsSwitchStateWithConfig:(id)arg0;
- (void)uploadAnchorSpeechSettingIfNeed;
- (id)baseSettingItems;
- (id)interactionSettingItems;
- (void)showHeightFontSetting;
- (BOOL)shouldShowHeightFontItem;
- (id)getHeightFontSettingTextWithHeight:(unsigned long long)arg0 fontSize:(unsigned long long)arg1;
- (void)heightFontSettingViewShow:(BOOL)arg0;
- (BOOL)shouldShowCommentAuthItem;
- (id)commonCommentAuthTrackParams;
- (BOOL)shouldShowAnchorSpeechMainItem;
- (void)setAnchorSpeechSetting:(id)arg0;
- (long long)anchorSpeechAuth;
- (id)anchorSpeechSetting;
- (id)itemInIndexPath:(id)arg0;
- (long long)availItemCount;
- (id)sections;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setView:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setSections:(id)arg0;
- (id)view;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)registerItem:(id)arg0;
- (id)initWithRoom:(id)arg0;
- (void)setupConfig;
- (void)prepareData;

@end
