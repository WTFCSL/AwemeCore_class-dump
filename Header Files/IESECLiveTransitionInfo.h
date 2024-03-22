//
//     Generated by private class-dump
//

@interface IESECLiveTransitionInfo : NSObject {
    BOOL _animated;
    unsigned long long _actionType;
    unsigned long long _state;
    double _maxPosition;
    double _percent;
    struct CGPoint { double x; double y; } _translation;
}

@property (nonatomic) unsigned long long actionType;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double maxPosition;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) double percent;
@property (nonatomic) BOOL animated;
@property (readonly, nonatomic) BOOL isClickActionType;

- (BOOL)isClickActionType;
- (void)setMaxPosition:(double)arg0;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg0;
- (void)setActionType:(unsigned long long)arg0;
- (unsigned long long)actionType;
- (struct CGPoint { double x0; double x1; })translation;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg0;
- (void)setTranslation:(struct CGPoint { double x0; double x1; })arg0;
- (double)percent;
- (void)setPercent:(double)arg0;
- (double)maxPosition;

@end
