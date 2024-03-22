//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSMutableDictionary, NSString, BDALokiConfiguration;
@protocol BDALokiManagerDelegate;

@interface BDALokiManager : NSObject <BDALokiComponentDelegate> {
    NSArray *_customLynxBridges;
    id<BDALokiManagerDelegate> _delegate;
    BDALokiConfiguration *_lokiConfiguration;
    NSArray *_lokiDatas;
    NSDictionary *_containerDics;
    NSMutableDictionary *_lokiComponentDics;
}

@property (retain, nonatomic) NSArray *lokiDatas;
@property (copy, nonatomic) NSDictionary *containerDics;
@property (retain, nonatomic) NSMutableDictionary *lokiComponentDics;
@property (copy, nonatomic) NSArray *customLynxBridges;
@property (weak, nonatomic) id<BDALokiManagerDelegate> delegate;
@property (retain, nonatomic) BDALokiConfiguration *lokiConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendInitEvent;
- (void)renderWithMode:(long long)arg0;
- (id)lokiComponentDics;
- (void)lokiStartLoad:(id)arg0;
- (id)getLayoutComponent:(id)arg0;
- (void)lokiRenderFinishComponent:(id)arg0;
- (void)lokiShowFinish:(id)arg0;
- (void)lokiClose:(id)arg0;
- (void)lokiComponent:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)sendEvent:(id)arg0 componentId:(id)arg1 params:(id)arg2 callback:(id /* block */)arg3;
- (id)lokiDatas;
- (id)containerDics;
- (id)createLokiComponentWithContainer:(id)arg0 lokiModel:(id)arg1;
- (id)lokiConfiguration;
- (void)setLokiConfiguration:(id)arg0;
- (id)customLynxBridges;
- (void)lokiDowngrade:(id)arg0 errorMsg:(id)arg1 type:(long long)arg2;
- (void)lokiSendEvent:(id)arg0 componentId:(id)arg1 data:(id)arg2;
- (void)lokiLoadComponent:(id)arg0;
- (id)initWithDatas:(id)arg0 container:(id)arg1;
- (void)preRender;
- (void)setLokiWithAlpha:(double)arg0;
- (id)getComponentByeType:(id)arg0;
- (void)setCustomLynxBridges:(id)arg0;
- (void)setLokiDatas:(id)arg0;
- (void)setContainerDics:(id)arg0;
- (void)setLokiComponentDics:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (void)render;

@end