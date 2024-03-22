//
//     Generated by private class-dump
//

@class AWEPOICubeView, NSError;
@protocol BDXResourceProtocol;

@interface DitoLynxPreloadResult : NSObject {
    AWEPOICubeView *_lynxContainerView;
    NSError *_error;
    id<BDXResourceProtocol> _resourceInfo;
    double _updateSizeTime;
    struct CGSize { double width; double height; } _size;
    struct CGSize { double width; double height; } _preSize;
    struct CGSize { double width; double height; } _renderCompleteSize;
}

@property (nonatomic) struct CGSize { double width; double height; } renderCompleteSize;
@property (nonatomic) double updateSizeTime;
@property (retain, nonatomic) AWEPOICubeView *lynxContainerView;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) struct CGSize { double width; double height; } preSize;
@property (retain, nonatomic) id<BDXResourceProtocol> resourceInfo;

- (void)setPreSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })preSize;
- (id)lynxContainerView;
- (void)setLynxContainerView:(id)arg0;
- (void)tryUpdateRenderCompleteSize:(struct CGSize { double x0; double x1; })arg0;
- (double)updateSizeTime;
- (void)setRenderCompleteSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setUpdateSizeTime:(double)arg0;
- (struct CGSize { double x0; double x1; })renderCompleteSize;
- (id)resourceInfo;
- (void)setResourceInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })size;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setError:(id)arg0;
- (id)error;

@end
