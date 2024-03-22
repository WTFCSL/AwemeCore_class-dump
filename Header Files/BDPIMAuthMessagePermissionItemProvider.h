//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface BDPIMAuthMessagePermissionItemProvider : NSObject <BDPPermissionItemProviderProtocol> {
    NSDictionary *_imAuthMessageInfo;
}

@property (copy, nonatomic) NSDictionary *imAuthMessageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)fetchPermissionItemsWithID:(id)arg0 completion:(id /* block */)arg1;
- (void)setImAuthMessageInfo:(id)arg0;
- (id)imAuthMessageInfo;
- (void).cxx_destruct;

@end
