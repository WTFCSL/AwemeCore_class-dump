//
//     Generated by private class-dump
//

@class DitoGeneralContainerPageContext, UIViewController;
@protocol AWEPOIUGCRateContextProtocol;

@protocol AWEPOIDetailListAwemeUtilProtocol <NSObject>

@property (weak, nonatomic) UIViewController *detailViewController;
@property (weak, nonatomic) DitoGeneralContainerPageContext<AWEPOIUGCRateContextProtocol> *context;

- (void)bindStateAndAction;
- (void)recordCellTagWithVM:(id)arg0;
- (struct CGSize { double x0; double x1; })biserialContainerSize:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })biserialCellFrameWithVM:(id)arg0;
- (id)detailViewController;
- (void)setContext:(id)arg0;
- (id)context;
- (void)setDetailViewController:(id)arg0;

@end
