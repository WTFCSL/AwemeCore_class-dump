//
//     Generated by private class-dump
//

@class AWEFeedVideoSafetyCheckHandler;

@interface AWEDetailSafetyCheckVideoController : AWEAwemeNewDetailBaseController {
    AWEFeedVideoSafetyCheckHandler *_safetyCheckHandler;
}

@property (retain, nonatomic) AWEFeedVideoSafetyCheckHandler *safetyCheckHandler;

- (void)handleVideoSafetyPreCheckNotification:(id)arg0;
- (id)safetyCheckHandler;
- (void)setSafetyCheckHandler:(id)arg0;
- (void)handleVideoSafetyPreCheckWithResults:(id)arg0 error:(id)arg1 isCurrentModel:(BOOL)arg2;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end