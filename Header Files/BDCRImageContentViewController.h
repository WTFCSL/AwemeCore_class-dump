//
//     Generated by private class-dump
//

@class NSArray, UIImageView, BDCRImagePageInfo, UIView;

@interface BDCRImageContentViewController : BDCRContentViewController {
    unsigned long long _pageMode;
    NSArray *_insertedViewObjs;
    UIImageView *_imageView;
    UIView *_imageCoverView;
}

@property (copy, nonatomic) NSArray *insertedViewObjs;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *imageCoverView;
@property (nonatomic) unsigned long long pageMode;
@property (readonly, nonatomic) BDCRImagePageInfo *imagePageInfo;

- (void)bdcr_readerInsertedViewControllerThemeConfigChange:(id)arg0;
- (void)bdcr_readerInsertedViewControllerRefreshCurrentPage;
- (void)setImageCoverView:(id)arg0;
- (id)imageCoverView;
- (void)loadImg:(id /* block */)arg0;
- (void)removeInsertViewObjects;
- (id)imagePageInfo;
- (unsigned long long)pageMode;
- (void)setPageMode:(unsigned long long)arg0;
- (void)loadInsertViews;
- (id)insertedViewObjs;
- (void)setInsertedViewObjs:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (void)reloadData;
- (void)setImageView:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;

@end
