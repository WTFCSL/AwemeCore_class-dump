//
//     Generated by private class-dump
//

@interface FlowKit.ImagePreviewViewController : FlowCommon.FlowBaseViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ originImage;
    void /* unknown type, empty encoding */ imageScrollView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ cancelButton;
    void /* unknown type, empty encoding */ doneButton;
    void /* unknown type, empty encoding */ maskLayer;
    void /* unknown type, empty encoding */ targetRatio;
}

- (void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(double)arg2;
- (id)viewForZoomingInScrollView:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)clickCancel;
- (void)clickDone;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (id)initWithCoder:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;

@end
