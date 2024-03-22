//
//     Generated by private class-dump
//

@class NSString, PuzzleHybridContainer;

@interface IESGCPExplainCardHybridViewPool : NSObject <IESHYHybridViewLifecycleProtocol, IESGCPExplainCardHybridViewInterface> {
    BOOL _hybridViewIsEmpty;
    PuzzleHybridContainer *_hybridView;
    id /* block */ _firstScreenCallback;
    id /* block */ _loadFailedCallback;
    struct CGSize { double width; double height; } _hybridViewContentSize;
}

@property (retain, nonatomic) PuzzleHybridContainer *hybridView;
@property (nonatomic) BOOL hybridViewIsEmpty;
@property (nonatomic) struct CGSize { double width; double height; } hybridViewContentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (copy, nonatomic) id /* block */ firstScreenCallback;
@property (copy, nonatomic) id /* block */ loadFailedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)viewDidFirstScreen;
- (void)viewDidLoadFailedWithUrl:(id)arg0 error:(id)arg1;
- (id)hybridView;
- (void)setHybridView:(id)arg0;
- (BOOL)hybridViewReuseEnable;
- (struct CGSize { double x0; double x1; })hybridViewContentSize;
- (void)remakeHybridViewConstraintWithSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)hybridViewIsEmpty;
- (void)setHybridViewIsEmpty:(BOOL)arg0;
- (id)getHybridViewWithURL:(id)arg0 initialData:(id)arg1 diContext:(id)arg2 parentView:(id)arg3 isReuse:(BOOL *)arg4;
- (void)destroyHybridViewIfNeed:(id)arg0;
- (void)setFirstScreenCallback:(id /* block */)arg0;
- (void)setLoadFailedCallback:(id /* block */)arg0;
- (id /* block */)firstScreenCallback;
- (id /* block */)loadFailedCallback;
- (void)setHybridViewContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)preloadHybridViewIfNeed;
- (void)removeCurrentHybridView;
- (struct CGSize { double x0; double x1; })containerSize;
- (void).cxx_destruct;

@end