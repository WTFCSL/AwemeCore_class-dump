//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEUGXBridgeCampaignUploadImageXMethodResultModel : BDXBridgeModel {
    NSNumber *_detailError;
    NSNumber *_errorCode;
    NSString *_tips;
    NSString *_storeid;
}

@property (retain, nonatomic) NSNumber *detailError;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSString *storeid;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setDetailError:(id)arg0;
- (void)setStoreid:(id)arg0;
- (id)detailError;
- (id)storeid;
- (id)tips;
- (void).cxx_destruct;
- (void)setErrorCode:(id)arg0;
- (id)errorCode;
- (void)setTips:(id)arg0;

@end