//
//     Generated by private class-dump
//

@interface LynxTouchEvent : LynxEvent {
    struct CGPoint { double x; double y; } _point;
    struct CGPoint { double x; double y; } _pagePoint;
    struct CGPoint { double x; double y; } _viewPoint;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } pagePoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } viewPoint;

- (struct CGPoint { double x0; double x1; })pagePoint;
- (struct CGPoint { double x0; double x1; })viewPoint;
- (id)initWithName:(id)arg0 targetTag:(long long)arg1 clientPoint:(struct CGPoint { double x0; double x1; })arg2 pagePoint:(struct CGPoint { double x0; double x1; })arg3 viewPoint:(struct CGPoint { double x0; double x1; })arg4;
- (id)initWithName:(id)arg0 targetTag:(long long)arg1;
- (id)initWithName:(id)arg0 targetTag:(long long)arg1 touchPoint:(struct CGPoint { double x0; double x1; })arg2;
- (struct CGPoint { double x0; double x1; })point;

@end
