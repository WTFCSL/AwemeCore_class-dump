//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedPreventScreenRecordController : AWEBaseController <AWEFeedPreventScreenRecordControllerProtocol> {
    BOOL _isAppear;
}

@property (nonatomic) BOOL isAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (BOOL)shouldPreventScreenRecord;
- (void)beforeReturnFromPlay;
- (void)screenCapturedDidChange:(id)arg0;
- (void)popupToastIfNeeded;
- (BOOL)isPaidMixScreenRecording;
- (void)viewDidAppear:(BOOL)arg0;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewDidLoad;

@end
