//
//     Generated by private class-dump
//

@interface BDPBridgeAPIUtil : NSObject

+ (id)checkInputParams:(id)arg0 metaData:(id)arg1 error:(id *)arg2;
+ (id)errorWithErrorMsg:(id)arg0;
+ (BOOL)isNumericString:(id)arg0;
+ (BOOL)isBooleanString:(id)arg0;
+ (id)checkParamType:(id)arg0 paramName:(id)arg1 metaData:(id)arg2;
+ (id)getDefaultValue:(id)arg0 paramName:(id)arg1 metaData:(id)arg2;
+ (id)checkParamNotEmpty:(id)arg0 paramName:(id)arg1 metaData:(id)arg2;
+ (id)checkParamValid:(id)arg0 paramName:(id)arg1 metaData:(id)arg2;
+ (id)checkParamInvalid:(id)arg0 paramName:(id)arg1 metaData:(id)arg2;
+ (id)parseJson:(id)arg0 error:(id *)arg1 errKey:(id)arg2 monitor:(id)arg3;
+ (id)checkParamValidRange:(id)arg0 paramName:(id)arg1 metaData:(id)arg2;

@end