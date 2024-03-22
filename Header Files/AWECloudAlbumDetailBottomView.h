//
//     Generated by private class-dump
//

@class AWECloudAlbumDetailBottomUploadView, AWECloudAlbumDetailBottomSelectView;

@interface AWECloudAlbumDetailBottomView : UIView {
    AWECloudAlbumDetailBottomSelectView *_selectView;
    AWECloudAlbumDetailBottomUploadView *_uploadView;
    double _contentHeight;
}

@property (readonly, nonatomic) double contentHeight;
@property (readonly, nonatomic) AWECloudAlbumDetailBottomSelectView *selectView;
@property (readonly, nonatomic) AWECloudAlbumDetailBottomUploadView *uploadView;

- (id)selectView;
- (id)uploadView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 contentHeight:(double)arg1;
- (void).cxx_destruct;
- (double)contentHeight;
- (void)setup;
- (void)updateStatus:(id)arg0;
- (void)updateProgress:(id)arg0;

@end