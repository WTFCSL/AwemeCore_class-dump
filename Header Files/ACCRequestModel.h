//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL;

@interface ACCRequestModel : NSObject <ACCRequestModelProtocol> {
    BOOL _needCommonParams;
    id _bodyBlock;
    NSString *_fileName;
    NSURL *_fileURL;
    NSDictionary *_headerField;
    Class _objectClass;
    NSDictionary *_params;
    NSString *_targetPath;
    double _timeout;
    NSString *_urlString;
    unsigned long long _requestType;
}

@property (retain, nonatomic) Class requestSerializer;
@property (nonatomic) unsigned long long requestType;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL needCommonParams;
@property (retain, nonatomic) NSDictionary *headerField;
@property (nonatomic) double timeout;
@property (retain, nonatomic) Class objectClass;
@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) id bodyBlock;
@property (copy, nonatomic) NSString *targetPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedCommonParams:(BOOL)arg0;
- (BOOL)needCommonParams;
- (void)setHeaderField:(id)arg0;
- (void)setRequestSerializer:(Class)arg0;
- (Class)requestSerializer;
- (void)setTargetPath:(id)arg0;
- (id)headerField;
- (void)setBodyBlock:(id)arg0;
- (id)bodyBlock;
- (id)urlString;
- (Class)objectClass;
- (id)init;
- (void)setRequestType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)requestType;
- (id)fileName;
- (void)setFileURL:(id)arg0;
- (void)setFileName:(id)arg0;
- (id)fileURL;
- (double)timeout;
- (void)setUrlString:(id)arg0;
- (id)params;
- (void)setTimeout:(double)arg0;
- (void)setParams:(id)arg0;
- (void)setObjectClass:(Class)arg0;
- (id)targetPath;

@end