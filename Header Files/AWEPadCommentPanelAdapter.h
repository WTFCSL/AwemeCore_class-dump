//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPadCommentPanelAdapter : HTSService <AWEPadCommentPanelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)Enable;

- (void)setCurrentScrollView:(id)arg0;
- (id)sideBarPanel;
- (BOOL)enablePadCommentPanel:(id)arg0;
- (void)viewController_viewDidDisappear:(id)arg0;
- (void)viewController_viewDidAppear:(id)arg0;
- (void)registerScrollView:(id)arg0 topContainerView:(id)arg1 UIViewController:(id)arg2 inScene:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg0 withViewController:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0 withViewController:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 withViewController:(id)arg2;
- (double)commentScreenPercent;
- (BOOL)supportPadCommentSplit:(id)arg0;
- (BOOL)isShowing;

@end
