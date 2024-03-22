//
//     Generated by private class-dump
//

@class NSString, IsecGM;

@interface CJPayISecEngimaImpl : NSObject <CJPayEngimaProtocol> {
    IsecGM *_engimaEngine;
    NSString *_customCert;
}

@property (retain, nonatomic) IsecGM *engimaEngine;
@property (copy, nonatomic) NSString *customCert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getEngimaProtocolBy:(id)arg0 useCert:(id)arg1;
+ (id)oneKeyAssemble;
+ (BOOL)shouldOneKeyAssemble;
+ (id)globalSM4KeyData;
+ (id)getEngimaProtocolBy:(id)arg0;

- (void)setCustomCert:(id)arg0;
- (id)customCert;
- (id)defaultToken;
- (id)p_customEncryptWith:(id)arg0 errorCode:(int *)arg1;
- (id)p_currentPayToken;
- (id)engimaEngine;
- (id)p_customDecryptWith:(id)arg0 errorCode:(int *)arg1;
- (id)p_customEncryptWithData:(id)arg0 errorCode:(int *)arg1;
- (id)encryptWithData:(id)arg0 errorCode:(int *)arg1;
- (id)encryptWith:(id)arg0 errorCode:(int *)arg1;
- (id)decryptWith:(id)arg0 errorCode:(int *)arg1;
- (id)sm4Decrypt:(id)arg0 key:(id)arg1 errorCode:(int *)arg2;
- (id)sm4Encrypt:(id)arg0 key:(id)arg1 errorCode:(int *)arg2;
- (void)setEngimaEngine:(id)arg0;
- (void).cxx_destruct;

@end
