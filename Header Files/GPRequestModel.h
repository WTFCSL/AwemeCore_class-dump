//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL, GPMutipartFormData;

@interface GPRequestModel : NSObject {
    BOOL _needCommonParams;
    NSString *_urlString;
    NSDictionary *_params;
    NSDictionary *_headerField;
    double _timeout;
    Class _objectClass;
    NSURL *_fileURL;
    NSString *_fileName;
    GPMutipartFormData *_formData;
}

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL needCommonParams;
@property (copy, nonatomic) NSDictionary *headerField;
@property (nonatomic) double timeout;
@property (retain, nonatomic) Class objectClass;
@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) GPMutipartFormData *formData;

- (void)setNeedCommonParams:(BOOL)arg0;
- (BOOL)needCommonParams;
- (void)setHeaderField:(id)arg0;
- (id)headerField;
- (id)urlString;
- (Class)objectClass;
- (void).cxx_destruct;
- (id)fileName;
- (void)setFileURL:(id)arg0;
- (void)setFileName:(id)arg0;
- (id)fileURL;
- (double)timeout;
- (void)setUrlString:(id)arg0;
- (id)params;
- (void)setTimeout:(double)arg0;
- (id)formData;
- (void)setFormData:(id)arg0;
- (void)setParams:(id)arg0;
- (void)setObjectClass:(Class)arg0;

@end
