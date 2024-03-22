//
//     Generated by private class-dump
//

@class YYSelectionGrabber, UIColor, NSTimer, NSArray, UIView, NSMutableArray;

@interface YYTextSelectionView : UIView {
    BOOL _caretBlinks;
    BOOL _caretVisible;
    BOOL _verticalForm;
    UIView *_hostView;
    UIColor *_color;
    NSArray *_selectionRects;
    UIView *_caretView;
    YYSelectionGrabber *_startGrabber;
    YYSelectionGrabber *_endGrabber;
    NSTimer *_caretTimer;
    NSMutableArray *_markViews;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _caretRect;
}

@property (retain, nonatomic) NSTimer *caretTimer;
@property (retain, nonatomic) UIView *caretView;
@property (retain, nonatomic) YYSelectionGrabber *startGrabber;
@property (retain, nonatomic) YYSelectionGrabber *endGrabber;
@property (retain, nonatomic) NSMutableArray *markViews;
@property (weak, nonatomic) UIView *hostView;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic, getter=isCaretBlinks) BOOL caretBlinks;
@property (nonatomic, getter=isCaretVisible) BOOL caretVisible;
@property (nonatomic, getter=isVerticalForm) BOOL verticalForm;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } caretRect;
@property (copy, nonatomic) NSArray *selectionRects;

- (id)markViews;
- (void)_startBlinks;
- (void)_doBlink;
- (void)setCaretRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_standardCaretRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isStartGrabberContainsPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isEndGrabberContainsPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setVerticalForm:(BOOL)arg0;
- (BOOL)isGrabberContainsPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isCaretContainsPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isSelectionRectsContainsPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isCaretBlinks;
- (BOOL)isCaretVisible;
- (BOOL)isVerticalForm;
- (void)setCaretView:(id)arg0;
- (id)caretTimer;
- (void)setCaretTimer:(id)arg0;
- (void)setMarkViews:(id)arg0;
- (void)setCaretVisible:(BOOL)arg0;
- (void)setCaretBlinks:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRect;
- (void)setEndGrabber:(id)arg0;
- (id)color;
- (id)hostView;
- (void)setHostView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)endGrabber;
- (void)setStartGrabber:(id)arg0;
- (id)startGrabber;
- (void)dealloc;
- (id)selectionRects;
- (void)setColor:(id)arg0;
- (id)caretView;
- (void)setSelectionRects:(id)arg0;

@end