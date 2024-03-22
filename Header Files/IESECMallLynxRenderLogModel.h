//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESECMallLynxRenderLogModel : NSObject {
    BOOL _isPreload;
    BOOL _isPreDecode;
    long long _status;
    long long _errorCode;
    NSString *_errorMsg;
    NSString *_templateUrl;
    NSString *_lynxSchema;
    double _lynxWillStartLoading;
    double _lynxRenderStart;
    double _lynxStartFetchResource;
    NSString *_lynxFetchResourceWay;
    double _lynxEndFetchResource;
    double _lynxEndLoading;
    double _lynxRenderEnd;
    long long _itemType;
    NSString *_sectionId;
    NSString *_scene;
    long long _loadmoreRangesize;
    NSDictionary *_perfDict;
    NSString *_resAccessKey;
    NSString *_resChannelName;
    NSString *_resBundleName;
    unsigned long long _resVersion;
    NSString *_sourceType;
    NSString *_sourceUrl;
    NSString *_cdnUrl;
    NSString *_logId;
}

@property (nonatomic) long long status;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *templateUrl;
@property (copy, nonatomic) NSString *lynxSchema;
@property (nonatomic) double lynxWillStartLoading;
@property (nonatomic) double lynxRenderStart;
@property (nonatomic) double lynxStartFetchResource;
@property (copy, nonatomic) NSString *lynxFetchResourceWay;
@property (nonatomic) double lynxEndFetchResource;
@property (nonatomic) double lynxEndLoading;
@property (nonatomic) double lynxRenderEnd;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *sectionId;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL isPreDecode;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long loadmoreRangesize;
@property (copy, nonatomic) NSDictionary *perfDict;
@property (copy, nonatomic) NSString *resAccessKey;
@property (copy, nonatomic) NSString *resChannelName;
@property (copy, nonatomic) NSString *resBundleName;
@property (nonatomic) unsigned long long resVersion;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *cdnUrl;
@property (copy, nonatomic) NSString *logId;

- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg0;
- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (id)lynxSchema;
- (id)logId;
- (void)setLogId:(id)arg0;
- (id)cdnUrl;
- (unsigned long long)resVersion;
- (void)setLynxSchema:(id)arg0;
- (void)setResVersion:(unsigned long long)arg0;
- (void)setCdnUrl:(id)arg0;
- (id)perfDict;
- (void)setPerfDict:(id)arg0;
- (double)lynxRenderStart;
- (double)lynxStartFetchResource;
- (double)lynxEndFetchResource;
- (double)lynxEndLoading;
- (double)lynxRenderEnd;
- (double)lynxWillStartLoading;
- (BOOL)isPreDecode;
- (id)lynxFetchResourceWay;
- (long long)loadmoreRangesize;
- (id)resAccessKey;
- (id)resChannelName;
- (id)resBundleName;
- (id)toParamsDictionary;
- (void)setLynxWillStartLoading:(double)arg0;
- (void)setLynxRenderStart:(double)arg0;
- (void)setLynxStartFetchResource:(double)arg0;
- (void)setLynxFetchResourceWay:(id)arg0;
- (void)setLynxEndFetchResource:(double)arg0;
- (void)setLynxEndLoading:(double)arg0;
- (void)setLynxRenderEnd:(double)arg0;
- (void)setIsPreDecode:(BOOL)arg0;
- (void)setLoadmoreRangesize:(long long)arg0;
- (void)setResAccessKey:(id)arg0;
- (void)setResChannelName:(id)arg0;
- (void)setResBundleName:(id)arg0;
- (void)setSourceType:(id)arg0;
- (id)sourceType;
- (long long)itemType;
- (id)init;
- (void)setItemType:(long long)arg0;
- (void)setScene:(id)arg0;
- (id)sectionId;
- (void).cxx_destruct;
- (long long)status;
- (void)setErrorCode:(long long)arg0;
- (long long)errorCode;
- (id)toDictionary;
- (void)setStatus:(long long)arg0;
- (id)scene;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg0;
- (void)setSectionId:(id)arg0;
- (id)templateUrl;
- (void)setTemplateUrl:(id)arg0;

@end
