//
//     Generated by private class-dump
//

@class NSString, UIView, NLEInterface_OC;

@interface CECMCEditServiceImpl : NSObject <AFDMCEditService> {
    NSString *_currentBrushSlodId;
    UIView *_videoPreview;
    NLEInterface_OC *_nleSession;
}

@property (retain, nonatomic) NLEInterface_OC *nleSession;
@property (copy, nonatomic) NSString *currentBrushSlodId;
@property (weak, nonatomic) UIView *videoPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getProcessedPreviewImageAtTime:(double)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 compeletion:(id /* block */)arg2;
- (void)resetPlayerWithView:(id)arg0;
- (id)nleEditSession;
- (id)nleSession;
- (void)afterProcessedBrushImageWithCompletion:(id /* block */)arg0;
- (id)currentBrushSlodId;
- (void)exportVideoWithCompletion:(id /* block */)arg0;
- (BOOL)isPreviewProcessedWithPainted;
- (void)setCurrentBrushSlodId:(id)arg0;
- (id)videoPreview;
- (void)setVideoPreview:(id)arg0;
- (void)setNleSession:(id)arg0;
- (void).cxx_destruct;
- (void)setSession:(id)arg0;
- (id)initWithServiceProvider:(id)arg0;

@end