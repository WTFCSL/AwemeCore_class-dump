//
//     Generated by private class-dump
//

@interface BDACSiOSConfig : NSObject {
    long long _pornInspectMinImageSize;
    long long _maxConcurrentTaskCount;
    long long _maxQueueSize;
    long long _slardarFlushCount;
}

@property (readonly, nonatomic) long long pornInspectMinImageSize;
@property (readonly, nonatomic) long long maxConcurrentTaskCount;
@property (readonly, nonatomic) long long maxQueueSize;
@property (readonly, nonatomic) long long slardarFlushCount;

- (long long)maxConcurrentTaskCount;
- (long long)maxQueueSize;
- (long long)pornInspectMinImageSize;
- (long long)slardarFlushCount;
- (id)initWithDictionary:(id)arg0;

@end
