//
//     Generated by private class-dump
//

@class NSString;

@interface AWENetworkAntiSpamService : HTSService <AWENetworkAntiSpamProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)upSMSVerify:(id)arg0 completion:(id /* block */)arg1;
- (void)downSMSVerify:(id)arg0 completion:(id /* block */)arg1;

@end
