//
//     Generated by private class-dump
//

@class NSString;

@interface TTVideoEngineThreadInfo : NSObject {
    unsigned int _thread;
    float _usage;
    long long _priority;
    long long _weight;
    NSString *_name;
}

@property (nonatomic) unsigned int thread;
@property (nonatomic) float usage;
@property (nonatomic) long long priority;
@property (nonatomic) long long weight;
@property (copy, nonatomic) NSString *name;

- (void)setUsage:(float)arg0;
- (long long)weight;
- (void)setWeight:(long long)arg0;
- (float)usage;
- (void).cxx_destruct;
- (void)setPriority:(long long)arg0;
- (void)setName:(id)arg0;
- (unsigned int)thread;
- (long long)priority;
- (id)name;
- (void)setThread:(unsigned int)arg0;

@end
