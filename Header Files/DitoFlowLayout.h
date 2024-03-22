//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface DitoFlowLayout : DitoContainerLayout {
    double _maxHeightLine;
    NSMutableArray *_itemList;
    NSMutableArray *_lastItemsInColumn;
}

@property (nonatomic) double maxHeightLine;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) NSMutableArray *lastItemsInColumn;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;

- (void)appendItemWithContentSize:(struct CGSize { double x0; double x1; })arg0;
- (long long)numberOfComponentInContainer;
- (double)maxHeightLine;
- (void)setMaxHeightLine:(double)arg0;
- (id)lastItemsInColumn;
- (void)setLastItemsInColumn:(id)arg0;
- (struct CGSize { double x0; double x1; })contentSize;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithContainer:(id)arg0;
- (id)itemList;
- (void)setItemList:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemFrameAtIndex:(long long)arg0;

@end
