//
//     Generated by private class-dump
//

@class BDECIMClient;

@interface BDECPigeonParticipantManager : NSObject {
    BDECIMClient *_client;
}

@property (retain, nonatomic) BDECIMClient *client;

- (id)initWithIMClient:(id)arg0;
- (void)fetchCurrentParticipantWithPigeonBizType:(id)arg0 extend:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchParticipantWithPigeonUids:(id)arg0 pigeonBizType:(id)arg1 extend:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void).cxx_destruct;
- (void)setClient:(id)arg0;
- (id)client;

@end
