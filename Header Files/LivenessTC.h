//
//     Generated by private class-dump
//

@class NSString;

@interface LivenessTC : NSObject <LivenessTCProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)setParamsGeneral:(int)arg0 value:(float)arg1;
- (void)setMaskRadiusRatio:(float)arg0 offsetToCenterRatio:(float)arg1;
- (id)initWithVC:(id)arg0;
- (int)setInitParams:(id)arg0;
- (struct CGImage { } *)doFaceLive:(struct __CVBuffer { } *)arg0 orient:(int)arg1;
- (void)reStart:(int)arg0;
- (void)trackCancel;
- (void)viewDismiss;
- (int)getAlgoErrorCode;
- (id)getLivenessErrorTitle:(int)arg0;
- (void)recordSrcVideo:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg1 fromConnection:(id)arg2;
- (id)getLivenessErrorMsg:(int)arg0;

@end
