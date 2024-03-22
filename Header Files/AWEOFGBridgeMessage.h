//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL;

@interface AWEOFGBridgeMessage : NSObject {
    NSString *_methodName;
    NSString *_methodType;
    NSDictionary *_params;
    NSURL *_invokeURL;
    NSString *_callbackID;
    NSString *_JSSDKVersion;
    NSString *_clientKey;
    NSString *_sourceURL;
}

@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *methodType;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSURL *invokeURL;
@property (copy, nonatomic) NSString *callbackID;
@property (copy, nonatomic) NSString *JSSDKVersion;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *sourceURL;

- (id)callbackID;
- (id)JSSDKVersion;
- (void)setJSSDKVersion:(id)arg0;
- (void)setCallbackID:(id)arg0;
- (void)setMethodType:(id)arg0;
- (id)methodType;
- (id)invokeURL;
- (void)setInvokeURL:(id)arg0;
- (id)clientKey;
- (void).cxx_destruct;
- (id)sourceURL;
- (id)initWithMessage:(id)arg0;
- (void)setClientKey:(id)arg0;
- (void)setSourceURL:(id)arg0;
- (id)params;
- (void)setParams:(id)arg0;
- (id)methodName;
- (void)setMethodName:(id)arg0;

@end