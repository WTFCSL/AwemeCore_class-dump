//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface ZimValidateResponse : NSObject {
    BOOL _pb_hasNext;
    int _validationRetCode;
    int _productRetCode;
    NSString *_nextProtocol;
    NSDictionary *_extParams;
    NSString *_retCodeSub;
    NSString *_retMessageSub;
}

@property (nonatomic) int validationRetCode;
@property (nonatomic) int productRetCode;
@property (nonatomic) BOOL pb_hasNext;
@property (retain, nonatomic) NSString *nextProtocol;
@property (retain, nonatomic) NSDictionary *extParams;
@property (retain, nonatomic) NSString *retCodeSub;
@property (retain, nonatomic) NSString *retMessageSub;

+ (Class)extParamsElementClass;

- (id)extParams;
- (void)setExtParams:(id)arg0;
- (id)retCodeSub;
- (void)setRetCodeSub:(id)arg0;
- (void)setRetMessageSub:(id)arg0;
- (id)retMessageSub;
- (int)productRetCode;
- (int)validationRetCode;
- (void)setValidationRetCode:(int)arg0;
- (void)setProductRetCode:(int)arg0;
- (void)setPb_hasNext:(BOOL)arg0;
- (id)nextProtocol;
- (void)setNextProtocol:(id)arg0;
- (BOOL)pb_hasNext;
- (void).cxx_destruct;

@end
