//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface BDPLifeServiceInfoItemProvider : NSObject <BDPPermissionItemProviderProtocol> {
    NSDictionary *_lifeServiceInfo;
}

@property (copy, nonatomic) NSDictionary *lifeServiceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)fetchPermissionItemsWithID:(id)arg0 completion:(id /* block */)arg1;
- (void)setLifeServiceInfo:(id)arg0;
- (id)lifeServiceInfo;
- (void).cxx_destruct;

@end
