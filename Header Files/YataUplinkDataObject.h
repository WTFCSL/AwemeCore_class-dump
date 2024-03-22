//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface YataUplinkDataObject : NSObject <YataUplinkCallBackDataObject> {
    NSString *_triggerType;
    NSString *_nodeName;
    NSDictionary *_params;
    NSDictionary *_response;
}

@property (copy, nonatomic) NSString *triggerType;
@property (copy, nonatomic) NSString *nodeName;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSDictionary *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setTriggerType:(id)arg0;
- (void)setResponse:(id)arg0;
- (id)response;
- (id)params;
- (id)triggerType;
- (void)setParams:(id)arg0;
- (id)nodeName;
- (void)setNodeName:(id)arg0;

@end
