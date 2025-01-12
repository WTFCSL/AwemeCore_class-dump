//
//     Generated by private class-dump
//

@interface AWEFeedDoubleColumnDislikeViewModel : AWEDoubleColumnDislikeViewModel

+ (id)referString;
+ (id)enterMethod;
+ (id)commonParams:(id)arg0;
+ (id)logScenePrefix;
+ (id)businessParams:(id)arg0;
+ (void)requestRevokeFeedbackVideo:(id)arg0;
+ (void)trackRevokeFeedbackWithModel:(id)arg0 andFeedbackInfo:(id)arg1;

- (void)sendDislikeRequest:(id)arg0 extraInfo:(id)arg1;
- (void)recordDislikeModel:(id)arg0;
- (id)dislikeTextConfig;
- (id)liveDislikeArray:(id)arg0;
- (id)videoDislikeArray:(id)arg0;
- (id)liveFeedbackInfoArray:(id)arg0;
- (id)feedbackInfoArray:(id)arg0;
- (id)dislikeLongPressPanelConfig;
- (id)dislikeSectionData:(id)arg0;
- (id)feedbackSectionData:(id)arg0;
- (void)trackDislikeWithType:(id)arg0;

@end
