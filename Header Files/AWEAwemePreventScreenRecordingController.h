//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAwemePreventScreenRecordingController : AWEAwemeNewDetailBaseController <AWEFeedPreventScreenRecordControllerProtocol> {
    BOOL _isDisappear;
    BOOL _isShowingToast;
}

@property (nonatomic) BOOL isDisappear;
@property (nonatomic) BOOL isShowingToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willPlay;
- (BOOL)shouldPreventScreenRecord;
- (void)screenCapturedDidChange:(id)arg0;
- (void)popupToastIfNeeded;
- (BOOL)isPaidMixScreenRecording;
- (void)setIsDisappear:(BOOL)arg0;
- (BOOL)isShowingToast;
- (BOOL)isDisappear;
- (void)setIsShowingToast:(BOOL)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;

@end
