//
//     Generated by private class-dump
//

@class BDReaderLineInfo;

@interface BDReaderLineRectItem : NSObject {
    BDReaderLineInfo *_lineInfo;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (retain, nonatomic) BDReaderLineInfo *lineInfo;

- (id)lineInfo;
- (void)setLineInfo:(id)arg0;
- (void).cxx_destruct;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end
