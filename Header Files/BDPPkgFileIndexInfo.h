//
//     Generated by private class-dump
//

@class NSString;

@interface BDPPkgFileIndexInfo : NSObject <NSCoding> {
    unsigned int _offset;
    unsigned int _size;
    NSString *_filePath;
}

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int size;
@property (readonly, nonatomic) unsigned int endOffset;

- (id)filePath;
- (void).cxx_destruct;
- (void)setOffset:(unsigned int)arg0;
- (void)setFilePath:(id)arg0;
- (unsigned int)offset;
- (id)debugDescription;
- (unsigned int)endOffset;
- (id)initWithCoder:(id)arg0;
- (unsigned int)size;
- (void)setSize:(unsigned int)arg0;
- (void)encodeWithCoder:(id)arg0;

@end
