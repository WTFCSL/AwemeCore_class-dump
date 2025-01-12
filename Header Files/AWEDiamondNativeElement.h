//
//     Generated by private class-dump
//

@class NSString, UIViewController;
@protocol AWEDiamondNativeContainerDelegate;

@interface AWEDiamondNativeElement : AWEDiamondSingleElement {
    NSString *_containerType;
    UIViewController *_nativeVC;
    id<AWEDiamondNativeContainerDelegate> _nativeContainerDelegate;
}

@property (retain, nonatomic) UIViewController *nativeVC;
@property (weak, nonatomic) id<AWEDiamondNativeContainerDelegate> nativeContainerDelegate;
@property (copy, nonatomic) NSString *containerType;

+ (id)elementType;

- (double)originWidth;
- (double)originHeight;
- (void)loadViewWithCache:(id)arg0 delegate:(id)arg1;
- (void)__loadNativeView;
- (void)setNativeContainerDelegate:(id)arg0;
- (id)nativeContainerDelegate;
- (void)setNativeVC:(id)arg0;
- (id)nativeVC;
- (void).cxx_destruct;
- (void)loadView;
- (id)containerType;
- (void)setContainerType:(id)arg0;

@end
