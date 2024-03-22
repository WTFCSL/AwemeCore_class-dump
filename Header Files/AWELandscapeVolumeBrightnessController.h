//
//     Generated by private class-dump
//

@class NSString, AWELandscapeVolumeBrightnessControlView;

@interface AWELandscapeVolumeBrightnessController : AWELandscapeInteractionBaseController <AWELandscapeVolumeBrightnessDelegate> {
    AWELandscapeVolumeBrightnessControlView *_volumeBrightnessView;
}

@property (retain, nonatomic) AWELandscapeVolumeBrightnessControlView *volumeBrightnessView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldResponseGestureRecognizer:(id)arg0;
- (BOOL)handleResponseGestureRecognizer:(id)arg0;
- (BOOL)shouldReceiveGestureRecognizer:(id)arg0 touch:(id)arg1;
- (void)willExitLandscape;
- (long long)interactionViewState;
- (id)volumeBrightnessView;
- (void)setVolumeBrightnessView:(id)arg0;
- (void)updateState:(long long)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (BOOL)isInteracting;
- (BOOL)isInteractive;
- (void)reset;
- (void)viewDidLoad;

@end
