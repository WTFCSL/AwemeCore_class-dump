//
//     Generated by private class-dump
//

@class NSNumber;

@interface PuzzleHybridPrefSampleCpuInfo : NSObject {
    NSNumber *_cpu_rate;
    NSNumber *_total_rate;
    NSNumber *_main_thread_usage;
    NSNumber *_cost;
    NSNumber *_generateTime;
}

@property (retain, nonatomic) NSNumber *cpu_rate;
@property (retain, nonatomic) NSNumber *total_rate;
@property (retain, nonatomic) NSNumber *main_thread_usage;
@property (retain, nonatomic) NSNumber *cost;
@property (retain, nonatomic) NSNumber *generateTime;

- (id)cpu_rate;
- (void)setCpu_rate:(id)arg0;
- (id)main_thread_usage;
- (id)total_rate;
- (id)generateTime;
- (void)setGenerateTime:(id)arg0;
- (void)setTotal_rate:(id)arg0;
- (void)setMain_thread_usage:(id)arg0;
- (id)toDictinary;
- (void).cxx_destruct;
- (id)cost;
- (void)setCost:(id)arg0;

@end
