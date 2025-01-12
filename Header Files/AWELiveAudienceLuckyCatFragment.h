//
//     Generated by private class-dump
//

@class UIImageView, NSString;
@protocol IESLiveCompoundSubscription;

@interface AWELiveAudienceLuckyCatFragment : IESLiveRoomComponent <IESLiveRoomLuckyCatTimingActions, HTSLiveRoomRemoteActions, IESLiveRoomLuckyCatAnimationService> {
    id<IESLiveCompoundSubscription> _disposable;
    UIImageView *_imageView;
}

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedTaskGuideDOUYINLiteAdapterClass;

- (void)didSetAttachingDIContext;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)aAWEFeedTaskGuideDOUYINLiteAdapter;
- (void)componentBindService;
- (void)componentUnmount;
- (void)didCloseLiveRoomWithDuration:(double)arg0;
- (BOOL)shouldShowGuideAnimation;
- (void)luckyCat_audience_exit_room;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (void)setupActions;

@end
