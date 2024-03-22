//
//     Generated by private class-dump
//

@class TMBodyStructDescriptionPraser, NSString;

@interface TMTTNetDecryptor : NSObject <TMBodyStructDescriptionPraserDelegate, TMTTNetUtilDecryptDelegate> {
    TMBodyStructDescriptionPraser *_bodyPraser;
    double _timeoutPeriod;
}

@property (retain, nonatomic) TMBodyStructDescriptionPraser *bodyPraser;
@property (nonatomic) double timeoutPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithTimeoutPeriod:(double)arg0;
+ (id)sharedInstance;

- (id)bodyFieldAction:(id)arg0 error:(id *)arg1;
- (void)decryptorBody:(id *)arg0 bodyActionLevel:(unsigned long long)arg1 bodyFieldDescriptions:(id)arg2 decryptError:(id *)arg3;
- (void)setupTimeoutPeriod:(double)arg0;
- (void)setBodyPraser:(id)arg0;
- (void)setTimeoutPeriod:(double)arg0;
- (double)timeoutPeriod;
- (id)dictionaryToMutableDictionary:(id)arg0;
- (id)bodyPraser;
- (void)decryptorBody:(id *)arg0 decryptError:(id *)arg1;
- (void)decryptorBodyField:(id *)arg0 bodyFieldDescriptions:(id)arg1 decryptError:(id *)arg2;
- (id)creatDecryptorError:(id)arg0;
- (id)arrayToMutableArray:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end