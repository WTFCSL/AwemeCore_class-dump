//
//     Generated by private class-dump
//

@class NSString;

@interface ZimAliCloudValidateResponse : NSObject {
    NSString *_ValidationRetCode;
    NSString *_ProductRetCode;
    NSString *_HasNext;
    NSString *_nextProtocol;
    NSString *_ExtParams;
    NSString *_RetCodeSub;
    NSString *_RetMessageSub;
}

@property (retain, nonatomic) NSString *ValidationRetCode;
@property (retain, nonatomic) NSString *ProductRetCode;
@property (retain, nonatomic) NSString *HasNext;
@property (retain, nonatomic) NSString *nextProtocol;
@property (retain, nonatomic) NSString *ExtParams;
@property (retain, nonatomic) NSString *RetCodeSub;
@property (retain, nonatomic) NSString *RetMessageSub;

- (void)setExtParams:(id)arg0;
- (void)setRetCodeSub:(id)arg0;
- (void)setRetMessageSub:(id)arg0;
- (id)ExtParams;
- (id)RetCodeSub;
- (id)RetMessageSub;
- (void)setValidationRetCode:(id)arg0;
- (void)setProductRetCode:(id)arg0;
- (id)ValidationRetCode;
- (id)ProductRetCode;
- (id)nextProtocol;
- (void)setNextProtocol:(id)arg0;
- (id)HasNext;
- (void)setHasNext:(id)arg0;
- (void).cxx_destruct;

@end