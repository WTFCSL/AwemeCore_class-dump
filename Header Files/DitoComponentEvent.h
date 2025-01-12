//
//     Generated by private class-dump
//

@class DitoPageContext, NSString, NSDictionary, NSNumber;

@interface DitoComponentEvent : NSObject {
    BOOL _isViewStub;
    BOOL _everHasSize;
    long long _errorStage;
    long long _longestStage;
    double _stayTime;
    NSString *_subType;
    NSString *_tag;
    NSString *_customTag;
    NSString *_templateURL;
    NSDictionary *_extraParams;
    DitoPageContext *_context;
    NSString *_errorMsg;
    NSString *_errorType;
    NSNumber *_stayTimeStartTimestamp;
}

@property (nonatomic) long long longestStage;
@property (nonatomic) long long errorStage;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *errorType;
@property (retain, nonatomic) NSNumber *stayTimeStartTimestamp;
@property (nonatomic) double stayTime;
@property (nonatomic) BOOL isViewStub;
@property (nonatomic) BOOL everHasSize;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *customTag;
@property (copy, nonatomic) NSString *templateURL;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (weak, nonatomic) DitoPageContext *context;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (void)setStayTime:(double)arg0;
- (double)stayTime;
- (void)setCustomTag:(id)arg0;
- (id)customTag;
- (long long)errorStage;
- (void)setErrorStage:(long long)arg0;
- (void)stayTimeRecordStart;
- (void)stayTimeRecordPause;
- (void)setLongestStage:(long long)arg0;
- (void)setStayTimeStartTimestamp:(id)arg0;
- (void)setIsViewStub:(BOOL)arg0;
- (long long)longestStage;
- (id)getComponentStateStringOf:(long long)arg0;
- (BOOL)isViewStub;
- (id)viewModelExtraTrackParams;
- (id)stayTimeStartTimestamp;
- (void)setupWith:(id)arg0 pageInfo:(id)arg1;
- (void)updateWith:(id)arg0 pageInfo:(id)arg1;
- (BOOL)setNodeErrorStage:(long long)arg0 message:(id)arg1 errorType:(id)arg2;
- (BOOL)setNodeLongestStage:(long long)arg0;
- (id)trackDataWithScen:(id)arg0 entityID:(id)arg1 pageKey:(id)arg2 bizCode:(id)arg3 logID:(id)arg4 sessionID:(id)arg5;
- (BOOL)everHasSize;
- (void)setEverHasSize:(BOOL)arg0;
- (id)init;
- (id)templateURL;
- (void).cxx_destruct;
- (void)setSubType:(id)arg0;
- (void)setTemplateURL:(id)arg0;
- (void)setContext:(id)arg0;
- (id)subType;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)context;
- (id)errorType;
- (void)setErrorType:(id)arg0;

@end
