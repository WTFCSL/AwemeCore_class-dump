//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface BDPBridgeContext : NSObject {
    NSString *_name;
    NSString *_namesapce;
    NSString *_url;
    NSString *_path;
    NSString *_appID;
    NSString *_module;
    NSArray *_inParams;
    NSDictionary *_inParamsDic;
    NSDictionary *_outParams;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *namesapce;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *module;
@property (copy, nonatomic) NSArray *inParams;
@property (copy, nonatomic) NSDictionary *inParamsDic;
@property (copy, nonatomic) NSDictionary *outParams;

- (id)inParamsDic;
- (void)setInParamsDic:(id)arg0;
- (id)namesapce;
- (void)setNamesapce:(id)arg0;
- (id)inParams;
- (void)setInParams:(id)arg0;
- (id)outParams;
- (void)setOutParams:(id)arg0;
- (void)setPath:(id)arg0;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)path;
- (void)setUrl:(id)arg0;
- (id)appID;
- (void)setName:(id)arg0;
- (id)module;
- (id)url;
- (id)name;
- (void)setModule:(id)arg0;

@end