//
//     Generated by private class-dump
//

@protocol AWELiveAudienceControllerDelegate <NSObject>

- (void)roomClosedWithFinishedViewController:(id)arg0;
- (void)roomUpdateWithAudienceViewController:(id)arg0;
- (void)roomShouldSrollEnable:(BOOL)arg0;
- (id)responderViewController;
- (void)viewWillTransition;
- (void)viewDidTransition;
- (void)viewWillBeginRotating;
- (void)viewDidEndRotating;

@optional

- (void)startToShowPipWithShowType:(unsigned long long)arg0;
- (void)roomDislikedByLongPress;
- (void)roomWillClosedWithType:(unsigned long long)arg0;
- (void)roomClosedWithType:(unsigned long long)arg0;

@end
