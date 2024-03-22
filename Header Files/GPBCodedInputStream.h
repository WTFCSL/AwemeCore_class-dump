//
//     Generated by private class-dump
//

@class NSData;

@interface GPBCodedInputStream : NSObject {
    struct GPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)arg0;

- (BOOL)isAtEnd;
- (void)readGroup:(int)arg0 message:(id)arg1 extensionRegistry:(id)arg2;
- (void)readUnknownGroup:(int)arg0 message:(id)arg1;
- (BOOL)readBool;
- (id)readString;
- (unsigned long long)position;
- (id)readBytes;
- (BOOL)skipField:(int)arg0;
- (unsigned int)readFixed32;
- (int)readSFixed32;
- (int)readInt32;
- (long long)readSInt64;
- (void)checkLastTagWas:(int)arg0;
- (void)popLimit:(unsigned long long)arg0;
- (long long)readSFixed64;
- (unsigned long long)readUInt64;
- (float)readFloat;
- (unsigned long long)pushLimit:(unsigned long long)arg0;
- (int)readSInt32;
- (void)skipMessage;
- (int)readTag;
- (void)readMessage:(id)arg0 extensionRegistry:(id)arg1;
- (void)dealloc;
- (double)readDouble;
- (void)readMapEntry:(id)arg0 extensionRegistry:(id)arg1 field:(id)arg2 parentMessage:(id)arg3;
- (unsigned int)readUInt32;
- (id)initWithData:(id)arg0;
- (int)readEnum;
- (long long)readInt64;
- (unsigned long long)readFixed64;

@end