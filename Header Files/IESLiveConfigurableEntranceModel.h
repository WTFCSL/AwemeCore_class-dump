//
//     Generated by private class-dump
//

@class NSDictionary, IESHYHybridContainerConfig;

@interface IESLiveConfigurableEntranceModel : NSObject {
    NSDictionary *_initialData;
    IESHYHybridContainerConfig *_config;
    double _timeout;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (copy, nonatomic) NSDictionary *initialData;
@property (retain, nonatomic) IESHYHybridContainerConfig *config;
@property (nonatomic) double timeout;

- (id)initialData;
- (void)setInitialData:(id)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (double)timeout;
- (void)setTimeout:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrame;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
