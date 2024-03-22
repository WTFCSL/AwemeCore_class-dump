//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStorageServiceMonitorModel : NSObject {
    BOOL _mainThread;
    BOOL _success;
    BOOL _noAmendVersion;
    NSString *_name;
    double _occurrenceTime;
    long long _monitorType;
    long long _opreationType;
    long long _size;
    double _totalTime;
    NSString *_errorInfo;
    long long _inputType;
    long long _moduleName;
    NSString *_stackInfo;
    double _serializeStart;
    double _serializeFinish;
    double _deSerializeStart;
    double _deSerializeFinish;
    double _IOStart;
    double _IOFinish;
}

@property (nonatomic) BOOL noAmendVersion;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double occurrenceTime;
@property (nonatomic) long long monitorType;
@property (nonatomic) long long opreationType;
@property (nonatomic) long long size;
@property (nonatomic) double totalTime;
@property (copy, nonatomic) NSString *errorInfo;
@property (nonatomic) BOOL mainThread;
@property (nonatomic) BOOL success;
@property (nonatomic) long long inputType;
@property (nonatomic) long long moduleName;
@property (copy, nonatomic) NSString *stackInfo;
@property (nonatomic) double serializeStart;
@property (nonatomic) double serializeFinish;
@property (nonatomic) double deSerializeStart;
@property (nonatomic) double deSerializeFinish;
@property (nonatomic) double IOStart;
@property (nonatomic) double IOFinish;

+ (id)buildVersion;

- (void)setMonitorType:(long long)arg0;
- (long long)monitorType;
- (void)setModuleName:(long long)arg0;
- (void)setMainThread:(BOOL)arg0;
- (id)errorInfo;
- (void)setErrorInfo:(id)arg0;
- (void)setOccurrenceTime:(double)arg0;
- (void)setOpreationType:(long long)arg0;
- (void)setStackInfo:(id)arg0;
- (double)occurrenceTime;
- (void)setSerializeStart:(double)arg0;
- (void)setSerializeFinish:(double)arg0;
- (void)setDeSerializeStart:(double)arg0;
- (void)setDeSerializeFinish:(double)arg0;
- (void)setIOStart:(double)arg0;
- (void)setIOFinish:(double)arg0;
- (long long)opreationType;
- (id)stackInfo;
- (double)serializeStart;
- (double)serializeFinish;
- (double)deSerializeStart;
- (double)deSerializeFinish;
- (double)IOStart;
- (double)IOFinish;
- (id)modelToDictionary;
- (void)setNoAmendVersion:(BOOL)arg0;
- (id)appVersionConvertToBuildVersion:(id)arg0;
- (BOOL)noAmendVersion;
- (double)totalTime;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (BOOL)success;
- (void)setName:(id)arg0;
- (void)setSuccess:(BOOL)arg0;
- (long long)size;
- (void)setSize:(long long)arg0;
- (long long)moduleName;
- (BOOL)mainThread;
- (id)name;
- (void)setTotalTime:(double)arg0;
- (long long)inputType;
- (void)setInputType:(long long)arg0;

@end
