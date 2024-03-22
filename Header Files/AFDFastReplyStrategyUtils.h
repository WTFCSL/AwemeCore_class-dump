//
//     Generated by private class-dump
//

@class NSString;

@interface AFDFastReplyStrategyUtils : NSObject <AFDFastReplyStrategyUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowCommentWithContext:(id)arg0 ignoreDormant:(BOOL)arg1;
+ (id)fullScreenEmojiAnimationFromImage:(id)arg0;
+ (long long)currentStrategyEmojisCount;
+ (id)recentEmojisWithCount:(long long)arg0 useDefaultEmoticons:(BOOL)arg1;
+ (id)getPlaceholderWithUserModel:(id)arg0;
+ (id)getStaticSettingsEmojisWithDefaultData:(id)arg0;
+ (BOOL)canShowMessageViewWithContext:(id)arg0;
+ (id)getSettingEmojis:(long long)arg0;
+ (BOOL)canShowCommentWithContext:(id)arg0;
+ (BOOL)isCommentReverseViewWithContext:(id)arg0;
+ (BOOL)enableNewStrategy;
+ (id)getEmojisWithContext:(id)arg0 strategy:(long long)arg1 type:(unsigned long long)arg2;
+ (BOOL)enableShowEmojiBtn;
+ (BOOL)isFeedReverseForIMQuickReplyWithContext:(id)arg0;
+ (BOOL)enableStaticEmojiWhenShowingEmojiBtn;
+ (id)getRecentlyUsedEmojis;
+ (id)getStaticSettingsEmojis;
+ (void)setHasClickedDiggToShare:(BOOL)arg0 awemeModel:(id)arg1;
+ (id)getSettingEmojis:(long long)arg0 filterIcon:(id)arg1;
+ (id)emojis:(id)arg0 filterIcon:(id)arg1;
+ (id)getDataWithEmojiName:(id)arg0;
+ (id)recentEmojisWithCount:(long long)arg0;
+ (id)defaultEmojis;

@end
