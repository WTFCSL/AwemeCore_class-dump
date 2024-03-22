//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel;

@protocol ACCCanvasMakerProtocol <NSObject>

+ (void)configMusic:(id)arg0 publishModel:(id)arg1;
+ (void)updateWithPublishModel:(id)arg0 isPureSinglePhotoCanvas:(BOOL)arg1;

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ customerTransitioningSetting;
@property (copy, nonatomic) id /* block */ enableAnimated;
@property (nonatomic) BOOL isPureSinglePhotoCanvas;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setCustomerTransitioningSetting:(id /* block */)arg0;
- (id /* block */)customerTransitioningSetting;
- (id /* block */)enableAnimated;
- (void)setEnableAnimated:(id /* block */)arg0;
- (void)makeCanvasWithImage:(id)arg0 onCompletion:(id /* block */)arg1;
- (void)makeCanvasWithAssetModel:(id)arg0 completion:(id /* block */)arg1;
- (void)makeCanvasPublishModelWithAssetModel:(id)arg0 musicModel:(id)arg1 completion:(id /* block */)arg2;
- (void)makeCanvasWithImage:(id)arg0 done:(id /* block */)arg1;
- (void)configMusic:(id)arg0;
- (BOOL)isPureSinglePhotoCanvas;
- (void)setIsPureSinglePhotoCanvas:(BOOL)arg0;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg0;

@end
