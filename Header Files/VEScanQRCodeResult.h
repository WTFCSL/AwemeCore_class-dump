//
//     Generated by private class-dump
//

@class NSError, NSString, NSArray;

@interface VEScanQRCodeResult : NSObject {
    float _vesdk_algorithm_init_duration;
    float _vesdk_algorithm_qrcode_duration;
    float _vesdk_algorithm_not_qrcode_duration;
    float _vesdk_after_algorithm_duration;
    NSError *_error;
    NSString *_content;
    unsigned long long _codeType;
    NSArray *_quadrilateralPoints;
}

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) unsigned long long codeType;
@property (copy, nonatomic) NSArray *quadrilateralPoints;
@property (nonatomic) float vesdk_algorithm_init_duration;
@property (nonatomic) float vesdk_algorithm_qrcode_duration;
@property (nonatomic) float vesdk_algorithm_not_qrcode_duration;
@property (nonatomic) float vesdk_after_algorithm_duration;

- (void)setVesdk_algorithm_init_duration:(float)arg0;
- (void)setVesdk_algorithm_qrcode_duration:(float)arg0;
- (void)setVesdk_algorithm_not_qrcode_duration:(float)arg0;
- (void)setVesdk_after_algorithm_duration:(float)arg0;
- (float)vesdk_algorithm_init_duration;
- (float)vesdk_algorithm_qrcode_duration;
- (float)vesdk_algorithm_not_qrcode_duration;
- (float)vesdk_after_algorithm_duration;
- (id)init;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;
- (void)setError:(id)arg0;
- (id)error;
- (unsigned long long)codeType;
- (void)setCodeType:(unsigned long long)arg0;
- (id)quadrilateralPoints;
- (void)setQuadrilateralPoints:(id)arg0;

@end