//
//     Generated by private class-dump
//

@class BDNovelWebContainerView, NSString, BDNovelMultipleWebContentModel, BDNovelMultipleWebContainerView;

@interface BDNovelMultipleWebContentView : UIView <BDNovelWebContainerViewDelegate> {
    BOOL _isLoadingDarkMode;
    BOOL _isNextView;
    BOOL _isFinishLoad;
    BOOL _needFireEnterEvent;
    BOOL _isInstalled;
    BDNovelMultipleWebContainerView *_parentView;
    BDNovelWebContainerView *_view;
    BDNovelMultipleWebContentModel *_model;
    long long _from;
    NSString *_originScheme;
}

@property (nonatomic) BOOL isNextView;
@property (nonatomic) BOOL isFinishLoad;
@property (nonatomic) BOOL needFireEnterEvent;
@property (copy, nonatomic) NSString *originScheme;
@property (nonatomic) BOOL isInstalled;
@property (weak, nonatomic) BDNovelMultipleWebContainerView *parentView;
@property (retain, nonatomic) BDNovelWebContainerView *view;
@property (retain, nonatomic) BDNovelMultipleWebContentModel *model;
@property (nonatomic) long long from;
@property (nonatomic) BOOL isLoadingDarkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFinishLoad;
- (void)setIsFinishLoad:(BOOL)arg0;
- (void)webviewWillFetch:(id)arg0;
- (void)firePullDownEvent;
- (void)setNeedFireEnterEvent:(BOOL)arg0;
- (void)installBridge;
- (void)setIsNextView:(BOOL)arg0;
- (void)fireEnterCurrentEvent;
- (BOOL)needFireEnterEvent;
- (void)setupPreload;
- (void)setContentView:(id)arg0 model:(id)arg1;
- (void)makeCurrentView;
- (void)makeNextView;
- (void)enterCurrentWithFrom:(long long)arg0;
- (void)setIsLoadingDarkMode:(BOOL)arg0;
- (BOOL)isLoadingDarkMode;
- (BOOL)isNextView;
- (id)originScheme;
- (void)setOriginScheme:(id)arg0;
- (void)fireLeaveCurrentEvent;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (BOOL)isInstalled;
- (void)setIsInstalled:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setView:(id)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)view;
- (void)webViewDidFinishLoad:(id)arg0;
- (id)parentView;
- (void)setParentView:(id)arg0;
- (long long)from;
- (void)setFrom:(long long)arg0;

@end
