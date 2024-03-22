//
//     Generated by private class-dump
//

@class NSString, NSMapTable;

@interface AWETimorGameLifeCycleManager : NSObject <BDPContainerLifeCycleMessage, BDPAppInterfaceOrientationChangeMessage> {
    NSMapTable *_serviceDict;
}

@property (retain, nonatomic) NSMapTable *serviceDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)shareInstance;

- (void)viewDidLoad:(id)arg0 uniqueID:(id)arg1;
- (void)viewWillAppear:(id)arg0 uniqueID:(id)arg1;
- (void)viewDidAppear:(id)arg0 uniqueID:(id)arg1;
- (void)viewWillDisappear:(id)arg0 uniqueID:(id)arg1;
- (void)viewDidDisappear:(id)arg0 uniqueID:(id)arg1;
- (void)interfaceOrientationChange:(id)arg0 targetOrientation:(long long)arg1 uniqueID:(id)arg2;
- (void)registerLifeCycleService:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)serviceDict;
- (void)setServiceDict:(id)arg0;

@end