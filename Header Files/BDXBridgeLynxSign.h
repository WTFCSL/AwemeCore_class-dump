//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface BDXBridgeLynxSign : NSObject {
    unsigned long long _verifyType;
    long long _feID;
    unsigned long long _totalLength;
    NSArray *_signSuites;
    NSNumber *_checkErrorCode;
}

@property (nonatomic) unsigned long long verifyType;
@property (nonatomic) long long feID;
@property (nonatomic) unsigned long long totalLength;
@property (copy, nonatomic) NSArray *signSuites;
@property (retain, nonatomic) NSNumber *checkErrorCode;

- (long long)feID;
- (void)setFeID:(long long)arg0;
- (id)signSuites;
- (void)setSignSuites:(id)arg0;
- (id)checkErrorCode;
- (void)setCheckErrorCode:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)verifyType;
- (void)setVerifyType:(unsigned long long)arg0;
- (void)setTotalLength:(unsigned long long)arg0;
- (unsigned long long)totalLength;

@end
