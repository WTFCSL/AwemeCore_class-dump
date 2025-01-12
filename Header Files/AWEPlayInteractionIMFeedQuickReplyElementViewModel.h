//
//     Generated by private class-dump
//

@class LOTAnimationView, NSString, NSArray;
@protocol AWEIMCustomQuickReplyControllerHandlerPortocol, AWECommentInputViewManagerProtocol;

@interface AWEPlayInteractionIMFeedQuickReplyElementViewModel : AWEPlayInteractionPersonElementViewModel <AWEIMFeedQuickReplyViewDelegate> {
    NSString *_toUserID;
    NSString *_messageID;
    NSArray *_imUnreadShareUserOriginList;
    unsigned long long _scene;
    LOTAnimationView *_animationView;
    id<AWEIMCustomQuickReplyControllerHandlerPortocol> _imQuickReplyHandler;
    id<AWECommentInputViewManagerProtocol> _commentInputViewManager;
}

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) id<AWEIMCustomQuickReplyControllerHandlerPortocol> imQuickReplyHandler;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (copy, nonatomic) NSString *toUserID;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSArray *imUnreadShareUserOriginList;
@property (nonatomic) unsigned long long scene;

- (id)enterMethod;
- (id)toUserID;
- (void)setToUserID:(id)arg0;
- (id)commentInputViewManager;
- (id)fullScreenEmojiAnimationFromImage:(id)arg0;
- (void)setCommentInputViewManager:(id)arg0;
- (void)showCommentPanel;
- (void)setImQuickReplyHandler:(id)arg0;
- (id)imQuickReplyHandler;
- (void)showIMQuickReplyViewController;
- (void)p_sendMessageToAuthorWithContent:(id)arg0;
- (void)imFeedQuickReplyViewSendEmoji:(id)arg0 content:(id)arg1 image:(id)arg2 isAnimated:(BOOL)arg3;
- (void)showIMQuickReplyViewControllerWithDefaultEmojiTab:(BOOL)arg0;
- (void)setImUnreadShareUserOriginList:(id)arg0;
- (void)p_trackWithEvent:(id)arg0 extraParam:(id)arg1;
- (BOOL)isCommentMode;
- (id)originRelativeUserModel;
- (void)p_sendMessageWithAWEUserModel:(id)arg0 defaultEmojiTab:(BOOL)arg1;
- (void)showUnreadMentionMessageInputViewDefaultEmojiTab:(BOOL)arg0;
- (void)showUnreadMentionMessageInputView;
- (void)p_sendToAuthorWithContent:(id)arg0;
- (void)p_trackClickEvent;
- (void)p_sendComment:(id)arg0;
- (void)p_sendMessageToOneFriendRecommendAuthorWithContent:(id)arg0;
- (void)p_sendMessageToUnreadMentionWithContent:(id)arg0;
- (void)p_sendMessageToUnreadShareAuthorWithContent:(id)arg0;
- (void)p_sendEmojiMessageWithUser:(id)arg0 withProcessID:(id)arg1 withContent:(id)arg2 imQuoteReplyType:(unsigned long long)arg3 commentModel:(id)arg4;
- (id)imUnreadShareUserOriginList;
- (id)messageID;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setMessageID:(id)arg0;
- (unsigned long long)scene;
- (id)animationView;
- (void)setAnimationView:(id)arg0;

@end
