//
//     Generated by private class-dump
//

@class NSString;

@interface BDXLynxImpressionView : LynxUI <BDXLynxInnerImpressionViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1011;

- (void)lynxImpressionWillManualExposureNotification:(id)arg0;
- (void)impressionPercent:(long long)arg0 requestReset:(BOOL)arg1;
- (void)impression;
- (void)dealloc;
- (void)exit;
- (id)createView;

@end
