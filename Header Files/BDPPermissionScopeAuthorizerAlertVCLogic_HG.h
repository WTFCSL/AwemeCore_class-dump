//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID;

@interface BDPPermissionScopeAuthorizerAlertVCLogic_HG : NSObject <BDPPrivacyRegulationViewDelegate_HG> {
    BDPUniqueID *_uniqueID;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPermissionAlertController:(id)arg0 completion:(id /* block */)arg1;
- (void)clickPrivacyView:(id)arg0 type:(unsigned long long)arg1;
- (void)eventAlertShowForScope:(id)arg0 uniqueID:(id)arg1 multipleAuth:(BOOL)arg2;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)initWithUniqueID:(id)arg0;

@end
