//
//     Generated by private class-dump
//

@class NSString, UIImageView, LOTAnimationView, UIView, UILabel, NSArray;
@protocol AWEFeedFastCommentViewDelegate;

@interface AWEFeedFastCommentView : UIView <UIGestureRecognizerDelegate, AWEUserMessage, AFDVirtualAvatarMessage, AWEFeedFastCommentViewProtocol> {
    BOOL _isVmoji;
    UIView *_inputBar;
    UIImageView *_avatar;
    UILabel *_placeholder;
    UIView *_emojisContainer;
    id /* block */ _tapBlock;
    id<AWEFeedFastCommentViewDelegate> _delegate;
    LOTAnimationView *_animationView;
    NSArray *_dynamicEmoji;
    NSString *_referString;
    double _maxWidth;
    long long _emojiSettingType;
    NSString *_uniqueKey;
}

@property (nonatomic) double maxWidth;
@property (nonatomic) long long emojiSettingType;
@property (copy, nonatomic) NSString *uniqueKey;
@property (retain, nonatomic) UIView *inputBar;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *placeholder;
@property (retain, nonatomic) UIView *emojisContainer;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (weak, nonatomic) id<AWEFeedFastCommentViewDelegate> delegate;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (copy, nonatomic) NSArray *dynamicEmoji;
@property (nonatomic) BOOL isVmoji;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)referString;
- (void)didFinishLogin;
- (void)setReferString:(id)arg0;
- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (id)aAWEPadModuleAdapter;
- (id)initWithMaxWidth:(double)arg0 emojiType:(long long)arg1 referString:(id)arg2;
- (void)setInputBar:(id)arg0;
- (id)inputBar;
- (id)emojisContainer;
- (void)setEmojisContainer:(id)arg0;
- (void)updateCurrentUserUseVirutalOrOriginAvatar:(BOOL)arg0;
- (void)setupUIWithEmojiType:(long long)arg0;
- (double)realPoint:(double)arg0;
- (BOOL)shouldUseExposeCollectionPhase1Style;
- (BOOL)shouldChangeToSendMessageEnable;
- (void)updateEmojisWithEmojiType:(long long)arg0;
- (void)setIsVmoji:(BOOL)arg0;
- (void)p_updateEmojisWithEmojiType:(long long)arg0;
- (void)p_updateAccessibility;
- (long long)emojiSettingType;
- (id)dynamicEmoji;
- (void)setEmojiSettingType:(long long)arg0;
- (void)removeAllEmojis;
- (void)setDynamicEmoji:(id)arg0;
- (BOOL)isVmoji;
- (id)uniqueKey;
- (void).cxx_destruct;
- (void)setMaxWidth:(double)arg0;
- (double)maxWidth;
- (id)delegate;
- (void)setPlaceholder:(id)arg0;
- (id)placeholder;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (void)setUniqueKey:(id)arg0;

@end
