//
//     Generated by private class-dump
//

@class NSString;
@protocol BDPNetworkTaskProtocol;

@interface BDPLynxBridgeNetRequestTask : NSObject {
    NSString *_filePath;
    id<BDPNetworkTaskProtocol> _task;
}

@property (copy, nonatomic) NSString *filePath;
@property (weak, nonatomic) id<BDPNetworkTaskProtocol> task;

- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (void)setTask:(id)arg0;
- (id)task;

@end
