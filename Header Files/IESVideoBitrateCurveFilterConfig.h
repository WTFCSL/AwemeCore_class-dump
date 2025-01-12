//
//     Generated by private class-dump
//

@class NSDictionary, NSString, IESVideoBSAutoBitrateModel;

@interface IESVideoBitrateCurveFilterConfig : MTLModel <MTLJSONSerializing> {
    NSDictionary *_clientFilterRequirement;
    NSString *_clientPriority;
    NSDictionary *_serverFilterRequirement;
    NSString *_serverPriority;
    IESVideoBSAutoBitrateModel *_autoBitrateModel;
}

@property (retain, nonatomic) NSDictionary *clientFilterRequirement;
@property (retain, nonatomic) NSString *clientPriority;
@property (retain, nonatomic) NSDictionary *serverFilterRequirement;
@property (retain, nonatomic) NSString *serverPriority;
@property (retain, nonatomic) IESVideoBSAutoBitrateModel *autoBitrateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)autoBitrateModel;
- (void)setAutoBitrateModel:(id)arg0;
- (id)clientFilterRequirement;
- (void)setClientFilterRequirement:(id)arg0;
- (id)serverFilterRequirement;
- (void)setServerFilterRequirement:(id)arg0;
- (id)serverPriority;
- (void)setServerPriority:(id)arg0;
- (void).cxx_destruct;
- (id)clientPriority;
- (void)setClientPriority:(id)arg0;

@end
