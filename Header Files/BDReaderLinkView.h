//
//     Generated by private class-dump
//

@class UIColor;
@protocol BDReaderLinkViewDelegate;

@interface BDReaderLinkView : UIView {
    UIColor *_itemBgColor;
    id<BDReaderLinkViewDelegate> _delegate;
}

@property (retain, nonatomic) UIColor *itemBgColor;
@property (weak, nonatomic) id<BDReaderLinkViewDelegate> delegate;

- (id)itemBgColor;
- (void)addItem:(id)arg0 selectRects:(id)arg1;
- (void)setItemBgColor:(id)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (void)removeAllItems;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
