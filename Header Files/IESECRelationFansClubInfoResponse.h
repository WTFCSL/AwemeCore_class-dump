//
//     Generated by private class-dump
//

@class IESECRelationFansClubInfoModel, NSNumber, NSString;

@interface IESECRelationFansClubInfoResponse : MTLModel <MTLJSONSerializing> {
    IESECRelationFansClubInfoModel *_fansClubInfo;
    NSNumber *_statusCode;
    NSString *_statusMsg;
}

@property (retain, nonatomic) IESECRelationFansClubInfoModel *fansClubInfo;
@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (id)fansClubInfo;
- (void)setFansClubInfo:(id)arg0;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (void).cxx_destruct;

@end
