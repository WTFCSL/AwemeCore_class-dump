//
//     Generated by private class-dump
//

@class UIBezierPath;

@interface LynxBasicShape : NSObject {
    struct { struct _LynxBorderUnitValue { double x0; long long x1; } x0; struct _LynxBorderUnitValue { double x0; long long x1; } x1; struct _LynxBorderUnitValue { double x0; long long x1; } x2; struct _LynxBorderUnitValue { double x0; long long x1; } x3; struct _LynxBorderUnitValue { double x0; long long x1; } x4; struct _LynxBorderUnitValue { double x0; long long x1; } x5; struct _LynxBorderUnitValue { double x0; long long x1; } x6; struct _LynxBorderUnitValue { double x0; long long x1; } x7; } *_cornerRadii;
    long long _cornerType;
    struct _LynxBorderUnitValue { double x0; long long x1; } *_params;
    long long _type;
    UIBezierPath *_path;
    struct CGSize { double width; double height; } _size;
}

- (id)pathWithFrameSize:(struct CGSize { double x0; double x1; })arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end
