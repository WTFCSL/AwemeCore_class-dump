//
//     Generated by private class-dump
//

@class IESECSKUCouponViewModel;
@protocol IESECSKUCouponSectionControllerDelegate;

@interface IESECSKUCouponSectionController : IGListSectionController {
    id<IESECSKUCouponSectionControllerDelegate> _delegate;
    IESECSKUCouponViewModel *_viewModel;
}

@property (retain, nonatomic) IESECSKUCouponViewModel *viewModel;
@property (weak, nonatomic) id<IESECSKUCouponSectionControllerDelegate> delegate;

- (id)cellForItemAtIndex:(long long)arg0;
- (id)supportedElementKinds;
- (void)didUpdateToObject:(id)arg0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)didSelectItemAtIndex:(long long)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
