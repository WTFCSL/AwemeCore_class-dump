//
//     Generated by private class-dump
//

@class NSString, AWENotificationModelNew, AWEAwemeModel, NSDictionary;
@protocol IESIMConversationProtocol;

@interface AWEIMLightInteractionSendContext : NSObject {
    BOOL _needFrequencyControl;
    BOOL _defaultDigg;
    AWENotificationModelNew *_notiModel;
    AWEAwemeModel *_diggAwemeModel;
    AWEAwemeModel *_bindAwemeModel;
    unsigned long long _role;
    id<IESIMConversationProtocol> _toConversation;
    NSString *_toConversationID;
    NSString *_source;
    NSString *_name;
    NSString *_scene;
    NSString *_quoteMsgID;
    NSDictionary *_addExt;
    NSString *_topDescSender;
    NSString *_topDescReceiver;
    NSString *_topDescSenderV3;
    NSString *_topDescReceiverV3;
    NSString *_replaceNickUserId;
    unsigned long long _topDescSceneType;
    NSString *_matchUid;
    NSString *_topDescUidMatch;
    unsigned long long _replayDisplayType;
    NSString *_enterFrom;
    NSString *_emojiFrom;
    NSString *_enterMethod;
    NSString *_previousPage;
    NSString *_pushType;
    NSString *_friendshipFundEnterMethod;
    unsigned long long _friendshipFundTaskId;
    NSDictionary *_addSendContext;
}

@property (retain, nonatomic) AWENotificationModelNew *notiModel;
@property (retain, nonatomic) AWEAwemeModel *diggAwemeModel;
@property (retain, nonatomic) AWEAwemeModel *bindAwemeModel;
@property (nonatomic) unsigned long long role;
@property (retain, nonatomic) id<IESIMConversationProtocol> toConversation;
@property (copy, nonatomic) NSString *toConversationID;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL needFrequencyControl;
@property (copy, nonatomic) NSString *quoteMsgID;
@property (copy, nonatomic) NSDictionary *addExt;
@property (copy, nonatomic) NSString *topDescSender;
@property (copy, nonatomic) NSString *topDescReceiver;
@property (copy, nonatomic) NSString *topDescSenderV3;
@property (copy, nonatomic) NSString *topDescReceiverV3;
@property (copy, nonatomic) NSString *replaceNickUserId;
@property (nonatomic) unsigned long long topDescSceneType;
@property (copy, nonatomic) NSString *matchUid;
@property (copy, nonatomic) NSString *topDescUidMatch;
@property (nonatomic) unsigned long long replayDisplayType;
@property (nonatomic) BOOL defaultDigg;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *emojiFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *pushType;
@property (copy, nonatomic) NSString *friendshipFundEnterMethod;
@property (nonatomic) unsigned long long friendshipFundTaskId;
@property (copy, nonatomic) NSDictionary *addSendContext;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (void)setToConversationID:(id)arg0;
- (id)toConversationID;
- (id)initWithConversation:(id)arg0 toConversationID:(id)arg1 role:(unsigned long long)arg2 source:(id)arg3 name:(id)arg4;
- (void)setDiggAwemeModel:(id)arg0;
- (void)setNeedFrequencyControl:(BOOL)arg0;
- (id)notiModel;
- (void)setNotiModel:(id)arg0;
- (id)diggAwemeModel;
- (id)bindAwemeModel;
- (void)setBindAwemeModel:(id)arg0;
- (id)toConversation;
- (void)setToConversation:(id)arg0;
- (BOOL)needFrequencyControl;
- (id)quoteMsgID;
- (void)setQuoteMsgID:(id)arg0;
- (id)addExt;
- (void)setAddExt:(id)arg0;
- (id)topDescSender;
- (void)setTopDescSender:(id)arg0;
- (id)topDescReceiver;
- (void)setTopDescReceiver:(id)arg0;
- (id)topDescSenderV3;
- (void)setTopDescSenderV3:(id)arg0;
- (id)topDescReceiverV3;
- (void)setTopDescReceiverV3:(id)arg0;
- (id)replaceNickUserId;
- (void)setReplaceNickUserId:(id)arg0;
- (unsigned long long)topDescSceneType;
- (void)setTopDescSceneType:(unsigned long long)arg0;
- (id)matchUid;
- (void)setMatchUid:(id)arg0;
- (id)topDescUidMatch;
- (void)setTopDescUidMatch:(id)arg0;
- (unsigned long long)replayDisplayType;
- (void)setReplayDisplayType:(unsigned long long)arg0;
- (BOOL)defaultDigg;
- (void)setDefaultDigg:(BOOL)arg0;
- (id)emojiFrom;
- (void)setEmojiFrom:(id)arg0;
- (id)friendshipFundEnterMethod;
- (void)setFriendshipFundEnterMethod:(id)arg0;
- (unsigned long long)friendshipFundTaskId;
- (void)setFriendshipFundTaskId:(unsigned long long)arg0;
- (id)addSendContext;
- (void)setAddSendContext:(id)arg0;
- (void)setScene:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (void)setRole:(unsigned long long)arg0;
- (unsigned long long)role;
- (void)setName:(id)arg0;
- (void)setSource:(id)arg0;
- (void)setPushType:(id)arg0;
- (id)pushType;
- (id)name;
- (id)scene;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;

@end