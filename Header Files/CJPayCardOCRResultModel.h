//
//     Generated by private class-dump
//

@class NSString, NSData, NSDictionary;

@interface CJPayCardOCRResultModel : NSObject {
    BOOL _isFromUploadPhoto;
    BOOL _isFromLocalOCR;
    unsigned long long _result;
    NSString *_cardNoStr;
    NSData *_imgData;
    NSString *_cropImgStr;
    double _localOCRCostTime;
    NSString *_idName;
    NSString *_idCode;
    NSString *_errorCode;
    NSString *_errorMessage;
    NSDictionary *_fxjResponseDict;
    NSDictionary *_onlyUploadResponseDict;
    NSDictionary *_creditCertDict;
    NSString *_metaFile;
}

@property (nonatomic) unsigned long long result;
@property (copy, nonatomic) NSString *cardNoStr;
@property (retain, nonatomic) NSData *imgData;
@property (copy, nonatomic) NSString *cropImgStr;
@property (nonatomic) BOOL isFromUploadPhoto;
@property (nonatomic) BOOL isFromLocalOCR;
@property (nonatomic) double localOCRCostTime;
@property (copy, nonatomic) NSString *idName;
@property (copy, nonatomic) NSString *idCode;
@property (copy, nonatomic) NSString *errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSDictionary *fxjResponseDict;
@property (retain, nonatomic) NSDictionary *onlyUploadResponseDict;
@property (retain, nonatomic) NSDictionary *creditCertDict;
@property (retain, nonatomic) NSString *metaFile;

- (void)setImgData:(id)arg0;
- (id)imgData;
- (id)idCode;
- (void)setIdCode:(id)arg0;
- (id)cardNoStr;
- (void)setCardNoStr:(id)arg0;
- (void)setCropImgStr:(id)arg0;
- (void)setIsFromUploadPhoto:(BOOL)arg0;
- (BOOL)isFromUploadPhoto;
- (BOOL)isFromLocalOCR;
- (double)localOCRCostTime;
- (void)setMetaFile:(id)arg0;
- (id)cropImgStr;
- (id)fxjResponseDict;
- (id)onlyUploadResponseDict;
- (id)metaFile;
- (id)creditCertDict;
- (void)setIsFromLocalOCR:(BOOL)arg0;
- (void)setLocalOCRCostTime:(double)arg0;
- (void)setFxjResponseDict:(id)arg0;
- (void)setOnlyUploadResponseDict:(id)arg0;
- (void)setCreditCertDict:(id)arg0;
- (void)setResult:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)result;
- (void)setErrorCode:(id)arg0;
- (id)initWithResult:(unsigned long long)arg0;
- (id)errorCode;
- (id)errorMessage;
- (id)idName;
- (void)setErrorMessage:(id)arg0;
- (void)setIdName:(id)arg0;

@end