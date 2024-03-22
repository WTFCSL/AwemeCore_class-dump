//
//     Generated by private class-dump
//

@class AWEPOISkeletonViewModel, UIView;

@interface AWEPOISkeletonView : UIView {
    UIView *_contentView;
    AWEPOISkeletonViewModel *_vm;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEPOISkeletonViewModel *vm;

+ (id)skeletonViewWithRawData:(id)arg0 delegate:(id)arg1 trackParams:(id)arg2;

- (void)setupWithModel:(id)arg0;
- (void)hideSkeletonView;
- (id)vm;
- (void)setVm:(id)arg0;
- (void)showSkeletonOnView:(id)arg0;
- (void).cxx_destruct;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end