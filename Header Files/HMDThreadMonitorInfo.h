//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface HMDThreadMonitorInfo : NSObject {
    unsigned int _mostThreadID;
    NSMutableDictionary *_allThreadDic;
    NSString *_mostThread;
    unsigned long long _mostThreadCount;
    unsigned long long _allThreadCount;
}

@property (retain, nonatomic) NSMutableDictionary *allThreadDic;
@property (copy, nonatomic) NSString *mostThread;
@property (nonatomic) unsigned long long mostThreadCount;
@property (nonatomic) unsigned int mostThreadID;
@property (nonatomic) unsigned long long allThreadCount;

- (void)setAllThreadDic:(id)arg0;
- (void)setMostThread:(id)arg0;
- (void)setMostThreadCount:(unsigned long long)arg0;
- (void)setMostThreadID:(unsigned int)arg0;
- (void)setAllThreadCount:(unsigned long long)arg0;
- (id)mostThread;
- (unsigned long long)mostThreadCount;
- (unsigned int)mostThreadID;
- (unsigned long long)allThreadCount;
- (id)allThreadDic;
- (id)init;
- (void).cxx_destruct;

@end
