//
//     Generated by private class-dump
//

@class NSArray, AWEVideoPublishViewModel;
@protocol ACCPublishMergeImageHelperProtocol;

@interface AWEPublishInfiniMergeImageStage : AWEPublishBaseStage {
    id<ACCPublishMergeImageHelperProtocol> _mergeImageHelper;
    AWEVideoPublishViewModel *_publishViewModel;
    NSArray *_results;
    struct CGSize { double width; double height; } _canvasSize;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) NSArray *results;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (retain, nonatomic) id<ACCPublishMergeImageHelperProtocol> mergeImageHelper;

- (id)publishViewModel;
- (void)setPublishViewModel:(id)arg0;
- (id)initWithPublishViewModel:(id)arg0;
- (id)mergeImageHelper;
- (void)setMergeImageHelper:(id)arg0;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)handleOriginImageWithProject:(id)arg0;
- (BOOL)shouldUseCacheForSingleImage;
- (BOOL)shouldUseCacheForImages;
- (id)itemModelForCache:(id)arg0;
- (void)callbackSucceedWithResults:(id)arg0;
- (void)callbackFaild;
- (void)getProcesseImageWithCompletion:(id /* block */)arg0;
- (void)run;
- (void).cxx_destruct;
- (void)setResults:(id)arg0;
- (id)results;
- (void)setCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })canvasSize;
- (void)updateProgress:(double)arg0;

@end
