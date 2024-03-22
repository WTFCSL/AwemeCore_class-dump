//
//     Generated by private class-dump
//

@class AWEIMDouyinRedPacketModel, NSString, AWEIMDouyinRedPacketUserInfo;

@interface AWEIMDouyinRedPacketInfoResponse : AWEBaseApiModel {
    BOOL _isOpenedRedpacket;
    AWEIMDouyinRedPacketModel *_info;
    AWEIMDouyinRedPacketUserInfo *_user;
    unsigned long long _businessCode;
    NSString *_businessMsg;
}

@property (retain, nonatomic) AWEIMDouyinRedPacketModel *info;
@property (retain, nonatomic) AWEIMDouyinRedPacketUserInfo *user;
@property (nonatomic) unsigned long long businessCode;
@property (copy, nonatomic) NSString *businessMsg;
@property (nonatomic) BOOL isOpenedRedpacket;

+ (id)userJSONTransformer;
+ (id)infoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)businessCode;
- (id)businessMsg;
- (void)setIsOpenedRedpacket:(BOOL)arg0;
- (BOOL)isOpenedRedpacket;
- (void)setBusinessCode:(unsigned long long)arg0;
- (void)setBusinessMsg:(id)arg0;
- (void)setUser:(id)arg0;
- (id)info;
- (id)user;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;

@end
