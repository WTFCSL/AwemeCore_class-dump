//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEExportHookEventModel : NSObject {
    NSString *_name;
    NSDictionary *_params;
    double _time;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) double time;

- (id)toReportDic;
- (void).cxx_destruct;
- (double)time;
- (void)setTime:(double)arg0;
- (void)setName:(id)arg0;
- (id)params;
- (id)name;
- (void)setParams:(id)arg0;

@end
