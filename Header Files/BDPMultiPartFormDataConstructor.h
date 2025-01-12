//
//     Generated by private class-dump
//

@class NSString, NSData;

@interface BDPMultiPartFormDataConstructor : NSObject {
    BOOL _isFirst;
    NSString *_name;
    NSData *_data;
    NSString *_filePath;
    NSString *_fileName;
    NSString *_mimeType;
    NSString *_boundary;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *boundary;
@property (nonatomic) BOOL isFirst;

+ (long long)sizeWithPath:(id)arg0;
+ (id)readDataFromFilePath:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;

- (void)setIsFirst:(BOOL)arg0;
- (id)getPartBoundaryByIsFirst:(BOOL)arg0 orIsLast:(BOOL)arg1;
- (id)getHeader;
- (id)getBoundaryHeader;
- (id)getBoundaryFooter;
- (unsigned long long)getTotalSize;
- (id)initWithName:(id)arg0 data:(id)arg1 boundary:(id)arg2 isFirst:(BOOL)arg3;
- (id)initWithName:(id)arg0 filePath:(id)arg1 fileName:(id)arg2 mineType:(id)arg3 boundary:(id)arg4 isFirst:(BOOL)arg5;
- (id)dataLengthIndex:(unsigned long long)arg0 WithMaxLength:(unsigned long long)arg1 isLastPart:(BOOL)arg2;
- (unsigned long long)getTotalSizeIsLastPart:(BOOL)arg0;
- (id)data;
- (id)filePath;
- (id)mimeType;
- (void).cxx_destruct;
- (id)fileName;
- (void)setFilePath:(id)arg0;
- (void)setData:(id)arg0;
- (void)setFileName:(id)arg0;
- (void)setMimeType:(id)arg0;
- (void)setName:(id)arg0;
- (id)name;
- (BOOL)isFirst;
- (id)boundary;
- (void)setBoundary:(id)arg0;

@end
