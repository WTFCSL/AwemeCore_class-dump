//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStudioMusicListViewControllerBuilder : NSObject <AWEStudioMusicListViewControllerProtocol, ACCASSMusicListViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startMonitorWithContext:(id)arg0 logType:(id)arg1 data:(id)arg2;
- (void)bindContext:(id)arg0 logType:(id)arg1 data:(id)arg2;
- (void)finishMonitorWithContext:(id)arg0 logType:(id)arg1 data:(id)arg2;
- (id)createMusicBottomPlayerViewWithDelegate:(id)arg0;
- (Class)studioSingleMusicRecommendVideosTableCellClass;
- (id)initiaLStudioSingleMusicRecommenVideosTableViewCellWithReuseIdentifier:(id)arg0;
- (double)singleMusicRecommenVideosTableViewCellHeightWithModel:(id)arg0 isFirst:(BOOL)arg1;
- (id)createDynamicMusicCardProgresBarFooter:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initialProgressBarViewModel;
- (id)searchResponeParamsInfo:(id)arg0 requestStartTime:(id)arg1;
- (void)startScrollFpsMonitor;
- (void)endScrollFpsMonitor;

@end
