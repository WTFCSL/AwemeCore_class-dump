//
//     Generated by private class-dump
//

@class NSData, NSURL;

@interface GLTFBuffer : NSObject {
    NSData *_data;
    NSURL *_uri;
    long long _length;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *uri;
@property (nonatomic) long long length;

- (id)initWithLength:(long long)arg0;
- (void)setLength:(long long)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (long long)length;
- (void)setUri:(id)arg0;
- (id)initWithData:(id)arg0;
- (id)uri;

@end
