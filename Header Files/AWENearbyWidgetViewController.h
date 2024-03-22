//
//     Generated by private class-dump
//

@class AWEAwemeModel, AWENearbyWidgetViewModel, AWENearbyWidgetView;

@interface AWENearbyWidgetViewController : UIViewController {
    BOOL _needChangeWidgetStateWithDelay;
    BOOL _isFirstExpose;
    BOOL _isSkylightFirstClose;
    AWENearbyWidgetViewModel *_viewModel;
    AWENearbyWidgetView *_widgetView;
    unsigned long long _widgetType;
    AWEAwemeModel *_currentAweme;
    long long _pageType;
    long long _feedType;
}

@property (retain, nonatomic) AWENearbyWidgetView *widgetView;
@property (nonatomic) unsigned long long widgetType;
@property (nonatomic) BOOL needChangeWidgetStateWithDelay;
@property (nonatomic) BOOL isFirstExpose;
@property (nonatomic) BOOL isSkylightFirstClose;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (nonatomic) long long pageType;
@property (nonatomic) long long feedType;
@property (retain, nonatomic) AWENearbyWidgetViewModel *viewModel;

- (void)dismissWithAnimated:(BOOL)arg0;
- (id)currentAweme;
- (void)setupBinding;
- (void)setCurrentAweme:(id)arg0;
- (void)feedTabelDidEndScroll:(id)arg0;
- (void)expandWidgetIfNeededWithAnimated:(BOOL)arg0 delay:(double)arg1;
- (id)initWithWidgetType:(unsigned long long)arg0 pageType:(long long)arg1 feedType:(long long)arg2;
- (void)foldWidgetIfNeededWithAnimated:(BOOL)arg0 delay:(double)arg1;
- (void)configWidgetWithModel:(id)arg0;
- (void)didSkylightClose;
- (void)hideWidgetWithAnimation;
- (void)showWidgetWithAnimation;
- (void)didChangePlaybackStateWithAction:(long long)arg0 awemeModel:(id)arg1 isSkylightOpening:(BOOL)arg2;
- (BOOL)isFirstExpose;
- (void)__jumpToUrlString:(id)arg0 extraParams:(id)arg1;
- (BOOL)isSkylightFirstClose;
- (void)setIsSkylightFirstClose:(BOOL)arg0;
- (void)hideWidgetWithAnimated:(BOOL)arg0;
- (BOOL)needChangeWidgetStateWithDelay;
- (void)setNeedChangeWidgetStateWithDelay:(BOOL)arg0;
- (void)__expandWidgetWithAnimated:(id)arg0;
- (void)__foldWidgetWithAnimated:(id)arg0;
- (void)setIsFirstExpose:(BOOL)arg0;
- (long long)pageType;
- (id)init;
- (long long)feedType;
- (void)setFeedType:(long long)arg0;
- (void).cxx_destruct;
- (id)widgetView;
- (unsigned long long)widgetType;
- (void)setViewModel:(id)arg0;
- (void)setWidgetType:(unsigned long long)arg0;
- (id)viewModel;
- (void)setPageType:(long long)arg0;
- (void)setWidgetView:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)addObserver;
- (void)setupUI;

@end
