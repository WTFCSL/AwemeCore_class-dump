//
//     Generated by private class-dump
//

@class UIViewController, UIView;

@interface CJPayDataSecurityModel : NSObject {
    BOOL _isNeedDataSecurity;
    UIViewController *_sourceVC;
    UIView *_dimView;
}

@property (nonatomic) BOOL isNeedDataSecurity;
@property (weak, nonatomic) UIViewController *sourceVC;
@property (weak, nonatomic) UIView *dimView;

+ (id)shared;

- (void)setSourceVC:(id)arg0;
- (id)sourceVC;
- (void)bindViewControllerToModel:(id)arg0;
- (void)setIsNeedDataSecurity:(BOOL)arg0;
- (void)p_addBlurview:(id)arg0;
- (void)p_clearBlurView:(id)arg0;
- (void)p_blurV2:(id)arg0;
- (void)p_blurImage:(id)arg0;
- (void)p_clearDimView;
- (BOOL)cj_hasCJPayVC:(id)arg0;
- (void)p_bindDimView:(id)arg0;
- (BOOL)isNeedDataSecurity;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dimView;
- (void)setDimView:(id)arg0;

@end
