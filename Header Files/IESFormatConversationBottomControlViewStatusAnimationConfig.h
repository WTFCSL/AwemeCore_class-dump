//
//     Generated by private class-dump
//

@class NSString;

@interface IESFormatConversationBottomControlViewStatusAnimationConfig : NSObject {
    NSString *_URL;
    long long _loopCount;
    id /* block */ _loadCompletion;
    id /* block */ _animationCompletion;
}

@property (copy, nonatomic) NSString *URL;
@property (nonatomic) long long loopCount;
@property (copy, nonatomic) id /* block */ loadCompletion;
@property (copy, nonatomic) id /* block */ animationCompletion;

+ (id)userFinishSpeakingTransitionAnimationURL;
+ (id)userWakeUpMicTransitionAnimationURL;
+ (id)userStartSpeakingTransitionAnimationURL;
+ (id)userSpeakingLoopAnimationURL;
+ (id)userFinishSpeakingByRespeakAnimationURL;
+ (id)formatListingToThinkingAnimationURL;
+ (id)formatThinkingAnimationURL;
+ (id)formatSpeakingAnimationURL;

- (void).cxx_destruct;
- (void)setURL:(id)arg0;
- (id /* block */)animationCompletion;
- (id)URL;
- (void)setAnimationCompletion:(id /* block */)arg0;
- (long long)loopCount;
- (id /* block */)loadCompletion;
- (void)setLoadCompletion:(id /* block */)arg0;
- (void)setLoopCount:(long long)arg0;

@end
