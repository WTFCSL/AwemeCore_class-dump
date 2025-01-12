//
//     Generated by private class-dump
//

@class NSString, AWEIMDouyinRedPacketCoverModel;

@interface AWEIMDouyinRedPacketCoverManagerResponse : AWEBaseApiModel {
    NSString *_retCode;
    NSString *_retMsg;
    AWEIMDouyinRedPacketCoverModel *_coverInfo;
    long long _recvStatus;
}

@property (copy, nonatomic) NSString *retCode;
@property (copy, nonatomic) NSString *retMsg;
@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *coverInfo;
@property (nonatomic) long long recvStatus;

+ (id)coverInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)retCode;
- (void)setRetCode:(id)arg0;
- (long long)recvStatus;
- (void)setRecvStatus:(long long)arg0;
- (id)coverInfo;
- (id)retMsg;
- (unsigned long long)getReceiveStatus;
- (void)setRetMsg:(id)arg0;
- (void)setCoverInfo:(id)arg0;
- (void).cxx_destruct;

@end
