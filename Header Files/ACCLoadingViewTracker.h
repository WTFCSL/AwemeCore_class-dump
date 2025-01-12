//
//     Generated by private class-dump
//

@class NSString;

@interface ACCLoadingViewTracker : NSObject <AWEUILoadingViewDelegate, AWEUITextLoadingViewDelegate, AWEUIProgressLoadingViewDelegate, DUXLoadingToastDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTracker;

- (void)DUXLoadingToastDidClosed:(id)arg0;
- (void)DUXLoadingToastDidStartAnimating:(id)arg0;
- (void)DUXLoadingToastDidStopAnimating:(id)arg0;
- (void)DUXToastDidShow:(id)arg0;
- (void)DUXToastWillHidden:(id)arg0;
- (void)DUXToastWillRemoved:(id)arg0;
- (void)progressLoadingViewDidStartAnimating:(id)arg0;
- (void)progressLoadingViewDidStopAnimating:(id)arg0;
- (void)progressLoadingViewDidClickCancel:(id)arg0;
- (void)progressLoadingViewWillHide:(id)arg0;
- (void)progressLoadingViewWillRemoved:(id)arg0;
- (void)loadingViewDidStartAnimating:(id)arg0;
- (void)loadingViewDidStopAnimating:(id)arg0;
- (void)loadingViewWillHidden:(id)arg0;
- (void)loadingViewWillRemoved:(id)arg0;
- (void)textLoadingViewDidStartAnimating:(id)arg0;
- (void)textLoadingViewDidStopAnimating:(id)arg0;
- (void)textLoadingViewWillHidden:(id)arg0;
- (void)textLoadingViewWillRemoved:(id)arg0;
- (void)_trackLoadingViewIfNeeded:(id)arg0;
- (void)trackLoadingwithScene:(long long)arg0 title:(id)arg1 msg:(id)arg2 action:(unsigned long long)arg3 duration:(double)arg4 extra:(id)arg5;
- (void)trackTextLoadingViewIfNeeded:(id)arg0 action:(unsigned long long)arg1;
- (void)_trackProgressLoadingViewIfNeeded:(id)arg0 action:(unsigned long long)arg1;
- (void)_trackDUXLoadingViewIfNeeded:(id)arg0 action:(unsigned long long)arg1;
- (void)observeLoadingView:(id)arg0 withScene:(long long)arg1;
- (void)observeTextLoadingView:(id)arg0 withScene:(long long)arg1;
- (void)observeProgressView:(id)arg0 withScene:(long long)arg1;
- (void)observeDUXLoadingView:(id)arg0 withScene:(long long)arg1;

@end
