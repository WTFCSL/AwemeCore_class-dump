//
//     Generated by private class-dump
//

@class NSString;

@interface BDXLoggerContext : NSObject {
    NSString *_containerName;
    NSString *_bulletSession;
    NSString *_xBridgeSession;
    NSString *_resourceLoaderSession;
    NSString *_containerID;
    NSString *_xBridgeMethodName;
    NSString *_xBridgeMethodStage;
    NSString *_paramsMessage;
}

@property (copy, nonatomic) NSString *paramsMessage;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *bulletSession;
@property (copy, nonatomic) NSString *xBridgeSession;
@property (copy, nonatomic) NSString *resourceLoaderSession;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *xBridgeMethodName;
@property (copy, nonatomic) NSString *xBridgeMethodStage;

- (void)setBulletSession:(id)arg0;
- (void)setXBridgeMethodName:(id)arg0;
- (void)setXBridgeMethodStage:(id)arg0;
- (id)paramsMessage;
- (void)setParamsMessage:(id)arg0;
- (id)bulletSession;
- (id)xBridgeSession;
- (void)setXBridgeSession:(id)arg0;
- (id)resourceLoaderSession;
- (void)setResourceLoaderSession:(id)arg0;
- (id)xBridgeMethodName;
- (id)xBridgeMethodStage;
- (id)init;
- (void)setContainerID:(id)arg0;
- (void).cxx_destruct;
- (id)containerID;
- (id)containerName;
- (void)setObject:(id)arg0 forKeyedSubscript:(id)arg1;
- (void)setContainerName:(id)arg0;

@end
