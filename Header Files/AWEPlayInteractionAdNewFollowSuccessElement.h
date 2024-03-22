//
//     Generated by private class-dump
//

@class NSString, AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionAdNewFollowSuccessElement : AWEPlayInteractionNewBottomElement <AWEUserMessage> {
    AWEAntiAddictedNoticeBarView *_antiAddictedNoticeBarView;
}

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *antiAddictedNoticeBarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)initializeElement;
- (void)viewDidDisposed;
- (id)activateInfoWithData:(id)arg0;
- (BOOL)shouldAppearWithData:(id)arg0;
- (void)noticeTapped;
- (void)hideMutexTempElement:(id /* block */)arg0;
- (id)antiAddictedNoticeBarView;
- (void)setAntiAddictedNoticeBarView:(id)arg0;
- (void)showAntiAddictedNoticeBarView;
- (void)hideAntiAddictedNoticeBarView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;

@end
