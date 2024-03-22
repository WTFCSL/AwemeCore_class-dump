//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface DYAAwemeAccountModel : MTLModel <DYARawDataProtocol, MTLJSONSerializing> {
    BOOL _isInDeactivateBufferPeriod;
    NSDictionary *rawData;
    NSString *_logID;
    NSString *_userID;
    NSString *_phoneNumber;
    NSString *_nickname;
}

@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) BOOL isInDeactivateBufferPeriod;
@property (copy, nonatomic) NSDictionary *rawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isInDeactivateBufferPeriod;
- (void)setIsInDeactivateBufferPeriod:(BOOL)arg0;
- (id)mergeFromLiteInfo:(id)arg0;
- (id)userID;
- (id)nickname;
- (void).cxx_destruct;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;
- (void)setUserID:(id)arg0;
- (void)setNickname:(id)arg0;
- (id)rawData;
- (void)setRawData:(id)arg0;
- (id)logID;
- (void)setLogID:(id)arg0;

@end
