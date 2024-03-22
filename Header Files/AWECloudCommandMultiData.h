//
//     Generated by private class-dump
//

@class NSString, NSData;

@interface AWECloudCommandMultiData : NSObject {
    NSString *_mimeType;
    NSString *_fileName;
    NSData *_data;
    NSString *_fileType;
}

@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *fileType;

- (id)data;
- (id)mimeType;
- (void).cxx_destruct;
- (id)fileType;
- (id)fileName;
- (void)setFileType:(id)arg0;
- (void)setData:(id)arg0;
- (void)setFileName:(id)arg0;
- (void)setMimeType:(id)arg0;

@end
