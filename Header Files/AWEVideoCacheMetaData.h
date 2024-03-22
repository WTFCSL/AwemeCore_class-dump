//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoCacheMetaData : NSObject <NSCoding> {
    BOOL _disableAutoTrim;
    unsigned long long _fileLength;
    NSString *_mimeType;
}

@property (nonatomic) unsigned long long fileLength;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) BOOL disableAutoTrim;

- (BOOL)disableAutoTrim;
- (void)setDisableAutoTrim:(BOOL)arg0;
- (id)init;
- (id)mimeType;
- (void).cxx_destruct;
- (void)setMimeType:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (id)description;
- (void)encodeWithCoder:(id)arg0;
- (unsigned long long)fileLength;
- (void)setFileLength:(unsigned long long)arg0;

@end
