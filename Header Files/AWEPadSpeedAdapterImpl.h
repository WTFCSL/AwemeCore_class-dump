//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPadSpeedAdapterImpl : NSObject <AWEPadSpeedAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAdapter;

- (BOOL)enableGlobalSpeedInherit;
- (BOOL)performNormalExecution:(id /* block */)arg0;
- (id)getPadSpeedManagerWithReferString:(id)arg0 enterFrom:(id)arg1;
- (id)init;

@end