//
//     Generated by private class-dump
//

@class NSArray, BDReaderLineInfo;

@interface BDReaderLineItem : NSObject {
    NSArray *_rects;
    BDReaderLineInfo *_lineInfo;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layoutRect;
}

@property (retain, nonatomic) NSArray *rects;
@property (retain, nonatomic) BDReaderLineInfo *lineInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutRect;

- (id)lineInfo;
- (void)setLineInfo:(id)arg0;
- (void).cxx_destruct;
- (void)setRects:(id)arg0;
- (id)rects;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutRect;
- (void)setLayoutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end