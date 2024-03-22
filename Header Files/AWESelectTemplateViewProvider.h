//
//     Generated by private class-dump
//

@class UIViewController, UIView;

@interface AWESelectTemplateViewProvider : AWESceneViewProvider {
    BOOL _isCartoonFace;
    BOOL _needAdvanceTemplate;
    UIView *_playerContainer;
    UIViewController *_rootController;
}

@property (retain, nonatomic) UIView *playerContainer;
@property (nonatomic) BOOL isCartoonFace;
@property (weak, nonatomic) UIViewController *rootController;
@property (nonatomic) BOOL needAdvanceTemplate;

- (id)playerContainer;
- (void)setPlayerContainer:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxPlayerFrame;
- (double)changeTemplateFooterHeight;
- (double)changeTemplateViewHeight;
- (void)zoomOutToFullScreen;
- (double)selectTemplateViewHeight;
- (double)selectTemplateFooterHeight;
- (id)initWithRootController:(id)arg0;
- (void)setNeedAdvanceTemplate:(BOOL)arg0;
- (void)setIsCartoonFace:(BOOL)arg0;
- (BOOL)isCartoonFace;
- (BOOL)needAdvanceTemplate;
- (void).cxx_destruct;
- (void)setRootController:(id)arg0;
- (id)rootController;
- (void)zoomIn;

@end
