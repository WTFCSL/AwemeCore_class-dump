//
//     Generated by private class-dump
//

@class AWEPreviewVideoMaskView, AWEAwemeModel;

@interface AWEDeviceOverMaskPresenter : AWEUnPaidVideoMaskPresenter {
    AWEAwemeModel *_currentModel;
    AWEPreviewVideoMaskView *_maskView;
}

@property (weak, nonatomic) AWEPreviewVideoMaskView *maskView;
@property (retain, nonatomic) AWEAwemeModel *currentModel;

+ (BOOL)shouldActiveWithData:(id)arg0 referString:(id)arg1 logExtra:(id)arg2;

- (void)configDetailView;
- (BOOL)shouldShowEffectiveView;
- (id)initWithView:(id)arg0 model:(id)arg1 referString:(id)arg2 logExtra:(id)arg3;
- (BOOL)shouldShowViewWithPeriod:(double)arg0;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (BOOL)shouldDisableProgress;
- (BOOL)shouldCheckViewStatus;
- (void).cxx_destruct;
- (id)maskView;
- (void)setMaskView:(id)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end
