//
//     Generated by private class-dump
//

@class AWEPOIUgcBottomBarView, AWEPOIDetailNGUgcBottomBarComponentViewModel;

@interface AWEPOIDetailNGUgcBottomBarComponentView : DitoComponentView {
    BOOL _isShow;
    AWEPOIDetailNGUgcBottomBarComponentViewModel *_vm;
    AWEPOIUgcBottomBarView *_ugcBottomBar;
}

@property (weak, nonatomic) AWEPOIDetailNGUgcBottomBarComponentViewModel *vm;
@property (nonatomic) BOOL isShow;
@property (retain, nonatomic) AWEPOIUgcBottomBarView *ugcBottomBar;

- (BOOL)isShow;
- (void)setIsShow:(BOOL)arg0;
- (void)updateViewModel:(id)arg0;
- (id)vm;
- (void)setVm:(id)arg0;
- (void)bindActionAndState;
- (id)ugcBottomBar;
- (void)setUgcBottomBar:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ugcBarFrame;
- (void)onUgcBottomBarCommentClicked:(id)arg0;
- (void)onUgcBottomBarRecordClicked:(id)arg0;
- (void)onUgcBottomBarUploadImgClicked:(id)arg0;
- (void)showAnimationWithCompletion:(id /* block */)arg0;
- (void)sendAppearEvent;
- (void)hiddenAnimationWithCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end
