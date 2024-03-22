//
//     Generated by private class-dump
//

@class IESECSliceXElementViewContext, IESECSliceXFlex, NSString, NSValue, IESECSliceXElement, NSMutableArray, UIView;

@interface IESECSliceXScrollElementView : IESECSliceXBaseScrollView <IESECSliceXElementView> {
    BOOL _needRecordContentOffset;
    NSValue *_needScrollToOffset;
    IESECSliceXElement *_element;
    NSMutableArray *_elementViews;
    UIView *_bgView;
    IESECSliceXElementViewContext *_context;
}

@property (retain, nonatomic) NSValue *needScrollToOffset;
@property (nonatomic) BOOL needRecordContentOffset;
@property (retain, nonatomic) IESECSliceXElement *element;
@property (retain, nonatomic) NSMutableArray *elementViews;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) IESECSliceXElementViewContext *context;
@property (readonly, nonatomic) IESECSliceXFlex *flex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)elementViews;
- (void)setupElementView;
- (BOOL)updateWithSliceXElement:(id)arg0 error:(id *)arg1;
- (void)setElementViews:(id)arg0;
- (BOOL)needRecordContentOffset;
- (void)setNeedRecordContentOffset:(BOOL)arg0;
- (id)needScrollToOffset;
- (void)setNeedScrollToOffset:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void).cxx_destruct;
- (void)setElement:(id)arg0;
- (void)setContext:(id)arg0;
- (id)element;
- (id)context;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg0;

@end
