//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface YataError : NSObject <YataErrorInterface> {
    unsigned long long _code;
    NSString *_message;
    NSString *_detail;
    NSString *_trigger;
    NSString *_nodeName;
    NSDictionary *_extraParams;
}

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *trigger;
@property (copy, nonatomic) NSString *nodeName;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleError:(unsigned long long)arg0 detail:(id)arg1 triggerType:(id)arg2 nodeName:(id)arg3 params:(id)arg4 instance:(id)arg5;
+ (id)errorWithCode:(unsigned long long)arg0 detail:(id)arg1 trigger:(id)arg2 nodeName:(id)arg3 extraParams:(id)arg4;
+ (void)handlerError:(id)arg0 yataInstance:(id)arg1;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)setMessage:(id)arg0;
- (void)setCode:(unsigned long long)arg0;
- (void)setDetail:(id)arg0;
- (unsigned long long)code;
- (void).cxx_destruct;
- (id)trigger;
- (id)message;
- (void)setTrigger:(id)arg0;
- (id)detail;
- (id)nodeName;
- (void)setNodeName:(id)arg0;

@end