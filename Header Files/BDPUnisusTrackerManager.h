//
//     Generated by private class-dump
//

@class NSString;

@interface BDPUnisusTrackerManager : NSObject <UnisusTrackerServiceProtocol, BDPUnisusBasePluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)event:(id)arg0 attributes:(id)arg1;

@end
