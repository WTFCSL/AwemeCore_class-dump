//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESLiveUserCardMonitor : NSObject {
    NSMutableDictionary *_monitorDict;
}

@property (retain, nonatomic) NSMutableDictionary *monitorDict;

- (id)monitorDict;
- (void)setMonitorDict:(id)arg0;
- (void)addDict:(id)arg0;
- (void)trackUpload;
- (void)setNumber:(id)arg0 forKey:(id)arg1;
- (id)init;
- (void)clearAllData;
- (void).cxx_destruct;
- (void)setString:(id)arg0 forKey:(id)arg1;

@end