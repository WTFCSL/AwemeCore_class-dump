//
//     Generated by private class-dump
//

@interface AWECommentSwiftImpl.CommentMediaFeedCellViewController : UIViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ playInteractionViewController;
    void /* unknown type, empty encoding */ isPureMode;
    void /* unknown type, empty encoding */ isSwitchPureModeNextDidEndZooming;
    void /* unknown type, empty encoding */ lastZoomScale;
    void /* unknown type, empty encoding */ needTrackDoubleTapToZoom;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_publishTag;
    void /* unknown type, empty encoding */ singleTap;
    void /* unknown type, empty encoding */ doubleTap;
    void /* unknown type, empty encoding */ gradientBackView;
    void /* unknown type, empty encoding */ topGradientView;
    void /* unknown type, empty encoding */ bottomGradientView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isMediaFeedSupportInteraction;
    void /* unknown type, empty encoding */ currentIndexInMultiImageList;
    void /* unknown type, empty encoding */ hasInputView;
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ referString;
    void /* unknown type, empty encoding */ enterMethod;
    void /* unknown type, empty encoding */ parentVC;
}

- (void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(double)arg2;
- (id)viewForZoomingInScrollView:(id)arg0;
- (void)scrollViewDidZoom:(id)arg0;
- (void)actionForSingleTapWithGes:(id)arg0;
- (void)actionForDoubleTapWithGes:(id)arg0;
- (void)doubleTapToZoomWithGes:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (id)initWithCoder:(id)arg0;
- (void)viewDidLoad;

@end
