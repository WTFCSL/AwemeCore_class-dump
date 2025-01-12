//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID;

@interface BDPSonicPermissionService : NSObject <BDPSonicAppServiceMessage, SonicPermissionService> {
    BDPUniqueID *_uniqueID;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)setupCustomRegisterService:(id)arg0 uniqueID:(id)arg1;

- (void)requestPermissions:(unsigned long long)arg0 withBlock:(id /* block */)arg1;
- (BOOL)requestGranted:(unsigned long long)arg0;
- (BOOL)isDevicesOccupied:(unsigned long long)arg0 pageID:(int)arg1;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)initWithUniqueID:(id)arg0;

@end
