//
//     Generated by private class-dump
//

@class NSTimer, IESLiveImageView, NSObject;
@protocol OS_dispatch_queue, IESLiveDiggViewFactory;

@interface AWELiveEnterGuideLikeView : UIView {
    IESLiveImageView *_iconImageView;
    id<IESLiveDiggViewFactory> _diggViewFactory;
    NSTimer *_diggTimer;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) IESLiveImageView *iconImageView;
@property (retain, nonatomic) id<IESLiveDiggViewFactory> diggViewFactory;
@property (retain, nonatomic) NSTimer *diggTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (void)startShowDigg;
- (id)diggViewFactory;
- (void)checkIfDigg;
- (void)setDiggTimer:(id)arg0;
- (void)showDigg;
- (id)getProperDiggView:(id)arg0 ownDigg:(BOOL)arg1 animationDuration:(double)arg2;
- (void)loadImageWithComplete:(id /* block */)arg0;
- (id)getimageFromLocalBundleWithIndex:(long long)arg0;
- (void)updateDiggStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)closeShowDigg;
- (void)setDiggViewFactory:(id)arg0;
- (id)diggTimer;
- (void)invalidateTimer;
- (void)setWorkQueue:(id)arg0;
- (id)workQueue;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;

@end
