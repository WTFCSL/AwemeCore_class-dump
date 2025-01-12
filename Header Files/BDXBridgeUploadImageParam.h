//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSData, NSArray;

@interface BDXBridgeUploadImageParam : NSObject {
    NSString *_urlString;
    NSDictionary *_headers;
    NSDictionary *_params;
    NSString *_mimeType;
    NSString *_fileName;
    NSData *_fileData;
    NSArray *_formDataBody;
}

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSData *fileData;
@property (copy, nonatomic) NSArray *formDataBody;

- (id)formDataBody;
- (void)setFormDataBody:(id)arg0;
- (id)urlString;
- (id)mimeType;
- (void)setHeaders:(id)arg0;
- (void).cxx_destruct;
- (id)headers;
- (id)fileName;
- (void)setFileName:(id)arg0;
- (void)setMimeType:(id)arg0;
- (void)setUrlString:(id)arg0;
- (id)params;
- (id)fileData;
- (void)setFileData:(id)arg0;
- (void)setParams:(id)arg0;

@end
