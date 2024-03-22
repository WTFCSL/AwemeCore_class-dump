//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface ZimInitResponse : NSObject {
    int _retCode;
    NSString *_message;
    NSString *_zimId;
    NSString *_protocol;
    NSDictionary *_extParams;
    NSString *_retCodeSub;
    NSString *_retMessageSub;
    NSString *_WishContent;
    NSString *_ImageCount;
}

@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *zimId;
@property (retain, nonatomic) NSString *protocol;
@property (retain, nonatomic) NSDictionary *extParams;
@property (retain, nonatomic) NSString *retCodeSub;
@property (retain, nonatomic) NSString *retMessageSub;
@property (retain, nonatomic) NSString *WishContent;
@property (retain, nonatomic) NSString *ImageCount;

+ (Class)extParamsElementClass;

- (id)extParams;
- (void)setExtParams:(id)arg0;
- (int)retCode;
- (void)setRetCode:(int)arg0;
- (id)retCodeSub;
- (id)zimId;
- (void)setZimId:(id)arg0;
- (void)setRetCodeSub:(id)arg0;
- (void)setRetMessageSub:(id)arg0;
- (id)retMessageSub;
- (id)WishContent;
- (void)setWishContent:(id)arg0;
- (id)ImageCount;
- (id)protocol;
- (void)setMessage:(id)arg0;
- (void).cxx_destruct;
- (void)setProtocol:(id)arg0;
- (id)message;
- (void)setImageCount:(id)arg0;

@end