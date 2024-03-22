//
//     Generated by private class-dump
//

@class NSString;

@interface IESECEcSchemaMonitorParamModel : IESLiveBridgeModel {
    NSString *_scene;
    NSString *_params;
    NSString *_contextProvider;
    NSString *_scriptPath;
}

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *params;
@property (copy, nonatomic) NSString *contextProvider;
@property (copy, nonatomic) NSString *scriptPath;

+ (id)modelCustomPropertyMapper;

- (void)setScriptPath:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)params;
- (id)scene;
- (void)setParams:(id)arg0;
- (id)contextProvider;
- (void)setContextProvider:(id)arg0;
- (id)scriptPath;

@end
