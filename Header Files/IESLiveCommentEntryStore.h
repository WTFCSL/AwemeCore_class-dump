//
//     Generated by private class-dump
//

@class NSString, HTSEventContext, HTSLiveFixedChatSyncData, HTSLiveFastChatSyncData, IESLivePublicScreenInfoModel;
@protocol IESLiveRoomService, IESLiveCommentEntryReactions;

@interface IESLiveCommentEntryStore : NSObject <IESLiveDataSyncDelegate, HTSLiveMessageSubscriber> {
    BOOL _disableComment;
    BOOL _isDanmakuClosed;
    BOOL _disableCommentByWrds;
    BOOL _disableInputComment;
    id<IESLiveRoomService> _roomModel;
    id<IESLiveCommentEntryReactions> _reactions;
    HTSEventContext *_trackContext;
    long long _orientation;
    IESLivePublicScreenInfoModel *_publicScreenInfoModel;
    HTSLiveFixedChatSyncData *_fixedChatData;
    HTSLiveFastChatSyncData *_fastChatData;
    NSString *_disableInputCommentHint;
}

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL disableComment;
@property (nonatomic) BOOL disableCommentByWrds;
@property (nonatomic) BOOL disableInputComment;
@property (copy, nonatomic) NSString *disableInputCommentHint;
@property (retain, nonatomic) HTSLiveFixedChatSyncData *fixedChatData;
@property (retain, nonatomic) HTSLiveFastChatSyncData *fastChatData;
@property (nonatomic) BOOL isDanmakuClosed;
@property (weak, nonatomic) id<IESLiveCommentEntryReactions> reactions;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) IESLivePublicScreenInfoModel *publicScreenInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)roomModel;
- (BOOL)disableComment;
- (void)setRoomModel:(id)arg0;
- (void)setDisableComment:(BOOL)arg0;
- (void)subscribedSyncDataWithValue:(id)arg0 version:(long long)arg1;
- (void)subscribedSyncDataUpdatedWithValue:(id)arg0 oldVersion:(long long)arg1 newVersion:(long long)arg2;
- (id)initWithRoomModel:(id)arg0 diContext:(id)arg1;
- (void)checkIfDisableComment;
- (BOOL)disableCommentByWrds;
- (void)setDisableInputComment:(BOOL)arg0;
- (void)checkIfDisableInputComment;
- (void)handleQuickCommentWithData:(id)arg0;
- (void)handleQuickLimitCommentWithData:(id)arg0;
- (void)setDisableInputCommentHint:(id)arg0;
- (void)setDisableCommentByWrds:(BOOL)arg0;
- (BOOL)disableInputComment;
- (id)disableInputCommentHint;
- (id)publicScreenInfoModel;
- (BOOL)isDanmakuClosed;
- (void)setIsDanmakuClosedStatus:(BOOL)arg0;
- (id)commentEntryTitle;
- (BOOL)commentEntryEmojiEnableShow;
- (id)fastChatData;
- (id)fixedChatData;
- (void)setPublicScreenInfoModel:(id)arg0;
- (void)setFixedChatData:(id)arg0;
- (void)setFastChatData:(id)arg0;
- (void)setIsDanmakuClosed:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)orientation;
- (void)setup;
- (void)setOrientation:(long long)arg0;
- (void)messageReceived:(id)arg0;
- (id)reactions;
- (void)setReactions:(id)arg0;

@end
