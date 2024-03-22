//
//     Generated by private class-dump
//

@class IESECSKUBottomViewModel, IESECSKUDetailContext, IESECGoodsSoldOutModel;
@protocol IESECSKUBottomViewDelegate;

@protocol IESECSKUBottomViewProtocol <NSObject>

@property (retain, nonatomic) IESECSKUBottomViewModel *viewModel;
@property (retain, nonatomic) IESECGoodsSoldOutModel *soldOutModel;
@property (weak, nonatomic) id<IESECSKUBottomViewDelegate> delegate;
@property (weak, nonatomic) IESECSKUDetailContext *detailContext;

- (id)detailContext;
- (void)setDetailContext:(id)arg0;
- (id)soldOutModel;
- (void)updateSoldOutInfo:(id)arg0;
- (void)setSoldOutModel:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (double)viewHeight;
- (void)reloadView;

@end
