//
//     Generated by private class-dump
//

@class BDPSharePrepareModel, NSDictionary, NSNumber, BDPUniqueID;

@interface AWEDefaultShareProcessModel : NSObject {
    BOOL _useBigIMType;
    NSNumber *_msgType;
    BDPUniqueID *_uniqueID;
    BDPSharePrepareModel *_prepareModel;
    NSDictionary *_messageContent;
    id /* block */ _contextHandler;
    id /* block */ _configurationHandler;
}

@property (nonatomic) BOOL useBigIMType;
@property (copy, nonatomic) NSNumber *msgType;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPSharePrepareModel *prepareModel;
@property (copy, nonatomic) NSDictionary *messageContent;
@property (copy, nonatomic) id /* block */ contextHandler;
@property (copy, nonatomic) id /* block */ configurationHandler;

- (void)setContextHandler:(id /* block */)arg0;
- (id /* block */)contextHandler;
- (void)setPrepareModel:(id)arg0;
- (void)setMessageContent:(id)arg0;
- (BOOL)useBigIMType;
- (void)setUseBigIMType:(BOOL)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id /* block */)configurationHandler;
- (id)messageContent;
- (id)prepareModel;
- (id)msgType;
- (void)setMsgType:(id)arg0;
- (void)setConfigurationHandler:(id /* block */)arg0;

@end
