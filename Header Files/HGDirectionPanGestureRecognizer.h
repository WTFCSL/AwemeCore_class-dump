//
//     Generated by private class-dump
//

@interface HGDirectionPanGestureRecognizer : UIPanGestureRecognizer {
    unsigned long long _allowDirection;
    unsigned long long _mode;
}

@property (nonatomic) unsigned long long allowDirection;
@property (nonatomic) unsigned long long mode;

- (void)setAllowDirection:(unsigned long long)arg0;
- (unsigned long long)allowDirection;
- (id)init;
- (unsigned long long)mode;
- (void)commonInit;
- (id)initWithTarget:(id)arg0 action:(SEL)arg1;
- (void)setMode:(unsigned long long)arg0;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;

@end
