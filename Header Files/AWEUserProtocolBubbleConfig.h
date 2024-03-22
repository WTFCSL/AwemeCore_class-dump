//
//     Generated by private class-dump
//

@class UIView;

@interface AWEUserProtocolBubbleConfig : NSObject {
    BOOL _showCustomBubbleView;
    double _offset;
    UIView *_forView;
    UIView *_container;
    unsigned long long _position;
    struct CGPoint { double x; double y; } _anchorOffset;
}

@property (nonatomic) double offset;
@property (nonatomic) struct CGPoint { double x; double y; } anchorOffset;
@property (weak, nonatomic) UIView *forView;
@property (weak, nonatomic) UIView *container;
@property (nonatomic) unsigned long long position;
@property (nonatomic) BOOL showCustomBubbleView;

- (void)setForView:(id)arg0;
- (void)setShowCustomBubbleView:(BOOL)arg0;
- (id)forView;
- (BOOL)showCustomBubbleView;
- (id)container;
- (id)init;
- (void).cxx_destruct;
- (void)setOffset:(double)arg0;
- (void)setContainer:(id)arg0;
- (unsigned long long)position;
- (void)setPosition:(unsigned long long)arg0;
- (double)offset;
- (struct CGPoint { double x0; double x1; })anchorOffset;
- (void)setAnchorOffset:(struct CGPoint { double x0; double x1; })arg0;

@end
