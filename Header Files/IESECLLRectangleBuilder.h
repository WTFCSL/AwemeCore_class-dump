//
//     Generated by private class-dump
//

@interface IESECLLRectangleBuilder : IESECLLShapeBuilder {
    struct corners_radius { double top_left; double top_right; double bottom_left; double bottom_right; } _corner_radius_map;
}

@property (readonly, copy, nonatomic) id /* block */ cornerRadius;

- (id /* block */)cornerRadius;
- (void)setupShapeLayer;

@end