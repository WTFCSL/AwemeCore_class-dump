//
//     Generated by private class-dump
//

@class NSMutableArray;
@protocol XIGDanmakuTrackStatckedLayoutDelegate;

@interface XIGDanmakuTrackStatckedLayout : NSObject {
    id<XIGDanmakuTrackStatckedLayoutDelegate> _delegate;
    unsigned long long _axis;
    double _lineSpacing;
    double _lineHeight;
    NSMutableArray *_tracks;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (retain, nonatomic) NSMutableArray *tracks;
@property (weak, nonatomic) id<XIGDanmakuTrackStatckedLayoutDelegate> delegate;
@property (nonatomic) unsigned long long axis;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double lineHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 axis:(unsigned long long)arg1 lineSpacing:(double)arg2 lineHeight:(double)arg3;
- (id)tracks;
- (void).cxx_destruct;
- (id)delegate;
- (void)setAxis:(unsigned long long)arg0;
- (unsigned long long)axis;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDelegate:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg0;
- (double)lineHeight;
- (void)setLineHeight:(double)arg0;
- (void)setTracks:(id)arg0;

@end
