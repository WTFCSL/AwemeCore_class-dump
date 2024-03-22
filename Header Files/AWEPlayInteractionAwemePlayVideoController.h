//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEAwemePlayInteractionPanelDelegate;

@interface AWEPlayInteractionAwemePlayVideoController : AWEPlayInteractionBaseController <AWEPlayInteractionPlayerLifeCycleProtocol>

@property (readonly, nonatomic) id<AWEAwemePlayInteractionPanelDelegate> panelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayerWillLoopPlaying:(id)arg0;
- (void)onPlayerPlay:(id)arg0 ifPlay:(BOOL)arg1;
- (void)updateFestivalButtons;
- (void)handleFestivalImagesCompletion:(id /* block */)arg0;
- (void)handleFestivalIconChange;
- (BOOL)isVideoInFestivalHashtag;
- (BOOL)isCorrectVideoViewController;
- (id)panelController;

@end