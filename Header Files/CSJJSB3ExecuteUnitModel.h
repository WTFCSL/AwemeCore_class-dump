//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface CSJJSB3ExecuteUnitModel : NSObject {
    NSString *_JSSDKVersion;
    NSString *_msgType;
    NSString *_callbackId;
    NSString *_func;
    NSDictionary *_params;
}

@property (copy, nonatomic) NSString *JSSDKVersion;
@property (copy, nonatomic) NSString *msgType;
@property (copy, nonatomic) NSString *callbackId;
@property (copy, nonatomic) NSString *func;
@property (copy, nonatomic) NSDictionary *params;

- (id)JSSDKVersion;
- (void)setJSSDKVersion:(id)arg0;
- (id)func;
- (void)setCallbackId:(id)arg0;
- (void)setFunc:(id)arg0;
- (id)callbackId;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (id)params;
- (void)setParams:(id)arg0;
- (id)msgType;
- (void)setMsgType:(id)arg0;

@end
