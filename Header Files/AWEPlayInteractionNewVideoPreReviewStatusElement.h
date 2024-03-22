//
//     Generated by private class-dump
//

@class NSString, AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionNewVideoPreReviewStatusElement : AWEPlayInteractionNewBottomElement {
    AWEAntiAddictedNoticeBarView *_antiAddictedNoticeBarView;
    NSString *_tips;
}

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *antiAddictedNoticeBarView;
@property (copy, nonatomic) NSString *tips;

- (void)initializeElement;
- (void)viewDidDisposed;
- (unsigned long long)elementVisibleType;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)layoutElementView;
- (BOOL)shouldAppearWithData:(id)arg0;
- (void)updateAntiAddictedNoticeBarView;
- (id)antiAddictedNoticeBarView;
- (void)setAntiAddictedNoticeBarView:(id)arg0;
- (void)trackPlaypageItemAuditBarIsDisplay:(BOOL)arg0;
- (id)tips;
- (void).cxx_destruct;
- (id)identifier;
- (void)setTips:(id)arg0;
- (void)reset;
- (void)viewDidLoad;

@end