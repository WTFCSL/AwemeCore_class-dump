//
//     Generated by private class-dump
//

@interface AWEAwemeSearchInnerVideoStatisticsController : AWEAwemeNewDetailBaseController {
    BOOL _shouldReportClickFirstFrameEvent;
}

@property (nonatomic) BOOL shouldReportClickFirstFrameEvent;

- (void)configCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2;
- (void)onScrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)setShouldReportClickFirstFrameEvent:(BOOL)arg0;
- (void)videoStartPlay;
- (void)trackClickFirstFrameEvent;
- (void)trackSlideFirstFrameEvent;
- (BOOL)shouldReportClickFirstFrameEvent;
- (BOOL)shouldAddSearchParamsInShareVideoTrack;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewDidLoad;

@end
