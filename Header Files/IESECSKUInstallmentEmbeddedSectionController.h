//
//     Generated by private class-dump
//

@class IESECSKUInstallmentViewModel;
@protocol IESECSKUInstallmentEmbeddedSectionControllerDelegate;

@interface IESECSKUInstallmentEmbeddedSectionController : IGListSectionController {
    id<IESECSKUInstallmentEmbeddedSectionControllerDelegate> _delegate;
    IESECSKUInstallmentViewModel *_viewModel;
}

@property (retain, nonatomic) IESECSKUInstallmentViewModel *viewModel;
@property (weak, nonatomic) id<IESECSKUInstallmentEmbeddedSectionControllerDelegate> delegate;

- (id)cellForItemAtIndex:(long long)arg0;
- (void)didUpdateToObject:(id)arg0;
- (long long)numberOfItems;
- (id)init;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (double)minimumLineSpacing;
- (void)didSelectItemAtIndex:(long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
