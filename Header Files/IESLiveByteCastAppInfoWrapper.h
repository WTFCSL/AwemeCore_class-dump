//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveByteCastAppInfoWrapper : NSObject <BDSCAppService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInHouse;
- (BOOL)isDebugConfiguration;
- (void)toastMessage:(id)arg0;
- (BOOL)userConfirmPrivacyPopup;
- (void)traceLiveLogString:(id)arg0 traceEventName:(id)arg1 traceParams:(id)arg2 outerTraceLogInfo:(id)arg3;
- (void)traceCastEvent:(id)arg0 params:(id)arg1 outterTraceLogInfo:(id)arg2;

@end
