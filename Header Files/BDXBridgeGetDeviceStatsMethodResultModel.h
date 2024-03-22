//
//     Generated by private class-dump
//

@class NSNumber;

@interface BDXBridgeGetDeviceStatsMethodResultModel : BDXBridgeModel {
    NSNumber *_memory_all;
    NSNumber *_memory_use;
    NSNumber *_memory_rest;
    NSNumber *_memory_limit;
    NSNumber *_cpu_usage;
    NSNumber *_temperature;
}

@property (retain, nonatomic) NSNumber *memory_all;
@property (retain, nonatomic) NSNumber *memory_use;
@property (retain, nonatomic) NSNumber *memory_rest;
@property (retain, nonatomic) NSNumber *memory_limit;
@property (retain, nonatomic) NSNumber *cpu_usage;
@property (retain, nonatomic) NSNumber *temperature;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cpu_usage;
- (void)setCpu_usage:(id)arg0;
- (void)setMemory_all:(id)arg0;
- (void)setMemory_use:(id)arg0;
- (void)setMemory_rest:(id)arg0;
- (void)setMemory_limit:(id)arg0;
- (id)memory_all;
- (id)memory_use;
- (id)memory_rest;
- (id)memory_limit;
- (void)setTemperature:(id)arg0;
- (id)temperature;
- (void).cxx_destruct;

@end
