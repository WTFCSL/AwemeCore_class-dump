//
//     Generated by private class-dump
//

@class NSString, HTSEventContext, IESLiveEmojiTextParser, HTSLiveTemplateEngineConfiguration, IESLiveBadgeFactory, GPBMessage, NSParagraphStyle;
@protocol IESLiveRoomService, HTSLiveTemplateProvider;

@interface IESLiveChannelMessageNodeStrategy : NSObject <IESLiveChannelMessageNodeStrategy> {
    GPBMessage *message;
    id<HTSLiveTemplateProvider> templateProvider;
    double messageListWidth;
    NSParagraphStyle *paragraphStyle;
    long long liveFontWeight;
    double liveFontSize;
    HTSEventContext *_eventContext;
    id<IESLiveRoomService> _room;
    long long _currentUserID;
    IESLiveEmojiTextParser *_emoticonParser;
    HTSLiveTemplateEngineConfiguration *_config;
    IESLiveBadgeFactory *_badgeFactory;
}

@property (retain, nonatomic) IESLiveEmojiTextParser *emoticonParser;
@property (retain, nonatomic) HTSLiveTemplateEngineConfiguration *config;
@property (retain, nonatomic) IESLiveBadgeFactory *badgeFactory;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long currentUserID;
@property (retain, nonatomic) GPBMessage *message;
@property (weak, nonatomic) id<HTSLiveTemplateProvider> templateProvider;
@property (nonatomic) double messageListWidth;
@property (retain, nonatomic) NSParagraphStyle *paragraphStyle;
@property (nonatomic) long long liveFontWeight;
@property (nonatomic) double liveFontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getDisplayText;
- (void)setEventContext:(id)arg0;
- (void)setCurrentUserID:(long long)arg0;
- (void)refreshNode:(id)arg0;
- (double)messageListWidth;
- (BOOL)isMyMessage;
- (id)localNameColor;
- (double)liveFontSize;
- (id)localContentColor;
- (id)emoticonParser;
- (void)setEmoticonParser:(id)arg0;
- (void)resetMessageNode:(id)arg0;
- (void)loadBadgesWithNode:(id)arg0;
- (void)assembleMessageListNode:(id)arg0;
- (id)processDisplayText:(id)arg0 needImagePlaceHolder:(id)arg1 node:(id)arg2;
- (void)updateNodeSize:(id)arg0;
- (void)addActionsForNode:(id)arg0 attributedString:(id)arg1;
- (id)allIconList;
- (long long)liveFontWeight;
- (double)fitedFontSize:(double)arg0;
- (id)localUserColor;
- (id)createNode;
- (void)setMessageListWidth:(double)arg0;
- (void)setLiveFontWeight:(long long)arg0;
- (void)setLiveFontSize:(double)arg0;
- (id)reProcessDisplayTextWithNode:(id)arg0;
- (id)needLoadImageURLs;
- (id)badgeFactory;
- (void)setBadgeFactory:(id)arg0;
- (void)setMessage:(id)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)message;
- (id)paragraphStyle;
- (id)eventContext;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)setParagraphStyle:(id)arg0;
- (double)getTopMargin;
- (long long)currentUserID;
- (id)templateProvider;
- (void)setTemplateProvider:(id)arg0;

@end
