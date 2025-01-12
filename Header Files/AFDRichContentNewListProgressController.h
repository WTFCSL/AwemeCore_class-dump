//
//     Generated by private class-dump
//

@interface AFDRichContentNewListProgressController : NSObject <AFDVideoProgressInteractionManagerDelegate, AFDAlbumPreviewInteractionManagerDelegate, AFDProgressInteractionHotZoneManagerDelegate, AWEStoryProgressContainerViewDelegate, AFDRichContainerProgressControllerProtocol> {
    void /* unknown type, empty encoding */ isAppear;
    void /* unknown type, empty encoding */ isDisplaying;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ paginatedProgressView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hotZoneManager;
    void /* unknown type, empty encoding */ albumPreviewInteractionManager;
    void /* unknown type, empty encoding */ draggableType;
    void /* unknown type, empty encoding */ $__lazy_storage_$_videoProgressInteractionManager;
}

- (BOOL)canPlayerPlayAfterTouch;
- (void)playStoryAlbumWithProgressPercentage:(double)arg0;
- (void)playAlbumWithProgressPercentage:(double)arg0;
- (void)pauseAlbumTimer:(BOOL)arg0;
- (void)touchActionCancelled;
- (BOOL)isInPinchView;
- (void)didSelectAlbumPreviewItemAtIndex:(long long)arg0;
- (void)didScrollToAlbumPreviewItemFromIndex:(long long)arg0 toIndex:(long long)arg1 imageModel:(id)arg2;
- (id)placeholderImageForAlbumAtIndex:(long long)arg0;
- (void)setUpVideoController:(id)arg0 model:(id)arg1;
- (id)previewBackgroundColor:(id)arg0;
- (BOOL)shouldRecognizeWindowGesture;
- (BOOL)isHitFriendsProgressBarHotZoneOptimization;
- (BOOL)viewIsAppear;
- (BOOL)shouldAssignMaskWindowDelegate;
- (id)progressView;
- (id)window;
- (void)scrollToIndex:(long long)arg0;
- (void)progressContainerViewTouchEnded;
- (void)progressContainerViewValueChangedWithOffsetX:(double)arg0;
- (void)swipeToLastStory;
- (void)swipeToNextStory;
- (void)progressContainerViewTouchBegan;
- (id)accessibilityLabels;
- (BOOL)progressContainerShouldBeginGestureRecognizer;
- (BOOL)shouldShowProgress;
- (void)selectedDownloadImageIndexWithNotification:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
