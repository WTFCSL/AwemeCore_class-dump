//
//     Generated by private class-dump
//

@interface VEAlgorithmSessionResultCommonImageReframe : VEAlgorithmSessionResult {
    BOOL _isValid;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _box;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property (nonatomic) BOOL isValid;

- (void)setIsValid:(BOOL)arg0;
- (BOOL)isValid;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })box;
- (void)setBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
