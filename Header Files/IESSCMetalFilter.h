//
//     Generated by private class-dump
//

@class IESSCMetalRenderingDevice;

@interface IESSCMetalFilter : NSObject {
    IESSCMetalRenderingDevice *_renderingDevice;
}

@property (retain, nonatomic) IESSCMetalRenderingDevice *renderingDevice;

- (id)initWithRenderingDevice:(id)arg0 blendEnable:(BOOL)arg1;
- (id)renderingDevice;
- (void)renderWithParams:(id)arg0;
- (void)setRenderingDevice:(id)arg0;
- (void).cxx_destruct;

@end