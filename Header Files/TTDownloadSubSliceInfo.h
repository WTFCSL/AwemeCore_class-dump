//
//     Generated by private class-dump
//

@class NSString;

@interface TTDownloadSubSliceInfo : NSObject {
    char _sliceNumber;
    BOOL _isImmutable;
    NSString *_fileStorageDir;
    unsigned long long _subSliceNumber;
    NSString *_subSliceName;
    NSString *_subSliceFullPath;
    long long _rangeStart;
    long long _rangeEnd;
    long long _sliceStatus;
}

@property (copy) NSString *fileStorageDir;
@property char sliceNumber;
@property unsigned long long subSliceNumber;
@property (copy) NSString *subSliceName;
@property (copy) NSString *subSliceFullPath;
@property long long rangeStart;
@property long long rangeEnd;
@property long long sliceStatus;
@property BOOL isImmutable;

- (void)setSliceStatus:(long long)arg0;
- (long long)sliceStatus;
- (id)subSliceName;
- (void)setSubSliceFullPath:(id)arg0;
- (id)subSliceFullPath;
- (char)sliceNumber;
- (void)setSliceNumber:(char)arg0;
- (id)fileStorageDir;
- (void)setFileStorageDir:(id)arg0;
- (void)setSubSliceNumber:(unsigned long long)arg0;
- (unsigned long long)subSliceNumber;
- (void)setSubSliceName:(id)arg0;
- (void)setIsImmutable:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)rangeStart;
- (BOOL)isImmutable;
- (void)setRangeStart:(long long)arg0;
- (long long)rangeEnd;
- (void)setRangeEnd:(long long)arg0;

@end
