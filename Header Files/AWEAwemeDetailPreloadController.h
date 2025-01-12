//
//     Generated by private class-dump
//

@class NSString, UITableViewCell, UIViewController;
@protocol AWEAwemeContainerTableViewCellPreloadProtocol, AWEAwemeDetailPreloadControllerProtocol;

@interface AWEAwemeDetailPreloadController : NSObject <AWEAwemeDetailPreloadController> {
    BOOL _isCellPreloadingEnabled;
    BOOL _isLastDirectionSlideToBottom;
    double _cellPreloadDelay;
    long long _scheduledPreloadIndex;
    UITableViewCell<AWEAwemeContainerTableViewCellPreloadProtocol> *_willDisplayPreloadedCell;
    UIViewController<AWEAwemeDetailPreloadControllerProtocol> *_viewController;
    long long _needContinuousDirectionCount;
    long long _continuousDirectionCount;
    long long _currentCellPreloadCount;
    long long _cellPreloadDelayCount;
}

@property (nonatomic) double cellPreloadDelay;
@property (nonatomic) long long scheduledPreloadIndex;
@property (nonatomic) BOOL isCellPreloadingEnabled;
@property (weak, nonatomic) UITableViewCell<AWEAwemeContainerTableViewCellPreloadProtocol> *willDisplayPreloadedCell;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailPreloadControllerProtocol> *viewController;
@property (nonatomic) BOOL isLastDirectionSlideToBottom;
@property (nonatomic) long long needContinuousDirectionCount;
@property (nonatomic) long long continuousDirectionCount;
@property (nonatomic) long long currentCellPreloadCount;
@property (nonatomic) long long cellPreloadDelayCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)setIsLastDirectionSlideToBottom:(BOOL)arg0;
- (double)cellPreloadDelay;
- (void)setCellPreloadDelay:(double)arg0;
- (void)setIsCellPreloadingEnabled:(BOOL)arg0;
- (void)setNeedContinuousDirectionCount:(long long)arg0;
- (long long)cellPreloadDelayCount;
- (void)setCellPreloadDelayCount:(long long)arg0;
- (BOOL)isCellPreloadingEnabled;
- (void)cancelCellPreloading;
- (void)setWillDisplayPreloadedCell:(id)arg0;
- (void)setScheduledPreloadIndex:(long long)arg0;
- (void)preloadNextCellIfNeeded;
- (long long)currentCellPreloadCount;
- (void)setCurrentCellPreloadCount:(long long)arg0;
- (long long)nextPreloadedIndex;
- (long long)scheduledPreloadIndex;
- (long long)needContinuousDirectionCount;
- (long long)continuousDirectionCount;
- (BOOL)isLastDirectionSlideToBottom;
- (void)setupCellPreload;
- (void)scheduleCellPreloading;
- (id)fetchPreloadedCellForRowWithModel:(id)arg0 atIndexPath:(id)arg1;
- (void)setContinuousDirectionCount:(long long)arg0;
- (void)controllerViewDidLoad;
- (void)controllerFinishTransition:(BOOL)arg0;
- (void)prepareForPadViewTransitionAnimated;
- (id)willDisplayPreloadedCell;
- (id)cellForRowAtIndexPath:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithViewController:(id)arg0;
- (void)play;
- (void)pause;
- (id)preloadedCell;

@end
