//
//     Generated by private class-dump
//

@class AWEPlayableWebViewPreloadManager, AWEAwemeModel;

@protocol AWEAdPlayableController <AWECrotocol, AWEViewControllerLifeCycle>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPlayableWebViewPreloadManager *preloadManager;

- (id)preloadManager;
- (BOOL)hasPlayableContainerShow;
- (BOOL)canHandleGestureInCell:(id)arg0;
- (id)initWithCellViewController:(id)arg0;
- (void)beforeRealReset;
- (void)setPreloadManager:(id)arg0;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (id)model;
- (void)play;
- (void)reset;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
