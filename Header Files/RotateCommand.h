//
//     Generated by private class-dump
//

@interface RotateCommand : LolaDrawCommand {
    double _angle;
}

@property (nonatomic) double angle;

- (void)configWithData:(id)arg0 context:(id)arg1;
- (void)draw:(id)arg0 context:(struct CGContext { } *)arg1;
- (void)recycle;
- (id)typeStr;
- (double)angle;
- (void)setAngle:(double)arg0;

@end
