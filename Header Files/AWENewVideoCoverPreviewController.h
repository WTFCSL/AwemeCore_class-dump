//
//     Generated by private class-dump
//

@class AWENewVideoCoverPreviewView;

@interface AWENewVideoCoverPreviewController : UIViewController {
    AWENewVideoCoverPreviewView *_previewView;
}

@property (retain, nonatomic) AWENewVideoCoverPreviewView *previewView;

- (void)bottomViewDidSelectGalleryImage:(id)arg0;
- (void)updatePreviewAreaSize:(struct CGSize { double x0; double x1; })arg0 cutAreaSize:(struct CGSize { double x0; double x1; })arg1 previewFitCutAreaSize:(struct CGSize { double x0; double x1; })arg2 videoPreviewSize:(struct CGSize { double x0; double x1; })arg3 videoOriginSize:(struct CGSize { double x0; double x1; })arg4;
- (void).cxx_destruct;
- (void)setPreviewView:(id)arg0;
- (id)previewView;
- (void)viewDidLoad;
- (void)setupUI;

@end
