//
//     Generated by private class-dump
//

@class NSString, NSDictionary, WKWebView, IESBridgePerfData, NSNumber, IESBridgeMessageHandlerConfiguration;

@interface IESBridgeMessage : NSObject {
    BOOL _disableJSBErrorMonitor;
    WKWebView *_wkWebView;
    NSString *_wkWebViewUrl;
    NSString *_messageType;
    NSString *_eventID;
    NSString *_callbackID;
    NSDictionary *_invokeParams;
    NSDictionary *_params;
    NSString *_methodName;
    NSString *_methodNamespace;
    NSString *_JSSDKVersion;
    NSString *_beginTime;
    NSString *_endTime;
    long long _statusCode;
    unsigned long long _from;
    NSString *_protocolVersion;
    NSString *_iframeURLString;
    NSString *_statusDescription;
    IESBridgePerfData *_perfData;
    NSNumber *_isMainFrame;
    NSString *_frameURL;
    id /* block */ _callback;
    NSString *_appID;
    IESBridgeMessage *_js2NativeMessage;
    NSString *_messageUUID;
    id /* block */ _executorJSCallBackBlock;
    IESBridgeMessageHandlerConfiguration *_configuration;
    NSDictionary *_messageBody;
}

@property (copy, nonatomic) id /* block */ executorJSCallBackBlock;
@property (retain, nonatomic) IESBridgeMessageHandlerConfiguration *configuration;
@property (copy, nonatomic) NSDictionary *messageBody;
@property (weak, nonatomic) WKWebView *wkWebView;
@property (copy, nonatomic) NSString *wkWebViewUrl;
@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *callbackID;
@property (copy, nonatomic) NSDictionary *invokeParams;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *methodNamespace;
@property (copy, nonatomic) NSString *JSSDKVersion;
@property (copy, nonatomic) NSString *beginTime;
@property (copy, nonatomic) NSString *endTime;
@property (nonatomic) long long statusCode;
@property (nonatomic) unsigned long long from;
@property (copy, nonatomic) NSString *protocolVersion;
@property (copy, nonatomic) NSString *iframeURLString;
@property (retain, nonatomic) NSString *statusDescription;
@property (retain, nonatomic) IESBridgePerfData *perfData;
@property (nonatomic) BOOL disableJSBErrorMonitor;
@property (retain, nonatomic) NSNumber *isMainFrame;
@property (retain, nonatomic) NSString *frameURL;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) IESBridgeMessage *js2NativeMessage;
@property (copy, nonatomic) NSString *messageUUID;

+ (id)generateCurrentTimeString;
+ (id)statusDescriptionWithStatusCode:(long long)arg0;
+ (id)receiveMessageDictionary:(id)arg0 wkWebView:(id)arg1 wkWebViewUrl:(id)arg2;
+ (id)receiveMessageDictionary:(id)arg0 wkWebView:(id)arg1 wkWebViewUrl:(id)arg2 callback:(id /* block */)arg3;

- (id)bpea_pageContext;
- (id)callbackID;
- (id)JSSDKVersion;
- (void)setJSSDKVersion:(id)arg0;
- (void)setCallbackID:(id)arg0;
- (id)wkWebView;
- (id)wrappedParamsString;
- (id)bpea_apiContext;
- (id)wkWebViewUrl;
- (id)bpea_fetchAPIContextFromOwn;
- (id)bpea_fetchAPIContextFromGlobal;
- (id)bpea_fixedNamespace;
- (id)methodNamespace;
- (id)bpea_generateAPIContext;
- (id)invokeParams;
- (id)sec_piperContext;
- (void)setInvokeParams:(id)arg0;
- (id)messageWithIESJS2NativeExecutorJSCallBackBlock:(id /* block */)arg0 configuration:(id)arg1;
- (void)setWkWebView:(id)arg0;
- (void)setWkWebViewUrl:(id)arg0;
- (void)setMethodNamespace:(id)arg0;
- (id)perfData;
- (void)setPerfData:(id)arg0;
- (id)iframeURLString;
- (void)setIframeURLString:(id)arg0;
- (void)setFrameURL:(id)arg0;
- (void)setIsMainFrame:(id)arg0;
- (id /* block */)executorJSCallBackBlock;
- (void)setDisableJSBErrorMonitor:(BOOL)arg0;
- (id)initWithDictionary:(id)arg0 callback:(id /* block */)arg1;
- (void)setExecutorJSCallBackBlock:(id /* block */)arg0;
- (BOOL)disableJSBErrorMonitor;
- (id)js2NativeMessage;
- (void)setJs2NativeMessage:(id)arg0;
- (id)messageType;
- (long long)statusCode;
- (id)messageUUID;
- (id)statusDescription;
- (void)setStatusCode:(long long)arg0;
- (void)setProtocolVersion:(id)arg0;
- (id)protocolVersion;
- (id)init;
- (void)setAppID:(id)arg0;
- (void)setEventID:(id)arg0;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id)messageBody;
- (id)initWithDictionary:(id)arg0;
- (id /* block */)callback;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setBeginTime:(id)arg0;
- (id)eventID;
- (id)endTime;
- (id)appID;
- (id)configuration;
- (void)setMessageType:(id)arg0;
- (id)params;
- (void)setEndTime:(id)arg0;
- (id)beginTime;
- (void)setConfiguration:(id)arg0;
- (id)isMainFrame;
- (unsigned long long)from;
- (void)setFrom:(unsigned long long)arg0;
- (void)setMessageUUID:(id)arg0;
- (void)setParams:(id)arg0;
- (void)setMessageBody:(id)arg0;
- (void)setStatusDescription:(id)arg0;
- (id)frameURL;
- (id)methodName;
- (void)setMethodName:(id)arg0;

@end