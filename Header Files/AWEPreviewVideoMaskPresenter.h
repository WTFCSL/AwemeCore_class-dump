//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@interface AWEPreviewVideoMaskPresenter : AWEUnPaidVideoMaskPresenter {
    AWEAwemeModel *_currentModel;
}

@property (retain, nonatomic) AWEAwemeModel *currentModel;

+ (BOOL)shouldActiveWithData:(id)arg0 referString:(id)arg1 logExtra:(id)arg2;

- (BOOL)shouldShowEffectiveView;
- (BOOL)shouldShowViewWithPeriod:(double)arg0;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (BOOL)shouldCheckViewStatusWhenDisplay;
- (void).cxx_destruct;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end