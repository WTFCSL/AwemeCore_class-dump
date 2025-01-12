//
//     Generated by private class-dump
//

@class NSString;

@interface AWEConcernFrequencyControlConfigMaker : NSObject {
    BOOL _enableForeverStrategy;
    int _maxShowTime;
    NSString *_key;
    unsigned long long _type;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL enableForeverStrategy;
@property (nonatomic) int maxShowTime;

- (void)setEnableForeverStrategy:(BOOL)arg0;
- (void)setMaxShowTime:(int)arg0;
- (BOOL)enableForeverStrategy;
- (int)maxShowTime;
- (id /* block */)configMaxShowTimeForExitForever;
- (id)initWithKey:(id)arg0;
- (id)key;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id /* block */)setup;
- (void)setKey:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (id /* block */)configType;

@end
