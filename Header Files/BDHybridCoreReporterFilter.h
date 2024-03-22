//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDHybridCoreReporterFilter : NSObject {
    BOOL _clearAllServiceWithAid;
    NSString *_aid;
    NSArray *_serviceList;
}

@property (retain, nonatomic) NSString *aid;
@property (retain, nonatomic) NSArray *serviceList;
@property (nonatomic) BOOL clearAllServiceWithAid;

- (BOOL)isAimedAid:(id)arg0;
- (BOOL)clearAllServiceWithAid;
- (BOOL)isAimedService:(id)arg0;
- (BOOL)canFilterWithDic:(id)arg0 forService:(id)arg1;
- (void)setClearAllServiceWithAid:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setAid:(id)arg0;
- (id)aid;
- (id)serviceList;
- (void)setServiceList:(id)arg0;

@end