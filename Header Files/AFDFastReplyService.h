//
//     Generated by private class-dump
//

@class NSString;

@interface AFDFastReplyService : HTSService <AFDFastReplyService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fastReplyTriggerRule;
- (BOOL)isFastCommentDormancyEnable;
- (BOOL)isDormantWithAweme:(id)arg0;
- (void)addCountWithAweme:(id)arg0;
- (void)resetWithAweme:(id)arg0;
- (id)refactorScenes;
- (BOOL)refactorEnabled;
- (BOOL)refactorOptimizationEnabled;
- (id)fastReplyViewWithMaxWidth:(double)arg0 avatarURL:(id)arg1 placeholder:(id)arg2 emojis:(id)arg3 needIMEmojiBtn:(BOOL)arg4;
- (Class)fastReplyStrategyManager;
- (id)fastReplyInputViewMode;
- (Class)fastReplyStrategyUtils;
- (void)registerFastReplyItem:(id /* block */)arg0;
- (id)fullScreenEmojiAnimationFromImage:(id)arg0;
- (id)inputViewContainerWithInputViewMode:(id)arg0 context:(id)arg1 viewController:(id)arg2;

@end
