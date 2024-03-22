//
//     Generated by private class-dump
//

@class AWEProgressUIColorConfig;

@interface AWEProgressUIContainerConfig : NSObject {
    double _height;
    AWEProgressUIColorConfig *_bgColorConifg;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edgeInsets;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) double height;
@property (retain, nonatomic) AWEProgressUIColorConfig *bgColorConifg;

+ (id)containerConfigWithEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0 height:(double)arg1 bgColorConfig:(id)arg2;

- (id)bgColorConifg;
- (void)setBgColorConifg:(id)arg0;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;
- (double)height;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (void)setHeight:(double)arg0;

@end
