//
//     Generated by private class-dump
//

@class NSString, PuzzleHybridContainer, IESECGoodsDetailLynxCardElement;
@protocol IESHYHybridViewLifecycleProtocol;

@interface IESECLLDCLynxCardView : UIView {
    PuzzleHybridContainer *_container;
    IESECGoodsDetailLynxCardElement *_element;
    id<IESHYHybridViewLifecycleProtocol> _delegate;
    NSString *_identifier;
}

@property (retain, nonatomic) PuzzleHybridContainer *container;
@property (retain, nonatomic) IESECGoodsDetailLynxCardElement *element;
@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> delegate;
@property (copy, nonatomic) NSString *identifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 element:(id)arg1 delegate:(id)arg2 identifier:(id)arg3 loadDelay:(BOOL)arg4;
- (void)reloadWithElement:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setElement:(id)arg0;
- (void)setContainer:(id)arg0;
- (void)load;
- (id)identifier;
- (id)element;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setIdentifier:(id)arg0;

@end
