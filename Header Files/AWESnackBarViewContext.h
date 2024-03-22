//
//     Generated by private class-dump
//

@class AWESnackBarView, NSString, UIImage, UIViewController;

@interface AWESnackBarViewContext : NSObject {
    BOOL _customDismissAction;
    BOOL _isFirstLevelPage;
    BOOL _actionBtnImageOnRight;
    UIImage *_imageName;
    double _displayDuration;
    NSString *_content;
    NSString *_actionBtnTitle;
    UIImage *_actionBtnImage;
    id /* block */ _actionBtnPressBlock;
    id /* block */ _dismissBlock;
    UIViewController *_containerVC;
    AWESnackBarView *_bodyView;
    struct CGSize { double width; double height; } _imageSize;
}

@property (retain, nonatomic) UIImage *imageName;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double displayDuration;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *actionBtnTitle;
@property (retain, nonatomic) UIImage *actionBtnImage;
@property (copy, nonatomic) id /* block */ actionBtnPressBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UIViewController *containerVC;
@property (retain, nonatomic) AWESnackBarView *bodyView;
@property (nonatomic) BOOL customDismissAction;
@property (nonatomic) BOOL isFirstLevelPage;
@property (nonatomic) BOOL actionBtnImageOnRight;

+ (id)instanceWithBlock:(id /* block */)arg0;

- (void)setContainerVC:(id)arg0;
- (id)containerVC;
- (BOOL)isFirstLevelPage;
- (void)setDisplayDuration:(double)arg0;
- (double)displayDuration;
- (void)setIsFirstLevelPage:(BOOL)arg0;
- (void)setActionBtnImageOnRight:(BOOL)arg0;
- (void)setActionBtnImage:(id)arg0;
- (void)setActionBtnTitle:(id)arg0;
- (id)actionBtnTitle;
- (id)actionBtnImage;
- (BOOL)actionBtnImageOnRight;
- (BOOL)customDismissAction;
- (void)setCustomDismissAction:(BOOL)arg0;
- (id /* block */)actionBtnPressBlock;
- (void)setActionBtnPressBlock:(id /* block */)arg0;
- (id)init;
- (struct CGSize { double x0; double x1; })imageSize;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (id)content;
- (id)initWithBlock:(id /* block */)arg0;
- (void)setContent:(id)arg0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (id)bodyView;
- (void)setBodyView:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
