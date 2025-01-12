//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPlayInteractionBatManElement : AWEPlayInteractionLeftElement <AWEBatManEntranceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithModel:(id)arg0;

- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)viewController_viewWillAppear;
- (void)viewController_viewWillDisappear;
- (void)showBatManEnterenceIfNeeded:(BOOL)arg0;
- (void)hideBatManEntranceIfNeeded;
- (void)batManEntranceWillShow:(id)arg0;
- (void)batManEntranceCustomNormalEntrance:(id)arg0 normalEntranceView:(id)arg1;
- (void)reset;

@end
