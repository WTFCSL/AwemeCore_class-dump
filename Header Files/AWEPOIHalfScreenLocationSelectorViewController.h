//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWESearchLocationViewController, UIView;

@interface AWEPOIHalfScreenLocationSelectorViewController : UIViewController {
    BOOL _animating;
    NSDictionary *_params;
    NSString *_poiID;
    id /* block */ _didDismissBlock;
    id /* block */ _poiIDDidChangBlock;
    UIView *_markView;
    UIView *_modalView;
    AWESearchLocationViewController *_searchLocationVC;
    UIView *_titleBar;
}

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ poiIDDidChangBlock;
@property (retain, nonatomic) UIView *markView;
@property (retain, nonatomic) UIView *modalView;
@property (retain, nonatomic) AWESearchLocationViewController *searchLocationVC;
@property (retain, nonatomic) UIView *titleBar;
@property (nonatomic) BOOL animating;

- (id /* block */)didDismissBlock;
- (void)setDidDismissBlock:(id /* block */)arg0;
- (id)poiID;
- (void)setPoiID:(id)arg0;
- (id)titleBar;
- (void)setTitleBar:(id)arg0;
- (id)initWithParams:(id)arg0 poiIDDidChangeBlock:(id /* block */)arg1 didDismissBlock:(id /* block */)arg2;
- (void)setPoiIDDidChangBlock:(id /* block */)arg0;
- (void)createMarkView;
- (void)createModalView;
- (void)createTitleBar;
- (void)createSearchLocationViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })markViewFrame;
- (void)setMarkView:(id)arg0;
- (id)markView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })modalViewFrame;
- (void)setModalView:(id)arg0;
- (void)panAction:(id)arg0;
- (id)modalView;
- (void)didSelectedPoi:(id)arg0;
- (void)setSearchLocationVC:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchLocationVCFrame;
- (id /* block */)poiIDDidChangBlock;
- (id)searchLocationVC;
- (void)modalWithCompletion:(id /* block */)arg0;
- (void)willMoveToParentViewController:(id)arg0;
- (void).cxx_destruct;
- (void)setAnimating:(BOOL)arg0;
- (id)params;
- (void)viewDidLoad;
- (void)dismissWithCompletion:(id /* block */)arg0;
- (BOOL)animating;
- (void)setParams:(id)arg0;
- (void)tapAction:(id)arg0;

@end
