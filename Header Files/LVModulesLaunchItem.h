//
//     Generated by private class-dump
//

@class NSString;

@interface LVModulesLaunchItem : NSObject {
    NSString *_key;
    double _start;
    double _end;
    double _cost;
    NSString *_start_time;
    NSString *_end_time;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) double cost;
@property (copy, nonatomic) NSString *start_time;
@property (copy, nonatomic) NSString *end_time;

- (void)setStart_time:(id)arg0;
- (id)modelToJson;
- (void)setEnd:(double)arg0;
- (double)end;
- (id)key;
- (id)init;
- (void)setStart:(double)arg0;
- (void).cxx_destruct;
- (void)setKey:(id)arg0;
- (double)start;
- (double)cost;
- (id)start_time;
- (id)end_time;
- (void)setCost:(double)arg0;
- (void)setEnd_time:(id)arg0;

@end