//
//     Generated by private class-dump
//

@class NSString;

@interface BDXMonitorLynxAdaptor : NSObject <BDXMonitorKitViewAdaptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)matchWithView:(id)arg0;
- (id)getMonitorWithView:(id)arg0;
- (id)getUrlWithView:(id)arg0;
- (void)traceBeginWithName:(id)arg0;
- (void)traceEndWithName:(id)arg0;
- (void)traceInstantWithName:(id)arg0;
- (void)startHook;
- (void)attachVirtualAid:(id)arg0 view:(id)arg1;
- (long long)platform;

@end
