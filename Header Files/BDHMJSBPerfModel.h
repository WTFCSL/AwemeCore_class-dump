//
//     Generated by private class-dump
//

@class NSString;

@interface BDHMJSBPerfModel : NSObject {
    NSString *_bridgeName;
    NSString *_statusDesc;
    long long _statusCode;
    NSString *_protocolVersion;
    NSString *_nameSpace;
    NSString *_containerId;
    NSString *_jssdkVersion;
    double _invokeTS;
    double _callbackTS;
    double _fireEventTS;
    double _costTime;
}

@property (copy, nonatomic) NSString *bridgeName;
@property (copy, nonatomic) NSString *statusDesc;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *protocolVersion;
@property (copy, nonatomic) NSString *nameSpace;
@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSString *jssdkVersion;
@property (nonatomic) double invokeTS;
@property (nonatomic) double callbackTS;
@property (nonatomic) double fireEventTS;
@property (nonatomic) double costTime;

- (id)bridgeName;
- (void)setBridgeName:(id)arg0;
- (void)setCostTime:(double)arg0;
- (double)costTime;
- (id)statusDesc;
- (void)setStatusDesc:(id)arg0;
- (double)invokeTS;
- (double)callbackTS;
- (double)fireEventTS;
- (id)lynxJSBPerfDict;
- (id)jssdkVersion;
- (id)webJSBPerfDict;
- (void)setJssdkVersion:(id)arg0;
- (void)setInvokeTS:(double)arg0;
- (void)setCallbackTS:(double)arg0;
- (void)setFireEventTS:(double)arg0;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg0;
- (void)setProtocolVersion:(id)arg0;
- (id)protocolVersion;
- (void).cxx_destruct;
- (void)setNameSpace:(id)arg0;
- (id)containerId;
- (void)setContainerId:(id)arg0;
- (id)nameSpace;

@end
