//
//     Generated by private class-dump
//

@interface YYTextSelectionRect : UITextSelectionRect <NSCopying> {
    BOOL _containsStart;
    BOOL _containsEnd;
    BOOL _isVertical;
    long long _writingDirection;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) long long writingDirection;
@property (nonatomic) BOOL containsStart;
@property (nonatomic) BOOL containsEnd;
@property (nonatomic) BOOL isVertical;

- (BOOL)isVertical;
- (void)setIsVertical:(BOOL)arg0;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)containsStart;
- (void)setContainsStart:(BOOL)arg0;
- (BOOL)containsEnd;
- (void)setContainsEnd:(BOOL)arg0;
- (long long)writingDirection;
- (void)setWritingDirection:(long long)arg0;

@end
