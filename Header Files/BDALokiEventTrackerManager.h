//
//     Generated by private class-dump
//

@class NSString;

@interface BDALokiEventTrackerManager : NSObject <BDASDKProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolImp;
+ (id)sharedInstance;

- (void)eventV3:(id)arg0 params:(id)arg1 isDoubleSending:(BOOL)arg2;
- (void)eventData:(id)arg0;
- (void)performanceEventV3:(id)arg0 params:(id)arg1;

@end
